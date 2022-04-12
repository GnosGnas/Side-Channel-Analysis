import os
import sys
import pickle as pk
import numpy as np
import matplotlib.pyplot as plt
from Crypto.Cipher import AES
import scipy.stats as st
#from aes import ARK,SB,SR,MC
#from tqdm import tqdm
from multiprocessing.pool import ThreadPool as Pool
from collections import Iterable

path='/home/vikash/';
filepath=path+'files/';
# tpath=path+'traces_caesar_protected_2/';
tpath=path+'aes-02/';
#ppath=path+'pkls/no_obfuscation/';
ppath=path+'pkls/no_obfuscation/';
fnames=sorted(os.listdir(tpath));
IOBlockSize = 16
key = [0x01, 0x23, 0x45, 0x67, 0x89, 0xab, 0xcd, 0xef, 0x12, 0x34, 0x56, 0x78, 0x9a, 0xbc, 0xde, 0xf0]

rkey1=[0x65, 0x3e, 0xc9, 0xdf, 0xec, 0x95, 0x04, 0x30, 0xfe, 0xa1, 0x52, 0x48, 0x64, 0x1d, 0x8c, 0xb8]
fctimes=[os.path.getmtime(tpath+x) for x in fnames];

Sbox = [
0x63,0x7c,0x77,0x7b,0xf2,0x6b,0x6f,0xc5,0x30,0x01,0x67,0x2b,0xfe,0xd7,0xab,0x76,
0xca,0x82,0xc9,0x7d,0xfa,0x59,0x47,0xf0,0xad,0xd4,0xa2,0xaf,0x9c,0xa4,0x72,0xc0,
0xb7,0xfd,0x93,0x26,0x36,0x3f,0xf7,0xcc,0x34,0xa5,0xe5,0xf1,0x71,0xd8,0x31,0x15,
0x04,0xc7,0x23,0xc3,0x18,0x96,0x05,0x9a,0x07,0x12,0x80,0xe2,0xeb,0x27,0xb2,0x75,
0x09,0x83,0x2c,0x1a,0x1b,0x6e,0x5a,0xa0,0x52,0x3b,0xd6,0xb3,0x29,0xe3,0x2f,0x84,
0x53,0xd1,0x00,0xed,0x20,0xfc,0xb1,0x5b,0x6a,0xcb,0xbe,0x39,0x4a,0x4c,0x58,0xcf,
0xd0,0xef,0xaa,0xfb,0x43,0x4d,0x33,0x85,0x45,0xf9,0x02,0x7f,0x50,0x3c,0x9f,0xa8,
0x51,0xa3,0x40,0x8f,0x92,0x9d,0x38,0xf5,0xbc,0xb6,0xda,0x21,0x10,0xff,0xf3,0xd2,
0xcd,0x0c,0x13,0xec,0x5f,0x97,0x44,0x17,0xc4,0xa7,0x7e,0x3d,0x64,0x5d,0x19,0x73,
0x60,0x81,0x4f,0xdc,0x22,0x2a,0x90,0x88,0x46,0xee,0xb8,0x14,0xde,0x5e,0x0b,0xdb,
0xe0,0x32,0x3a,0x0a,0x49,0x06,0x24,0x5c,0xc2,0xd3,0xac,0x62,0x91,0x95,0xe4,0x79,
0xe7,0xc8,0x37,0x6d,0x8d,0xd5,0x4e,0xa9,0x6c,0x56,0xf4,0xea,0x65,0x7a,0xae,0x08,
0xba,0x78,0x25,0x2e,0x1c,0xa6,0xb4,0xc6,0xe8,0xdd,0x74,0x1f,0x4b,0xbd,0x8b,0x8a,
0x70,0x3e,0xb5,0x66,0x48,0x03,0xf6,0x0e,0x61,0x35,0x57,0xb9,0x86,0xc1,0x1d,0x9e,
0xe1,0xf8,0x98,0x11,0x69,0xd9,0x8e,0x94,0x9b,0x1e,0x87,0xe9,0xce,0x55,0x28,0xdf,
0x8c,0xa1,0x89,0x0d,0xbf,0xe6,0x42,0x68,0x41,0x99,0x2d,0x0f,0xb0,0x54,0xbb,0x16 ]



