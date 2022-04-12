%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%			DIFFERENTIAL POWER ANALYSIS ON AES-128
%				Author:Muhammad Arsath K F 
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

clc;
clear variables;
TraceCount = 12000;
byteCount=16;
T=902; %250
% %%%%  %%%Creation of Power Matrix %
 fileNames = dir('aes-20k-traces/C1*.csv')
 Tmatrix = zeros(TraceCount,T);
  for i=1:TraceCount     
      disp(fileNames(i));
      fprintf("hi %d", i);
      Tmatrix(i,:) = csvread(fileNames(i).name,0,0,[0,0,100,0]); %11198 is the row offset and 0 is the col offset
      fprintf('\nPower matrix :%5d',i);
  end 
  disp('Power matrix T:DxT created ...');
%  
%  
%  
% %%%%%%%%%%%%%%%% Creation of Value Matrix %%%%%%%%%%%%%%%%%%
% %%%%%%%Reading Cipher Text and Plain Text from output.xlsx %
% %%%%%%cipherList --> Holds Bytewise Cipher Text in Decimal %
% %%%%%%Check Range before running - should match with TraceCount %
% 
xlsfinfo('output.xlsx')
 [~,outputList,~]=xlsread('output.xlsx','B2:C19991')
 plainTxtList = zeros(TraceCount,16);
 cipherList = zeros(TraceCount,16);
% 
 for i=1:TraceCount
     plainTxtList(i,:)=hex2dec(strsplit(outputList{i,1},' '));
     cipherList(i,:)=hex2dec(strsplit(outputList{i,2},' '));    
 end
% 
% 
% 
 %%%Creation of Vmatrix:D*K contains intermedaite value when K and C is given
% 
% %%%%%%%%%%%%%%%% Creation of Power Model Matrix(Difference)%%%%%%%%%%%%%%%
% 
 load InvSBoxDec_1D.mat;
 Vmatrix{16} = zeros(TraceCount,256);
 Hmatrix{16} = zeros(TraceCount,256);
 get_previous_location = [1 6 11 16 5 10 15 4 9 14 3 8 13 2 7 12];
% 
 for i=0:255
  for d=1:TraceCount
      %Ex-oring Key with Cipher and subBytes %
      temp = zeros(1,16);
     for b=1:byteCount
         Vmatrix{1,b}(d,i+1)=InvSBoxDec_1D(bitxor(i,cipherList(d,b))+1);
         temp(1,b)=Vmatrix{1,b}(d,i+1);
         count = 0;
     %Inverse Shift Row & Hmatrix(Power Difference) creation %
%%     for j=0:(byteCount-1)
%%        count = 0;
%%        if mod(j,4) == 1
%%            Vmatrix{1,j+1}(d,i+1)=temp(1,(mod((j+12),16)+1)); %//??
%%        elseif  mod(j,4) == 2
%%             Vmatrix{1,j+1}(d,i+1)=temp(1,(mod((j+8),16)+1));
%%        elseif  mod(j,4) == 3
%%            Vmatrix{1,j+1}(d,i+1)=temp(1,(mod((j+4),16)+1));
%%         end  
        % xor difference between C_10 and D_10%
         xordiff=bitxor(temp(1,b),cipherList(d,get_previous_location(b)));
       %  Calculating Hamming weight%
         for p=1:8
                 count = count + bitget(xordiff,p);
         end
         Hmatrix{1,b}(d,i+1)=count;
     end    
  end
 end
 disp('Vmatrix:DxK created ...');
 disp('Hmatrix:DxK created ...');
% 


%load 'data/Data_20K_903pts.mat'; % '\' ==> Windows
% %%%%%Creation of correlation matrix %
Mean_H{16}=zeros(1,256);
Var_H{16}=zeros(1,256);

Mean_T=mean( Tmatrix , 1);
Var_T=std( Tmatrix ,0,1);
for i=1:16
   Mean_H{1,i}=mean(Hmatrix{1,i},1); 
   Var_H{1,i}=std(double(Hmatrix{1,i}),0,1);
end
disp('Mean and Variance matrices created ...');


 Calculation of correlation coefficient %
 Pre calculation of Y part %
