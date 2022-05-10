/*
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% MINI PROJECT: Side-Channel Analysis on Shakti's AES Accelerator %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

Purpose  : Multi-threaded python code to compute TVLA_scores score from traces present in a specified folder
Author   : Surya Prasad.S (EE19B121) 
Outputs  : TVLA_scores score for different number of traces and for different width dimension and plot of t-value distribution
Usage	 : These are the variables which can be modified by the user
		1. path_csv can be modified for giving the location of the folder containing the total_traces
		2. ntraces_list contains a list of number of traces to be read and can be used for comparing change in TVLA_scores score for different number of traces 
		3. num_cores is the number of physical cores which will be used and it is suggested to use a number little lower (Like 10 for 12-core computer)
		4. widths_list contains a list of number of traces each software thread will read and is used to determine the workload of each thread
		
		For reading multiple folders, use os.listdir and read each folder

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

# Importing libraries
import os
import pandas as pd
import numpy as np
import csv
import threading as th
from time import time
from joblib import Parallel, delayed		# For parallel computing


# Variables used by this script
path_csv =															# path of the folder with traces (only csv files are read here)
csv_files = [str(path_csv+f) for f in os.listdir(path_csv)]			# os.listdir(path) can be used to display all files in the path
csv_files = sorted(csv_files)										# this is very necessary because we have two sets of traces corresponding to random and fixed input
total_traces = len(csv_files)										# total number of traces

## List to collect certain number of traces - For computing the TVLA_scores score for different number of traces
ntraces_list = [100, 500, 1000, 2000, 5000, 10000, 20000, 50000, total_traces]

## Variables for number of cores to be used and amount of load to be taken by each thread
num_cores = 10
widths_list = [1000, 2000, 3000, 10000]
	
df_temp = pd.read_csv(csv_files[0])
n_sample_points = df_temp.shape[0] - 3

print("Total number of traces going to be used is", total_traces, " and the total number of sampled points in each trace is", n_sample_points)


# Function to compute partial mean and partial variance for dataset 1 and dataset 2
## Here ntraces parameter is used to cut the computation if the range of files to be analysed is crossing ntraces
def partial_accumulator (csv_files, i, width, ntraces):
	set1_mean = np.zeros(shape=(n_sample_points,1))
	set2_mean = np.zeros(shape=(n_sample_points,1))
	set1_var  = np.zeros(shape=(n_sample_points,1))
	set2_var  = np.zeros(shape=(n_sample_points,1))
	
	pos = 0
	for file in csv_files[width*i:width*i+width]:
		current_file = open(file)
		csvreader = csv.reader(current_file)
		
		if pos + width*i > ntraces-1:
			break

		j=0
		for row in csvreader:
			try :
				if pos%2==0:
					set1_mean[j] += float(row[0])  			# To reduce error division by ntraces done at the end
					set1_var[j] += pow(float(row[0]),2) 	# Here too similarly
				else:
					set2_mean[j] += float(row[0])
					set2_var[j] += pow(float(row[0]),2) 
			except :
				pass
			j+=1
		pos+=1
		current_file.close()

	return set1_mean, set1_var, set2_mean, set2_var


TVLA_scores = []
for width in widths_list:
	print("Computing with width =", width)
	for ntraces in ntraces_list:
		StartTime = time()							# Starting time of recording
		
		if ntraces > total_traces:
			break
		if ntraces%2 != 0:
			print("ERROR: Odd number of traces given!")
			exit()

		print("Reading", ntraces, "traces")
		set1_mean = np.zeros(shape=(n_sample_points,1))
		set2_mean = np.zeros(shape=(n_sample_points,1))
		set1_var  = np.zeros(shape=(n_sample_points,1))
		set2_var  = np.zeros(shape=(n_sample_points,1))

		# More number of threads are generated so that if ntraces is not a multiple it can still be computed with an extra thread
		result = Parallel(n_jobs=num_cores)(delayed(partial_accumulator)(csv_files, i, width, ntraces) for i in range(int(ntraces/width)+1))

		for vals in result:
			set1_mean += vals[0]
			set1_var  += vals[1]
			set2_mean += vals[2]
			set2_var  += vals[3]
		
		set1_mean = set1_mean/(ntraces/2)
		set2_mean = set2_mean/(ntraces/2)
		set1_var = set1_var/(ntraces/2) - pow(set1_mean, 2)
		set2_var = set2_var/(ntraces/2) - pow(set2_mean, 2)

		t_values = np.zeros(shape=(n_sample_points,1))

		for i in range(3,n_sample_points):
			try:
				if ((set1_var[i]+set2_var[i]) <= 0):
					print("ERROR: invalid variance values.. It is suggested to run the code again")
					exit()

				t_values[i] = (set1_mean[i]-set2_mean[i])/pow((set1_var[i]+set2_var[i])/(ntraces/2), 0.5)
			except:
				pass
		
		EndTime = time()							# Ending time of recording

		print("Time taken for", ntraces,"traces using", width, "width:", EndTime-StartTime,"sec")
		
		TVLA_scores.append(t_values.max())
		
	print("TVLA for", path_csv, "for width", width)
	for i in range(len(TVLA_scores)):
		print(ntraces_list, TVLA_scores)
		print(ntraces_list[i], " traces - TVLA score = ", TVLA_scores[i])