def ARK(pt,key):
    return np.bitwise_xor(pt,key);

def SB(state):
    for i in range(IOBlockSize): state[i] = Sbox[state[i]]
    return state



def removemisswindow(traces,pt,tdiff):
    ptnew={};missinds=[];datasplit = [];temp = [];temp.append(0) #initial miss
    splitdelay=6
    for xi,x in enumerate(tdiff):
        if (x > splitdelay):
            datasplit.append(np.array(temp));
            temp = [];#print(xi,x);
            temp.append(x);
        else:temp.append(x);
    datasplit.append(temp);
    print(datasplit)

    inds=[(xi,x.__len__()) for xi,x in enumerate(datasplit) if datasplit[xi].__len__()!=100]
    print(inds);
    
    for ind in inds: #making array complete and marking indices to be removed
        start=ind[0]*100;end=ind[0] * 100 + 100;
        if (ind[1] < 100):
            dif = 100 - ind[1];
            for d in range(dif):
                traces=np.insert(traces,start,0,axis=0);
        if (ind[1] > 100):
            dif = ind[1]-100;
            for d in range(dif):
                traces=np.delete(traces,start,axis=0);
        for i in range(start,end):missinds.append(i) #miss inds removal
        print(ind, ' processed...');
    #for b in range(1,17):ptnew[b]=np.delete(pt[b],missinds);
    ptnew=np.delete(pt,missinds,axis=0);

    return np.delete(traces,missinds,axis=0),ptnew;


def test_timediff():
    mInds=[];count=0;
    for x2, x1,fn2,fn1 in zip(fctimes[1:], fctimes,fnames[1:],fnames):
        count+=1;
        if(x2-x1 > 4 and count !=100):
            mInds.append((fn1,count));count=0;
        if (x2 - x1 > 4 and count == 100):
            count=0;
        print(fn2,fn1,(x2-x1))

def timediff():
    tdiff=[];
    for x2,x1 in zip(fctimes[1:],fctimes):
        tdiff.append(x2-x1);
    return  tdiff;


def loadFromFile(name,byte=1): # Load plain text and cipher text from file
    data=[];
    with open(filepath+ name, 'r') as f:buff = f.read().split('\n');
    for xi,x in enumerate(buff):
        x = x.replace('{', "");x = x.replace('}', "");
        #data.append(int(x.split(',')[byte-1], 16));
        #data.append([int(xx,16) for xx in x.split(',')]);
        data.append(int(x,16))
    return data

def readTraces(tpath):
    traces=[];
    for fi in fnames:
        traces.append(np.genfromtxt(tpath+fi, delimiter=',', skip_header=3));
        print(fi);
    return traces;

def calcHW(x):
    return [bin(y).count('1') for y in x];

def LSB(x,bit):
    return [bin(y)[-1]==bit for y in x];

def calcHD(x,y):
    temp=np.bitwise_xor(x,y);
    return [bin(x).count('1') for x in temp];

# def ARK(pt,key):
#     return np.bitwise_xor(pt,key);

# def SB(ind):
#     return aes.sbox[ind];

def MeanPowerTraces(Tmatrix,pt):
    tr = [];
    for val in range(256):
        ind = pt == val;
        # print(val,Tmatrix[ind].shape)
        tr.append(Tmatrix[ind].mean(axis=0))
    pt=[x for x in range(256)]
    return np.array(tr),pt;

