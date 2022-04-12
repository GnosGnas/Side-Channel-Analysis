/*-------------------------------------------------------------------------
 SASEBO_G_Checker (ATMega card, AES)

 File name   : Form_Main.cs
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
using System.IO.Ports;
using System.Windows.Forms;

namespace SASEBO_G_Checker
{
  //================================================================ Form_Controller
  public partial class Form_Main : Form
  {
    //************************************************ Variable
    Manager manager;
    Random rand;

		//************************************************ Method
    //------------------------------------------------ Constructor
    public Form_Main()
    {
      this.StartPosition = FormStartPosition.Manual;
      InitializeComponent();

      rand = new Random();
    }

    //------------------------------------------------ Initialization
    private void Form_Controller_Load(object sender, EventArgs e)
    {
      manager = new Manager();
    }

    //************************************************ Control
    //------------------------------------------------ Button, Change key
    private void button_key_Click(object sender, EventArgs e)
    {
      String key_st = "";
      for (int i=0; i<16; i++) key_st += (rand.Next(256)).ToString("X2") + " ";
      tb_key.Text = key_st;
    }

    //------------------------------------------------ Button, Start
    private void button_start_Click(object sender, EventArgs e)
    {
      if (button_start.Text == "Start")
      {
        button_start.Text = "Stop";

        manager.init_module();
	      manager.init_controller(tbox_numtrace.Text, tb_key.Text);
        manager.tracer_addCompletedEventHandler(new RunWorkerCompletedEventHandler(worker_RunWorkerCompleted));
        manager.tracer_addProgressChangedEventHandler(new ProgressChangedEventHandler(worker_ProgressChanged));
        manager.tracer_run();
      }
      else
      {
        manager.tracer_cancel();
      }
    }


    //************************************************ BackGroundWorker_EventHandler
    //------------------------------------------------ 
    private void worker_ProgressChanged(object sender, ProgressChangedEventArgs e) {
      label_numtrace.Text = ((ControllerReport)e.UserState).num_trace.ToString();

      label_text_in.Text  = format(((ControllerReport)e.UserState).text_in);
      label_text_out.Text = format(((ControllerReport)e.UserState).text_out);
      label_text_ans.Text = format(((ControllerReport)e.UserState).text_ans);
    }

    //------------------------------------------------ 
    private void worker_RunWorkerCompleted(object sender, RunWorkerCompletedEventArgs e)
    {
      if (!e.Cancelled)
      { // finished
        //MessageBox.Show("Finished.",  "Notice", MessageBoxButtons.OK, MessageBoxIcon.Information);
      }
      else
      {
        //MessageBox.Show("Cancelled.", "Notice", MessageBoxButtons.OK, MessageBoxIcon.Stop);
      }
      button_start.Text = "Start";
    }

 
    //************************************************ 
 		//------------------------------------------------ format()
    private string format(byte[] data)
    {
      string text = "";
      for (int i = 0; i < data.Length; i++) text += String.Format("{0:X2} ", data[i]);
      return text;
    }

    private void server_button_Click(object sender, EventArgs e)
    {

    }


  }
}
