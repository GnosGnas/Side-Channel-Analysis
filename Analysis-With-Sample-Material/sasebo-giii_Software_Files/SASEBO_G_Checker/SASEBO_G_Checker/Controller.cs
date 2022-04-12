/*-------------------------------------------------------------------------
 Control AES function on SASEBO-GII

 File name   : Checker.cs
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

using System;
using System.ComponentModel;

namespace SASEBO_G_Checker
{
	//================================================================ Tracer_SASEBO_G
  public class Controller 
  {
		//************************************************ Variable
		protected BackgroundWorker worker;
    CipherModule.IBlockCipher module;
    int num_trace;
    byte[] key;


		//************************************************ Method
		//------------------------------------------------ Constructor
		public Controller (CipherModule.IBlockCipher module, int num_trace, string key_st)
    {
      this.module    = module;
			this.num_trace = num_trace;

      key = new byte[16];
      for (int i=0; i<16; i++) key[i] = Convert.ToByte(key_st.Substring(i * 3, 2), 16);

      worker = new BackgroundWorker();
      worker.WorkerReportsProgress      = true;
      worker.WorkerSupportsCancellation = true;
      worker.DoWork += new DoWorkEventHandler(worker_DoWork);
    }

		//************************************************ BackgroudWorker
		//------------------------------------------------ addBGWorker_ConpletedEventHandler()
    public void addBGWorker_CompletedEventHandler (RunWorkerCompletedEventHandler handler)
    {
      worker.RunWorkerCompleted += handler;
    }

		//------------------------------------------------ addBGWorker_ProgressChangedEventHandler()
    public void addBGWorker_ProgressChangedEventHandler (ProgressChangedEventHandler handler)
    {
      worker.ProgressChanged += handler;
    }

		//------------------------------------------------ run()
		public void run()    { worker.RunWorkerAsync(); }

		//------------------------------------------------ cansel()
		public void cancel() { worker.CancelAsync(); }

    //------------------------------------------------ worker_DoWork()
    private void worker_DoWork(object sender, DoWorkEventArgs e)
    {
      e.Cancel = false;

      CipherModule.IBlockCipher cipher_hw = (CipherModule.IBlockCipher) module;
      CipherTool.IBlockCipher   cipher_sw = (CipherTool.IBlockCipher) new CipherTool.AES();

      int progress = 0;
      e.Cancel = mainloop_AES(cipher_hw, cipher_sw, ref progress);
    }

    //------------------------------------------------ worker_DoWork()
		private bool mainloop_AES(CipherModule.IBlockCipher hw, CipherTool.IBlockCipher sw, ref int progress)
		{
      Random rand = new Random();

      int loop     = 0;
      bool error   = false;

      byte[] text_in  = new byte[16];
      byte[] text_out = new byte[16];
      byte[] text_ans = new byte[16];

      // Initialization
      hw.setKey(key, 16); // Hardware
      sw.setKey(key);     // Software 

      // Main loop
      progress = 0;
      worker.ReportProgress(progress, (object)(new ControllerReport(loop, text_in, text_out, text_ans)));
      for (loop = 0; loop < num_trace; loop++)
      {
        progress = (int)(100.0d * loop / num_trace);

				// Generate plain text
        for (int i=0; i<16; i++) text_in[i] = (byte)rand.Next(256);

				// Software encryption
        text_ans = sw.encrypt(text_in);

        // Hardware encryption
        hw.writeText(text_in,  16);
				hw.execute();
        hw.readText (text_out, 16);

        // Compare results
        for (int i=0; i < 16; i++) if (text_out[i] != text_ans[i]) error = true;
        worker.ReportProgress(progress, (object)(new ControllerReport(loop, text_in, text_out, text_ans)));

        // 
        if (worker.CancellationPending || error) break;
      } //endof loop

      if (worker.CancellationPending) error = true;
      
      worker.ReportProgress(progress, (object)(new ControllerReport(loop, text_in, text_out, text_ans)));
      return error;
    }

  }

	
  //================================================================ ControllerReport
  public struct ControllerReport
  {
    public int num_trace;
    public byte[] text_in;
    public byte[] text_out;
    public byte[] text_ans;

    //------------------------------------------------ Constructor
    public ControllerReport(int num_trace, byte[] text_in, byte[] text_out, byte[] text_ans)
    {
      this.num_trace = num_trace;
      this.text_in  = (byte[])text_in.Clone();
      this.text_out = (byte[])text_out.Clone();
      this.text_ans = (byte[])text_ans.Clone();
    }
  }
  
}