def createHmatrix(pt,bytes=range(1,2)):
    Hmatrix = {};
    n = pt.__len__();  # temp=[[0]*n]*256;
    for i in range(1, 17): Hmatrix[i] = [];valmatrix = [];
    for k in range(256):
        arkarr = [];states = [];print('Hmatrix --> Key:', k);
        for i in range(n):
            ark = ARK(pt[i], [k]*16);sb = SB(ark);
            # ark=aes.ARK(pt[i],[k]*16);sb=aes.SB(ark);sr=aes.SR(sb);mc=aes.MC(sr);
            # ark=aes.ARK(pt[i],[k]*16);sbtt=aes.SBTT(ark);
            arkarr.append(pt[i]);states.append(sb);
        for i in bytes:  # (1,17):
            expr1 = np.array(arkarr)[:n,i-1];
            expr2 = np.array(states)[:n,i-1];
            Hmatrix[i].append(calcHD(expr1, expr2));
            #Hmatrix[i].append(calcHW(expr2));
        # valmatrix.append(expr2);
    return Hmatrix;

def correlateHT(Hmatrix,Tmatrix,bytes=range(1,2)):
    n=np.shape(Tmatrix)[0];
    print(n)
    T=np.shape(Tmatrix)[1];scores={};
    print(T)
    for b in bytes:
        scores[b]=[];Hm=np.transpose(Hmatrix[b]);
        # Hm_m=Hm.mean(axis=0);Hm_s=Hm.var(axis=0,ddof=1);Tm_m=Tmatrix.mean(axis=0);Tm_s=Tmatrix.var(axis=0,ddof=1);
        # Hm=pow((Hm-Hm_m),2)/Hm_s;Tmatrix=pow((Tmatrix-Tm_m),2)/Tm_s;
        for k in range(256):
            print('Correlation Analysis--> Byte:',b,'\tKey:',k);
            temp=[];
            for i in range(T):
                col1=Hm[:n,k];col2=Tmatrix[:n,i];
                temp.append(st.pearsonr(col1,col2)[0]);
                # print(b,k,i,st.pearsonr(col1,col2))
            scores[b].append(temp);
        scores[b]=np.array(scores[b]);
        #scores[b]=temp;
   
    return scores;

def DiffOfMean(pt,bytes=range(1,2)):
    Hmatrix = {};n = pt.__len__();
    for i in bytes:
        Hmatrix[i] = [];
    for k in range(256):
        arr1 = [];arr2 = [];print('Hmatrix --> Key:', k);
        for i in range(n):
            # state=ARK(MC(SR(SB(ARK(pt[i],key)))),rkey1);
            state = SB(ARK(pt[i], [k]*16));
            # ark = ARK(pt[i], k);sb = SB(ark); #uncomment functions of this file
            arr1.append(pt[i]);arr2.append(state);
        arr1=np.array(arr1);arr2=np.array(arr2);
        for b in bytes:
            temp = np.array(calcHW(arr2[:,b-1]));
            #temp=np.array(calcHD(arr1[:,b-1],arr2[:,b-1]));
            # i0=LSB(temp,'0');i1=LSB(temp,'1')
            i0 = temp < 4;i1=temp>=4;
            temp[i0]=0;temp[i1]=1;
            Hmatrix[b].append(temp);
    return Hmatrix;

def DOM_correlate(Tmatrix,Hmatrix,bytes=range(1,2)):
    scores={};Hm0={};Hm1={};Hstd={};xx1={};xx2={};xx3={};xx={};
    T=np.shape(Tmatrix)[1];n=np.shape(Tmatrix)[0];
    for i in bytes:
        Hm0[i]=[];Hm1[i]=[];Hstd[i]=[];
    for b in bytes:
        scores[b] = [];Hm = np.transpose(Hmatrix[b]);
        for k in range(256):
            print('Correlation Analysis--> Byte:', b, '\tKey:', k);
            tempscore0=[];tempscore1=[];tempstd=[];
            for i in range(T):
                Htemp=np.array(Hm[:n,k]);Ttemp=Tmatrix[:n,i];
                H0 = Htemp==0;H1 = Htemp==1;T0=Ttemp[H0];T1=Ttemp[H1];
                tempscore0.append(T0.mean());tempscore1.append(T1.mean());tempstd.append(np.std(Ttemp,ddof=1))
            Hm0[b].append(tempscore0);Hm1[b].append(tempscore1);Hstd[b].append(tempstd);
        xx1[b] = np.array(Hm0[b]);xx2[b] = np.array(Hm1[b]);xx3[b]=np.array(Hstd[b]);
        xx[b]=(xx1[b]-xx2[b])/xx3[b];
    return xx

