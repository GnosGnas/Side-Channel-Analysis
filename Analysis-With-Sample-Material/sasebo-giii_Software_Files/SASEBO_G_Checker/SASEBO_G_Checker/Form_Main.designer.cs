namespace SASEBO_G_Checker
{
  partial class Form_Main
  {
    /// <summary>
    /// 必要なデザイナ変数です。
    /// </summary>
    private System.ComponentModel.IContainer components = null;

    /// <summary>
    /// 使用中のリソースをすべてクリーンアップします。
    /// </summary>
    /// <param name="disposing">マネージ リソースが破棄される場合 true、破棄されない場合は false です。</param>
    protected override void Dispose(bool disposing)
    {
      if (disposing && (components != null))
      {
        components.Dispose();
      }
      base.Dispose(disposing);
    }

    #region Windows フォーム デザイナで生成されたコード

    /// <summary>
    /// デザイナ サポートに必要なメソッドです。このメソッドの内容を
    /// コード エディタで変更しないでください。
    /// </summary>
    private void InitializeComponent()
    {
        this.tbox_numtrace = new System.Windows.Forms.TextBox();
        this.lb_fixed_numtrace = new System.Windows.Forms.Label();
        this.button_start = new System.Windows.Forms.Button();
        this.button_key = new System.Windows.Forms.Button();
        this.label_text_ans = new System.Windows.Forms.Label();
        this.label_text_out = new System.Windows.Forms.Label();
        this.label_text_in = new System.Windows.Forms.Label();
        this.lb_fixed_plaintext = new System.Windows.Forms.Label();
        this.lb_fixed_answer = new System.Windows.Forms.Label();
        this.lb_fixed_ciphertext = new System.Windows.Forms.Label();
        this.lb_fixed_numtraces = new System.Windows.Forms.Label();
        this.label_numtrace = new System.Windows.Forms.Label();
        this.lb_fixed_key = new System.Windows.Forms.Label();
        this.tb_key = new System.Windows.Forms.TextBox();
        this.server_button = new System.Windows.Forms.Button();
        this.SuspendLayout();
        // 
        // tbox_numtrace
        // 
        this.tbox_numtrace.Font = new System.Drawing.Font("Courier New", 9.75F);
        this.tbox_numtrace.Location = new System.Drawing.Point(85, 7);
        this.tbox_numtrace.Name = "tbox_numtrace";
        this.tbox_numtrace.Size = new System.Drawing.Size(70, 22);
        this.tbox_numtrace.TabIndex = 83;
        this.tbox_numtrace.Text = "1000";
        // 
        // lb_fixed_numtrace
        // 
        this.lb_fixed_numtrace.AutoSize = true;
        this.lb_fixed_numtrace.Font = new System.Drawing.Font("MS UI Gothic", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(128)));
        this.lb_fixed_numtrace.Location = new System.Drawing.Point(12, 10);
        this.lb_fixed_numtrace.Name = "lb_fixed_numtrace";
        this.lb_fixed_numtrace.Size = new System.Drawing.Size(60, 13);
        this.lb_fixed_numtrace.TabIndex = 82;
        this.lb_fixed_numtrace.Text = "#Traces";
        // 
        // button_start
        // 
        this.button_start.BackColor = System.Drawing.SystemColors.Control;
        this.button_start.Font = new System.Drawing.Font("MS UI Gothic", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(128)));
        this.button_start.ForeColor = System.Drawing.SystemColors.ControlText;
        this.button_start.Location = new System.Drawing.Point(12, 72);
        this.button_start.Name = "button_start";
        this.button_start.Size = new System.Drawing.Size(67, 35);
        this.button_start.TabIndex = 81;
        this.button_start.Text = "Start";
        this.button_start.UseVisualStyleBackColor = false;
        this.button_start.Click += new System.EventHandler(this.button_start_Click);
        // 
        // button_key
        // 
        this.button_key.BackColor = System.Drawing.SystemColors.Control;
        this.button_key.Font = new System.Drawing.Font("MS UI Gothic", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(128)));
        this.button_key.ForeColor = System.Drawing.SystemColors.ControlText;
        this.button_key.Location = new System.Drawing.Point(85, 80);
        this.button_key.Name = "button_key";
        this.button_key.Size = new System.Drawing.Size(93, 26);
        this.button_key.TabIndex = 90;
        this.button_key.Text = "Change key";
        this.button_key.UseVisualStyleBackColor = false;
        this.button_key.Click += new System.EventHandler(this.button_key_Click);
        // 
        // label_text_ans
        // 
        this.label_text_ans.AutoSize = true;
        this.label_text_ans.Font = new System.Drawing.Font("Courier New", 9.75F);
        this.label_text_ans.Location = new System.Drawing.Point(96, 193);
        this.label_text_ans.Name = "label_text_ans";
        this.label_text_ans.Size = new System.Drawing.Size(384, 16);
        this.label_text_ans.TabIndex = 99;
        this.label_text_ans.Text = "00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00";
        // 
        // label_text_out
        // 
        this.label_text_out.AutoSize = true;
        this.label_text_out.Font = new System.Drawing.Font("Courier New", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
        this.label_text_out.Location = new System.Drawing.Point(96, 169);
        this.label_text_out.Name = "label_text_out";
        this.label_text_out.Size = new System.Drawing.Size(384, 16);
        this.label_text_out.TabIndex = 98;
        this.label_text_out.Text = "00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00";
        // 
        // label_text_in
        // 
        this.label_text_in.AutoSize = true;
        this.label_text_in.Font = new System.Drawing.Font("Courier New", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
        this.label_text_in.Location = new System.Drawing.Point(96, 146);
        this.label_text_in.Name = "label_text_in";
        this.label_text_in.Size = new System.Drawing.Size(384, 16);
        this.label_text_in.TabIndex = 97;
        this.label_text_in.Text = "00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00";
        // 
        // lb_fixed_plaintext
        // 
        this.lb_fixed_plaintext.AutoSize = true;
        this.lb_fixed_plaintext.Font = new System.Drawing.Font("MS UI Gothic", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(128)));
        this.lb_fixed_plaintext.Location = new System.Drawing.Point(12, 144);
        this.lb_fixed_plaintext.Name = "lb_fixed_plaintext";
        this.lb_fixed_plaintext.Size = new System.Drawing.Size(66, 13);
        this.lb_fixed_plaintext.TabIndex = 92;
        this.lb_fixed_plaintext.Text = "Plaintext";
        // 
        // lb_fixed_answer
        // 
        this.lb_fixed_answer.AutoSize = true;
        this.lb_fixed_answer.Font = new System.Drawing.Font("MS UI Gothic", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(128)));
        this.lb_fixed_answer.Location = new System.Drawing.Point(12, 193);
        this.lb_fixed_answer.Name = "lb_fixed_answer";
        this.lb_fixed_answer.Size = new System.Drawing.Size(54, 13);
        this.lb_fixed_answer.TabIndex = 93;
        this.lb_fixed_answer.Text = "Answer";
        // 
        // lb_fixed_ciphertext
        // 
        this.lb_fixed_ciphertext.AutoSize = true;
        this.lb_fixed_ciphertext.Font = new System.Drawing.Font("MS UI Gothic", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(128)));
        this.lb_fixed_ciphertext.Location = new System.Drawing.Point(12, 168);
        this.lb_fixed_ciphertext.Name = "lb_fixed_ciphertext";
        this.lb_fixed_ciphertext.Size = new System.Drawing.Size(77, 13);
        this.lb_fixed_ciphertext.TabIndex = 94;
        this.lb_fixed_ciphertext.Text = "Ciphertext";
        // 
        // lb_fixed_numtraces
        // 
        this.lb_fixed_numtraces.AutoSize = true;
        this.lb_fixed_numtraces.Font = new System.Drawing.Font("MS UI Gothic", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(128)));
        this.lb_fixed_numtraces.Location = new System.Drawing.Point(12, 119);
        this.lb_fixed_numtraces.Name = "lb_fixed_numtraces";
        this.lb_fixed_numtraces.Size = new System.Drawing.Size(60, 13);
        this.lb_fixed_numtraces.TabIndex = 100;
        this.lb_fixed_numtraces.Text = "#Traces";
        // 
        // label_numtrace
        // 
        this.label_numtrace.AutoSize = true;
        this.label_numtrace.Font = new System.Drawing.Font("Courier New", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
        this.label_numtrace.Location = new System.Drawing.Point(96, 119);
        this.label_numtrace.Name = "label_numtrace";
        this.label_numtrace.Size = new System.Drawing.Size(16, 16);
        this.label_numtrace.TabIndex = 101;
        this.label_numtrace.Text = "0";
        // 
        // lb_fixed_key
        // 
        this.lb_fixed_key.AutoSize = true;
        this.lb_fixed_key.Font = new System.Drawing.Font("MS UI Gothic", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(128)));
        this.lb_fixed_key.Location = new System.Drawing.Point(12, 41);
        this.lb_fixed_key.Name = "lb_fixed_key";
        this.lb_fixed_key.Size = new System.Drawing.Size(33, 13);
        this.lb_fixed_key.TabIndex = 106;
        this.lb_fixed_key.Text = "KEY";
        // 
        // tb_key
        // 
        this.tb_key.Font = new System.Drawing.Font("Courier New", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
        this.tb_key.Location = new System.Drawing.Point(85, 38);
        this.tb_key.Name = "tb_key";
        this.tb_key.Size = new System.Drawing.Size(393, 22);
        this.tb_key.TabIndex = 107;
        this.tb_key.Text = "00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F";
        // 
        // server_button
        // 
        this.server_button.BackColor = System.Drawing.SystemColors.Control;
        this.server_button.Font = new System.Drawing.Font("MS UI Gothic", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(128)));
        this.server_button.ForeColor = System.Drawing.SystemColors.ControlText;
        this.server_button.Location = new System.Drawing.Point(385, 81);
        this.server_button.Name = "server_button";
        this.server_button.Size = new System.Drawing.Size(93, 26);
        this.server_button.TabIndex = 108;
        this.server_button.Text = "&Start Server";
        this.server_button.UseVisualStyleBackColor = false;
        this.server_button.Click += new System.EventHandler(this.server_button_Click);
        // 
        // Form_Main
        // 
        this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
        this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
        this.ClientSize = new System.Drawing.Size(494, 219);
        this.Controls.Add(this.server_button);
        this.Controls.Add(this.label_numtrace);
        this.Controls.Add(this.lb_fixed_answer);
        this.Controls.Add(this.lb_fixed_ciphertext);
        this.Controls.Add(this.label_text_in);
        this.Controls.Add(this.label_text_out);
        this.Controls.Add(this.lb_fixed_plaintext);
        this.Controls.Add(this.label_text_ans);
        this.Controls.Add(this.tb_key);
        this.Controls.Add(this.lb_fixed_key);
        this.Controls.Add(this.lb_fixed_numtraces);
        this.Controls.Add(this.button_key);
        this.Controls.Add(this.tbox_numtrace);
        this.Controls.Add(this.lb_fixed_numtrace);
        this.Controls.Add(this.button_start);
        this.Location = new System.Drawing.Point(10, 10);
        this.Name = "Form_Main";
        this.Text = "SASEBO_G Checker (AES)";
        this.Load += new System.EventHandler(this.Form_Controller_Load);
        this.ResumeLayout(false);
        this.PerformLayout();

    }

    #endregion

    private System.Windows.Forms.TextBox tbox_numtrace;
    private System.Windows.Forms.Label lb_fixed_numtrace;
    private System.Windows.Forms.Button button_start;
    private System.Windows.Forms.Button button_key;
    private System.Windows.Forms.Label label_text_ans;
    private System.Windows.Forms.Label label_text_out;
    private System.Windows.Forms.Label label_text_in;
    private System.Windows.Forms.Label lb_fixed_plaintext;
    private System.Windows.Forms.Label lb_fixed_answer;
    private System.Windows.Forms.Label lb_fixed_ciphertext;
    private System.Windows.Forms.Label lb_fixed_numtraces;
		private System.Windows.Forms.Label label_numtrace;
    private System.Windows.Forms.Label lb_fixed_key;
		private System.Windows.Forms.TextBox tb_key;
        private System.Windows.Forms.Button server_button;
  }
}

