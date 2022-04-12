/*-------------------------------------------------------------------------
 File name   : Program.cs
 Version     : Version 1.0
 Created     : Apr/01/2011
 Last update : Jun/27/2011
 Desgined by : Toshihiro Katashita
 
 
 Copyright (C) 2011 AIST
 
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
 appreciate it if you can cite our webpage
 (http://staff.aist.go.jp/akashi.satoh/SASEBO/en/).
 -------------------------------------------------------------------------*/

using System;
using System.Windows.Forms;

namespace SASEBO_G_Checker
{
  static class Program
  {
    /// <summary>
    /// アプリケーションのメイン エントリ ポイントです。
    /// </summary>
    [STAThread]
    static void Main()
    {
      Application.EnableVisualStyles();
      Application.SetCompatibleTextRenderingDefault(false);
      Application.Run(new Form_Main());
    }
  }
}
