/*-------------------------------------------------------------------------
 Initialize SASEBO-W and Smartcard
 
 File name   : Manager.cs
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

namespace SASEBO_G_Checker {
  //================================================================ Controller
  class Manager
  {
    //************************************************ Variables
    Random rand;
    Controller controller;
    CipherModule.IBlockCipher module;

    //------------------------------------------------ Constructor
    public Manager() 
		{
			rand = new Random(); 
		}

		
    //************************************************ 
    //------------------------------------------------ module_setup()
    public string init_module() 
		{
      if (module != null) {
        module.close();
        module = null;
      }
      module = new CipherModule.SASEBO_G();
      module.open();
      return ("SASEBO-GII");
    }
		
    //------------------------------------------------ controller_setup()
    public void init_controller(string st_num_text, string st_key) 
		{
      int num_text = Convert.ToInt32(st_num_text);
      controller = (Controller)new Controller(module, num_text, st_key);
    }

    //------------------------------------------------ close()
    public void close() { 
			module.close(); 
		}


    //************************************************ 
		//------------------------------------------------ module_addCompletedEventHandler()
    public void tracer_addCompletedEventHandler (RunWorkerCompletedEventHandler handler)
    {
      controller.addBGWorker_CompletedEventHandler(handler);
    }

		//------------------------------------------------ module_addProgressChangedEventHandler()
    public void tracer_addProgressChangedEventHandler (ProgressChangedEventHandler handler)
    {
      controller.addBGWorker_ProgressChangedEventHandler(handler);
    }

		//------------------------------------------------ tracer_run()
    public void tracer_run()    { controller.run(); }

		//------------------------------------------------ tracer_cancel()
    public void tracer_cancel() { controller.cancel(); }


		//************************************************ 
    public string rand_byteArray(int len) {
      String st = "";
      for (int i=0; i<len; i++) st += (rand.Next(256)).ToString("X2") + " ";
      return st;
    }

  }
}