def loadData():
    with open(ppath + '1_Tmatrix_dpa_aes_no_obfuscation_0_30k.pkl', 'rb') as f: Tmatrix1 = pk.load(f);
    with open(ppath + '2_Tmatrix_dpa_aes_no_obfuscation_30k_66k.pkl', 'rb') as f: Tmatrix2 = pk.load(f);
    with open(ppath + '3_Tmatrix_dpa_aes_no_obfuscation_54k_1.pkl', 'rb') as f: Tmatrix3 = pk.load(f);
    with open(ppath + '4_Tmatrix_dpa_aes_no_obfuscation_54k_2.pkl', 'rb') as f: Tmatrix4 = pk.load(f);
    with open(ppath + '1_pt_dpa_aes_no_obfuscation_66k.pkl', 'rb') as f: ptFull1 = pk.load(f);
    with open(ppath + '3_pt_dpa_aes_no_obfuscation_54k.pkl', 'rb') as f: ptFull2 = pk.load(f);
    Tmatrix=np.concatenate([Tmatrix1,Tmatrix2,Tmatrix3,Tmatrix4],axis=0);
    ptFull=np.concatenate([ptFull1,ptFull2],axis=0);

    # Load obfuscated traces
    # with open(ppath + '1_Tmatrix_dpa_aes_with_obfuscation_3_1.pkl', 'rb') as f: Tmatrix1 = pk.load(f);
    # with open(ppath + '2_Tmatrix_dpa_aes_with_obfuscation_3_2.pkl', 'rb') as f: Tmatrix2 = pk.load(f);
    # with open(ppath + '3_Tmatrix_dpa_aes_with_obfuscation_50k_2.pkl', 'rb') as f: Tmatrix3 = pk.load(f);
    # with open(ppath + '1_pt_dpa_aes_with_obfuscation_3.pkl', 'rb') as f: ptFull1 = pk.load(f);
    # with open(ppath + '3_pt_dpa_aes_with_obfuscation_50k_2.pkl', 'rb') as f: ptFull2 = pk.load(f);
    # Tmatrix=np.concatenate([Tmatrix1,Tmatrix2,Tmatrix3],axis=0);
    # ptFull=np.concatenate([ptFull1,ptFull2],axis=0);

    return Tmatrix,ptFull

def init():
    # name='traces_caesar_protected_2/';tpath=path+name;
    TmatrixFull = np.array(readTraces(tpath));
    print(TmatrixFull.__len__())
    with open(filepath + 'PT_dpa_aes_100k_2.txt', 'r') as f: ptFull = f.read().split('\n');
    #ptFull.pop()
    print(ptFull.__len__())

    # ptFull = loadFromFile('PT_dpa_aes_100k.txt');
    tdiff = timediff();
    Tmatrix, ptf = removemisswindow(TmatrixFull, ptFull, tdiff);
    #Tmatrix = TmatrixFull[0:50000,0:499]; ptf = ptFull[0:50000]
    with open(path + 'Tmatrix_dpa_aes_1ook_1.pkl', 'wb') as f: pk.dump(Tmatrix[50000:], f);
    with open(path + 'pt_dpa_aes_1ook_1.pkl', 'wb') as f: pk.dump(ptf, f);
    print("Traces stored successfully..");
    return Tmatrix, ptf;


