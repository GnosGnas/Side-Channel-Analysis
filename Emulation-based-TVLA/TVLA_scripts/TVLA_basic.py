/*
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% MINI PROJECT: Side-Channel Analysis on Shakti's AES Accelerator %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

Purpose  : Single-threaded python code to compute TVLA score from traces present in a specified folder
Author   : Surya Prasad.S (EE19B121) 
Outputs  : TVLA score for different number of traces and plot of t-value distribution
Usage	 : These are the variables which can be modified by the user
		1. path_csv can be modified for giving the location of the folder containing the total_traces
		2. ntraces_list contains a list of number of traces to be read and can be used for comparing change in TVLA score for different number of traces 

		For reading multiple folders again use os.listdir and read each folder

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

# Importing libraries
import os
import pandas as pd
import numpy as np
import csv
from time import time
import matplotlib.pyplot as plt


# Variables used by this script
path_csv = 															# path of the folder with traces (only csv files are read here)
csv_files = [str(path_csv+f) for f in os.listdir(path_csv)]			# os.listdir(path) can be used to display all files in the path
csv_files = sorted(csv_files)										# this is very necessary because we have two sets of traces corresponding to random and fixed input
total_traces = len(csv_files)										# total number of traces


## List to collect certain number of traces - For computing the TVLA score for different number of traces
ntraces_list = [100, 500, 1000, 2000, 5000, 10000, 20000, 50000, total_traces]	

df_temp = pd.read_csv(csv_files[0])
n_sample_points = df_temp.shape[0] - 3

print("Total number of traces going to be used is", total_traces, " and the total number of sampled points in each trace is", n_sample_points)


TVLA_scores = []
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
	
	# Reading each file and element wise we are accumulating it in the mean and var variables for set1 and set2
	## In my traces, the dataset 1 used fixed input and dataset 2 used random inputs and were collected alternatively
	for i in range(ntraces):
		current_file = open(csv_files[i])
		csvreader = csv.reader(current_file)
		j=0
		for row in csvreader:
			try :
				if i%2==0:
					set1_mean[j] += float(row[0])  			# To reduce error division by ntraces done at the end
					set1_var[j] += pow(float(row[0]),2) 	# Here too similarly
				else:
					set2_mean[j] += float(row[0])
					set2_var[j] += pow(float(row[0]),2) 
			except :
				pass
			j+=1

		'''
		if i%2000==0 and i!=0:
			print("Working...", i)
		'''
		current_file.close()

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

	print("Time taken for", ntraces,":", EndTime-StartTime,"sec")
	'''
	plt.figure()
	plt.plot(TVLA_Plot, linewidth=2.0)
	plt.grid(True)
	plt.title(r'TVLA plot')
	plt.xlabel('$t\\rightarrow$', size = 15)
	plt.ylabel('$t-values\\rightarrow$', size = 15)
	plt.show()
	'''
	TVLA_scores.append(t_values.max())
	
print("TVLA for", path_csv)
for i in range(len(TVLA_scores)):
	print(ntraces_list[i], " traces - TVLA score = ", TVLA_scores[i])
	

