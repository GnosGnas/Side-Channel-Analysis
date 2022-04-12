/*-------------------------------------------------------------------------
 SASEBO_G with AES circuit interface (compatible with AIST LSI Version 1)

 File name   : CipherModule/SASEBO_G.cs
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


namespace CipherModule
{
  //================================================================ SASEBO_G
  public class SASEBO_G : IBlockCipher
  {
    //************************************************ Variable
    // Localbus address of AIST LSI Version 1
    public int ADDR_CONT    = 0x0002;
    public int ADDR_IPSEL   = 0x0004;
    public int ADDR_OUTSEL  = 0x0008;
    public int ADDR_MODE    = 0x000C;
    public int ADDR_RSEL    = 0x000E;
    public int ADDR_KEY0    = 0x0100;
    public int ADDR_ITEXT0  = 0x0140;
    public int ADDR_OTEXT0  = 0x0180;
    public int ADDR_VERSION = 0xFFFC;

    // Cipher mode
    public int MODE_ENC = 0x0000;
    public int MODE_DEC = 0x0001;

    FTDI_USB port;

    //************************************************ Methods
    //------------------------------------------------ Constructor
    public SASEBO_G() { port = new FTDI_USB(); }

    //------------------------------------------------ open()
    public void open()
    {
      port.open(0); /* <---- Modify the number (index of FTDI port) if USB is not be opened. */
      // Reset
      write(ADDR_CONT, 0x0004);
      write(ADDR_CONT, 0x0000);

    }

    //------------------------------------------------ close()
    public void close() { port.close(); }


    //************************************************ Interface : IBlockCipher
    //------------------------------------------------ setKey()
    public void setKey(byte[] key, int len)
    {
      writeBurst(ADDR_KEY0, key, len);
      write(ADDR_CONT, 0x0002);  // Execute key generation
      while (read(ADDR_CONT) != 0) { /*nop*/ }
    }

    //------------------------------------------------ setEnc()
    public void setEnc() { write(ADDR_MODE, MODE_ENC); }

    //------------------------------------------------ selDec()
    public void setDec() { write(ADDR_MODE, MODE_DEC); }


    //------------------------------------------------ writeText()
    public void writeText(byte[] text, int len)
    {
      writeBurst(ADDR_ITEXT0, text, len);
    }

    //------------------------------------------------ readText()
    public void readText(byte[] text, int len)
    {
      readBurst(ADDR_OTEXT0, text, len);
    }

    //------------------------------------------------ execute()
    public void execute()
    {
      write(ADDR_CONT, 0x0001); // Execute cipher processing
      while (read(ADDR_CONT) != 0) { /*nop*/ }
    }


    //************************************************ Method for 1st AIST LSI
    //------------------------------------------------ write()
    public void write(int addr, int dat)
    {
      byte[] buf = new byte[5];
      buf[0] = (byte)0x01;
      buf[1] = (byte)((addr >> 8) & 0xFF);
      buf[2] = (byte)((addr) & 0xFF);
      buf[3] = (byte)((dat >> 8) & 0xFF);
      buf[4] = (byte)((dat) & 0xFF);
      port.write(buf, 5);
    }

    //------------------------------------------------ read()
    public int read(int addr)
    {
      byte[] buf = new byte[3];
      buf[0] = (byte)0x00;
      buf[1] = (byte)((addr >> 8) & 0xFF);
      buf[2] = (byte)((addr) & 0xFF);
      port.write(buf, 3);
      port.read(buf, 2);
      return ((int)buf[0] << 8) + (int)buf[1];
    }

    //------------------------------------------------ writeBurst()
    public void writeBurst(int addr, byte[] dat, int len)
    {
      byte[] buf = new byte[5 * len / 2];
      for (int i = 0; i < len / 2; i++)
      {
        buf[i * 5 + 0] = (byte)0x01;
        buf[i * 5 + 1] = (byte)(((addr + i * 2) >> 8) & 0xFF);
        buf[i * 5 + 2] = (byte)(((addr + i * 2)) & 0xFF);
        buf[i * 5 + 3] = dat[i * 2];
        buf[i * 5 + 4] = dat[i * 2 + 1];
      }
      port.write(buf, 5 * (len / 2));
    }

    //------------------------------------------------ readBurst()
    public void readBurst(int addr, byte[] dat, int len)
    {
      byte[] buf = new byte[3 * len / 2];
      for (int i = 0; i < len / 2; i++)
      {
        buf[i * 3 + 0] = (byte)0x00;
        buf[i * 3 + 1] = (byte)(((addr + i * 2) >> 8) & 0xFF);
        buf[i * 3 + 2] = (byte)(((addr + i * 2)) & 0xFF);
      }
      port.write(buf, 3 * (len / 2));
      port.read(dat, len);
    }
  }
}