def DPA():
    start = 1000;end = 1499;
    byte=1; initFlag=False;
    ptbytes = [];

    Tmatrix,ptFull=init();
    for xi, x in enumerate(ptFull):
        x = x.replace('{', "");x = x.replace('}', "");
        ptbytes.append([int(xx,16) for xx in x.split(',')])
    print('ptbytes')
    print(ptbytes.__len__())
    print(Tmatrix.__len__())
    nn = 90000;off = 0;Tmatrix = Tmatrix[off:nn + off, start:end];pt = ptbytes[off:nn + off];
    print(pt.__len__())
    #Hmatrix = DiffOfMean(pt,range(byte,byte+16));
    #scores = DOM_correlate(Tmatrix,Hmatrix,range(byte,byte+16));
    Hmatrix = DiffOfMean(pt, range(byte, byte + 16));
    scores = DOM_correlate( Tmatrix, Hmatrix, range(byte, byte + 16));
    an = list(map(max, scores[1]))
    ans = list(map(max, scores[2]))
    ans1 = list(map(max, scores[3]))
    ans2 = list(map(max, scores[4]))
    max_an = max(an);
    max_an_index =  an.index(max_an);
    max_ans = max(ans);
    max_ans_index =  ans.index(max_ans);
    max_ans1 = max(ans1);
    max_ans1_index =  ans1.index(max_ans1);
    max_ans2 = max(ans2);
    max_ans2_index =  ans2.index(max_ans2);
    print(max_an_index)
    print(max_ans_index)
    print(max_ans1_index)
    print(max_ans2_index)
    #function to show the plot
    print(key)
    #plotting
    for b in range(16):
        plt.figure();
        [plt.plot(abs(x), color='y') for xi, x in enumerate(scores[b+1]) if xi != key[b]];
        plt.xlabel('Byte '+str(b+1)+': '+str(pt.__len__()));
        [plt.plot(abs(x), color='k') for xi, x in enumerate(scores[b+1]) if xi == key[b]]
    plt.show()
    print(scores.__len__())
    print(scores)


def plot_MTD(byte,key_val,res_arr):
    #62319- No obfuscation
    labels=['Correct key Byte Guess', 'Incorrect key Byte Guesses','Mean Time for Disclosure = '];
    fig=plt.figure(figsize=(6, 3));
    [plt.plot(range(1000,100100,1000),abs(x),color='silver') for xi,x in enumerate(res_arr[byte]) if xi!=key_val ];
    plt.plot(range(1000,100100,1000), abs(res_arr[byte][10]), color='silver', label=labels[1]);
    [plt.plot(range(1000,100100,1000),abs(x),label=labels[0],color='black') for xi, x in enumerate(res_arr[byte]) if xi == key_val];
    hline=np.argmax(np.argmax(abs(res_arr[byte]),axis=0)==key_val)*1000;
    plt.axvline(x=hline,linestyle='--',color='red',label=labels[2]+str(hline)); #No obfuscation # MTD
    plt.ylabel('Correlation Score');
    plt.xlabel('Number of Traces');
    plt.title('Byte '+str(byte),fontsize=15);
    plt.legend(loc=1);
    fig.tight_layout();
    # plt.savefig('/scratch/fpga/DPA_AES/results/thesis/'+str(byte)+'_mtd_with_obfuscation.eps', dpi=100, bbox_inches='tight')


def plot_allkeycorrel(byte,key_val,res_arr):
    labels=['Correct Key Correlation', 'Incorrect Key Correlation'];
    fig=plt.figure(figsize=(6, 3));
    mx=np.abs(res_arr[byte][:,-1]);
    mxind=np.argsort(np.abs(res_arr[byte][:,-1]))[-2] #second max at last column
    plt.bar(range(256),mx,color='gray');
    plt.bar(key_val,mx[key_val],color='green');
    plt.bar(mxind,mx[mxind],color='red');
    plt.bar(256,0.035,color='white'); #no obfuscation#To increase the y-axis
    plt.plot(key_val,mx[key_val],marker='o',color='green',label=labels[0]);
    plt.plot(mxind,mx[mxind],marker='o',color='red',label=labels[1]);
    plt.ylabel('Correlation Score');
    plt.xlabel('Key Byte Guesses');
    plt.title('Byte '+str(byte),fontsize=15);
    plt.legend(loc=1);
    fig.tight_layout();
    # plt.savefig('/scratch/fpga/DPA_AES/results/thesis/'+str(byte)+'_allkey_correlation_with_obfuscation.eps', dpi=100, bbox_inches='tight')

if __name__ == "__main__":

    DPA();

