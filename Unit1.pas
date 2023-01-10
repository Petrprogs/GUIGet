Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms, System.Diagnostics, System.IO;

type
  Form1 = class(Form)
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure textBox1_TextChanged(sender: Object; e: EventArgs);
    procedure checkBox1_CheckedChanged(sender: Object; e: EventArgs);
    procedure checkBox2_CheckedChanged(sender: Object; e: EventArgs);
    procedure Form1_Load(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure saveFileDialog1_FileOk(sender: Object; e: System.ComponentModel.CancelEventArgs);
    procedure textBox4_TextChanged(sender: Object; e: EventArgs);
    procedure textBox2_TextChanged(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    textBox1: TextBox;
    label1: &Label;
    process1: System.Diagnostics.Process;
    textBox2: TextBox;
    textBox3: TextBox;
    groupBox1: GroupBox;
    checkBox1: CheckBox;
    toolTip1: ToolTip;
    components: System.ComponentModel.IContainer;
    checkBox2: CheckBox;
    button2: Button;
    textBox4: TextBox;
    label3: &Label;
    saveFileDialog1: SaveFileDialog;
    button1: Button;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
 process1.StartInfo.Arguments := textBox2.Text;
 process1.Start;
 
end;

procedure Form1.textBox1_TextChanged(sender: Object; e: EventArgs);
begin
  if textBox1.Text.Contains('-c') then
    textBox1.Text := textBox1.Text.Replace('-c', '');
  if textBox1.Text.Contains('-nc') then
    textBox1.Text := textBox1.Text.Replace('-nc', '');
  if textBox1.Text.Contains(textbox4.Text) then
end;

procedure Form1.checkBox1_CheckedChanged(sender: Object; e: EventArgs);
begin
  if checkBox1.Checked then 
    textBox2.Text := textBox2.Text + ' -c'
  else
    textBox2.Text := textBox2.Text.Replace('-c', '');
end;

procedure Form1.checkBox2_CheckedChanged(sender: Object; e: EventArgs);
begin
  if checkBox2.Checked then 
    textBox2.Text := textBox2.Text + ' -nc'
  else
    textBox2.Text := textBox2.Text.Replace('-nc', '');
end;

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
begin
  textBox1.DataBindings.Add('Text', textBox2, 'Text', false, DataSourceUpdateMode.OnPropertyChanged);
end;

procedure Form1.button2_Click(sender: Object; e: EventArgs);
begin
  saveFileDialog1.FileName:= Path.GetFileName(Uri.Create(textBox1.Text).LocalPath);
  saveFileDialog1.Filter := 'Format|' + '*' + Path.GetExtension(Uri.Create(textBox1.Text).LocalPath);
  saveFileDialog1.ShowDialog;
end;

procedure Form1.saveFileDialog1_FileOk(sender: Object; e: System.ComponentModel.CancelEventArgs);
begin
  textBox4.Text := saveFileDialog1.FileName;
  textBox2.Text := textBox2.Text + ' -P "' + Path.GetDirectoryName(saveFileDialog1.FileName) + '"';
end;

procedure Form1.textBox4_TextChanged(sender: Object; e: EventArgs);
begin
end;

procedure Form1.textBox2_TextChanged(sender: Object; e: EventArgs);
begin
  
end;

end.