Rmatrix{16}=zeros(256,T);
Y=zeros(TraceCount,T);
X{16}=zeros(TraceCount,256);
tic
for i=1:T
    for j=1:TraceCount
        Y(j,i)=Tmatrix(j,i) - Mean_T(1,i);
    end
end
 Y = Tmatrix - Mean_T(1);
for b=1:16
    for k=1:256
%         fprintf('%d:%5d\n', b,k);
        for i=1:TraceCount
               X{1,b}(i,k)=Hmatrix{1,b}(i,k) - Mean_H{1,b}(1,k); 
        end
        for d=1:T 
            z=times(double(X{1,b}(:,k)) , Y(:,d));
            s=sum(z);
            Rmatrix{1,b}(k,d)=s/((TraceCount-1) * Var_H{1,b}(1,k) * Var_T(1,d));
        end        
    end
%    [Mx,Ind]=max(Rmatrix{1,b}(:));
%    [result_key,col]=ind2sub(size(Rmatrix{1,b}),Ind);
    [row, col] = find(ismember(Rmatrix{1,b}, max(Rmatrix{1,b}(:))));
    fprintf('\nKey: Byte#%d =  %d', b,result_key-1);
end
fprintf('\n\n');
toc
% disp('Correlation matrix R:KxT created ...');

          % ########### Actual Key Bytes ############# %
                    % Key: Byte#1 =  19
                    % Key: Byte#2 =  17
                    % Key: Byte#3 =  29
                    % Key: Byte#4 =  127
                    % Key: Byte#5 =  227
                    % Key: Byte#6 =  148
                    % Key: Byte#7 =  74
                    % Key: Byte#8 =  23
                    % Key: Byte#9 =  243
                    % Key: Byte#10 =  7
                    % Key: Byte#11 =  167
                    % Key: Byte#12 =  139
                    % Key: Byte#13 =  77
                    % Key: Byte#14 =  43
                    % Key: Byte#15 =  48
                    % Key: Byte#16 =  197





% T_sqr=Tmatrix.^2;
% T_cum=cumsum(Tmatrix);
% T_sqr_cum=cumsum(T_sqr);
% H_cum{16} = zeros(TraceCount,256);
% H_sqr{16} = zeros(TraceCount,256);
% H_sqr_cum{16} = zeros(TraceCount,256);
% HT=zeros(256,T);
% result{TraceCount} = zeros(256,T);
% keyguess=zeros(TraceCount,1);
% byte=7;
% 
% for i=1:16
%     Hmatrix{1,i}=minus(Hmatrix{1,i},4);
%     H_sqr{1,i}=Hmatrix{1,i}.^2;
%     H_cum{1,i}=cumsum(Hmatrix{1,i});
%     H_sqr_cum{1,i}=cumsum(H_sqr{1,i});
% end
% tic
% for(d=1:TraceCount)
%     fprintf('%5d\n', d);
%     for(k=1:256)
%          h_var=(double(H_sqr_cum{1,byte}(d,k))-(double(H_cum{1,byte}(d,k))*double(H_cum{1,byte}(d,k)))/d)/d;
%          temp=(Tmatrix(d,:).*double(Hmatrix{1,byte}(d,k)));
%          for(t=1:T)
%             HT(k,t)= double(HT(k,t))+double(temp(t));
%          end
%          for(t=1:T)            
%             cv=(double(HT(k,t))-(double(T_cum(d,t))*double(H_cum{1,byte}(d,k)))/d)/d;
%             t_var=(double(T_sqr_cum(d,t))-double((T_cum(d,t))*double(T_cum(d,t)))/d)/d; 
%             
%             if(cv ~= 0 && t_var ~= 0 && h_var ~= 0)
%                 result{1,d}(k,t)=double(cv)/(sqrt(double(t_var)*double(h_var)));
%             else
%                 result{1,d}(k,t)=0;
%             end            
%         end
%     end
%     [maxval,ind]=max(result{1,d}(:));
%     [maxrow,maxcol]=ind2sub(size(result{1,d}),ind);
%     keyguess(d,1)=maxrow-1;
% end
% toc
% 

% T_SVD=SVD_Data(Tmatrix(1:TraceCount,1:T),T);

disp 'done...';

