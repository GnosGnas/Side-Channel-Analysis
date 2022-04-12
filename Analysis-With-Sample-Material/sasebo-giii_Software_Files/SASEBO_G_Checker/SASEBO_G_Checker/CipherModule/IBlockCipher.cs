/*-------------------------------------------------------------------------
 Cryptographic module interface for block ciphers.
 
 File name   : CipherModule/IBlockCipher.cs
 Version     : 1.3
 Created     : APR/02/2012
 Last update : MAY/24/2012
 Desgined by : Toshihiro Katashita
 
 
 Copyright (C) 2012 AIST
 
 By using this code, you agree to the following terms and conditions.
 
 This code is copyrighted by AIST ("us").
 
 Permission is hereby granted to copy, reproduce, redistribute or
 otherwise use this code as long as: there is no monetary profit gained
 specifically from the use or reproduction of this code, it is not sold,
 rented, traded or otherwise marketed, and this copyright notice is
 included prominently in any copy made.
 
 We shall not be liable for any damages, including without limitation
 direct, indirect, incidental, special or consequential damages arising
 from the use of this code.
 
 When you publish any results arising from the use of this code, we will
 appreciate it if you can cite our webpage.
 (http://www.aist.go.jp/aist_e/research_results/publications/synthesiology_e/vol3_no1/vol03_01_p86_p95.pdf)
 -------------------------------------------------------------------------*/


namespace CipherModule{
  //================================================================ CipherInterface
  public interface IBlockCipher
  {
		void open();
		void close();

		void setKey(byte[] key, int len);
    void setEnc();
    void setDec();
    void writeText(byte[] text, int len);
    void readText (byte[] text, int len);
    void execute();
  }
}
