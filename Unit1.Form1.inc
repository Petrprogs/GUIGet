procedure InitializeComponent;
    begin
        self.components := new System.ComponentModel.Container();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.label1 := new System.Windows.Forms.Label();
        self.button1 := new System.Windows.Forms.Button();
        self.process1 := new System.Diagnostics.Process();
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.textBox3 := new System.Windows.Forms.TextBox();
        self.groupBox1 := new System.Windows.Forms.GroupBox();
        self.checkBox2 := new System.Windows.Forms.CheckBox();
        self.checkBox1 := new System.Windows.Forms.CheckBox();
        self.toolTip1 := new System.Windows.Forms.ToolTip(self.components);
        self.label3 := new System.Windows.Forms.Label();
        self.textBox4 := new System.Windows.Forms.TextBox();
        self.button2 := new System.Windows.Forms.Button();
        self.saveFileDialog1 := new System.Windows.Forms.SaveFileDialog();
        self.groupBox1.SuspendLayout();
        self.SuspendLayout();
        // 
        // textBox1
        // 
        self.textBox1.AutoCompleteMode := System.Windows.Forms.AutoCompleteMode.Suggest;
        self.textBox1.AutoCompleteSource := System.Windows.Forms.AutoCompleteSource.HistoryList;
        self.textBox1.Location := new System.Drawing.Point(100, 4);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(364, 20);
        self.textBox1.TabIndex := 0;
        self.textBox1.TextChanged += textBox1_TextChanged;
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(0, 4);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(94, 20);
        self.label1.TabIndex := 1;
        self.label1.Text := 'URL';
        self.label1.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(406, 244);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(58, 20);
        self.button1.TabIndex := 2;
        self.button1.Text := 'Run!';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // process1
        // 
        self.process1.StartInfo.Domain := '';
        self.process1.StartInfo.FileName := 'Bin\wget.exe';
        self.process1.StartInfo.LoadUserProfile := false;
        self.process1.StartInfo.Password := nil;
        self.process1.StartInfo.StandardErrorEncoding := nil;
        self.process1.StartInfo.StandardOutputEncoding := nil;
        self.process1.StartInfo.UserName := '';
        self.process1.SynchronizingObject := self;
        // 
        // textBox2
        // 
        self.textBox2.Location := new System.Drawing.Point(42, 244);
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(358, 20);
        self.textBox2.TabIndex := 3;
        self.textBox2.TextChanged += textBox2_TextChanged;
        // 
        // textBox3
        // 
        self.textBox3.Location := new System.Drawing.Point(12, 244);
        self.textBox3.Multiline := true;
        self.textBox3.Name := 'textBox3';
        self.textBox3.Size := new System.Drawing.Size(30, 20);
        self.textBox3.TabIndex := 4;
        self.textBox3.Text := 'wget';
        // 
        // groupBox1
        // 
        self.groupBox1.Controls.Add(self.checkBox2);
        self.groupBox1.Controls.Add(self.checkBox1);
        self.groupBox1.Location := new System.Drawing.Point(12, 55);
        self.groupBox1.Name := 'groupBox1';
        self.groupBox1.Size := new System.Drawing.Size(215, 182);
        self.groupBox1.TabIndex := 5;
        self.groupBox1.TabStop := false;
        self.groupBox1.Text := 'Download';
        // 
        // checkBox2
        // 
        self.checkBox2.Location := new System.Drawing.Point(6, 49);
        self.checkBox2.Name := 'checkBox2';
        self.checkBox2.Size := new System.Drawing.Size(203, 24);
        self.checkBox2.TabIndex := 1;
        self.checkBox2.Text := '-nc - skip downloading exisiting files';
        self.toolTip1.SetToolTip(self.checkBox2, '-nc, --no-clobber - skip downloads that would download to existing files (overwriting them)');
        self.checkBox2.UseVisualStyleBackColor := true;
        self.checkBox2.CheckedChanged += checkBox2_CheckedChanged;
        // 
        // checkBox1
        // 
        self.checkBox1.Location := new System.Drawing.Point(6, 19);
        self.checkBox1.Name := 'checkBox1';
        self.checkBox1.Size := new System.Drawing.Size(192, 24);
        self.checkBox1.TabIndex := 0;
        self.checkBox1.Text := '-c - continue downloading file';
        self.toolTip1.SetToolTip(self.checkBox1, '-c,  --continue - resume getting a partially-downloaded file');
        self.checkBox1.UseVisualStyleBackColor := true;
        self.checkBox1.CheckedChanged += checkBox1_CheckedChanged;
        // 
        // label3
        // 
        self.label3.Location := new System.Drawing.Point(18, 31);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(61, 20);
        self.label3.TabIndex := 8;
        self.label3.Text := 'Save path';
        self.label3.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // textBox4
        // 
        self.textBox4.Location := new System.Drawing.Point(100, 32);
        self.textBox4.Name := 'textBox4';
        self.textBox4.Size := new System.Drawing.Size(345, 20);
        self.textBox4.TabIndex := 9;
        self.textBox4.TextChanged += textBox4_TextChanged;
        // 
        // button2
        // 
        self.button2.FlatStyle := System.Windows.Forms.FlatStyle.System;
        self.button2.Location := new System.Drawing.Point(442, 32);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(22, 20);
        self.button2.TabIndex := 10;
        self.button2.Text := '...';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // saveFileDialog1
        // 
        self.saveFileDialog1.FileOk += saveFileDialog1_FileOk;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(467, 270);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.textBox4);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.groupBox1);
        self.Controls.Add(self.textBox3);
        self.Controls.Add(self.textBox2);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.textBox1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedDialog;
        self.Name := 'Form1';
        self.Text := 'GUIGet';
        self.Load += Form1_Load;
        self.groupBox1.ResumeLayout(false);
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
