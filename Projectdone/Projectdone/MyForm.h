#pragma once

namespace Projectdone {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	using namespace System::IO;
	using namespace System::Xml;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		delegate void Delegate(String^);
		double datas = 0;
		String^ Datas;
		String^ canhbao = { "" };
		String^ dulieu;
		String^ temp;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_ppm;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ TEMP;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel4;
		   String^ statustb;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label_status;
	private: System::Windows::Forms::Label^ label_data;
	private: System::Windows::Forms::Label^ label_time;
	private: System::Windows::Forms::TextBox^ textBox_time;
	private: System::Windows::Forms::TextBox^ textBox_status;





	private: System::Windows::Forms::ListBox^ listBox_data;

	private: System::Windows::Forms::GroupBox^ groupBox_control;
	private: System::Windows::Forms::Button^ button_disconnect;

	private: System::Windows::Forms::Button^ button_tatLed;
	private: System::Windows::Forms::Button^ button_batLed;







	private: System::Windows::Forms::Button^ button_connect;
	private: System::Windows::Forms::GroupBox^ groupBox_caidat;
	private: System::Windows::Forms::Label^ label_baudrate;



	private: System::Windows::Forms::Label^ label_comport;
	private: System::Windows::Forms::ComboBox^ comboBox_baudrate;


	private: System::Windows::Forms::ComboBox^ comboBox_port;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button_play;
	private: System::Windows::Forms::Button^ button_pause;
	private: System::Windows::Forms::Button^ button_exitchart;



	private: System::Windows::Forms::Button^ button_clear;
	private: System::Windows::Forms::Button^ button__viewchart;


	private: System::Windows::Forms::Button^ button_exitform;

	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel3;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::IO::Ports::SerialPort^ serialPort1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->TEMP = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label_status = (gcnew System::Windows::Forms::Label());
			this->textBox_ppm = (gcnew System::Windows::Forms::TextBox());
			this->label_data = (gcnew System::Windows::Forms::Label());
			this->textBox_status = (gcnew System::Windows::Forms::TextBox());
			this->listBox_data = (gcnew System::Windows::Forms::ListBox());
			this->textBox_time = (gcnew System::Windows::Forms::TextBox());
			this->label_time = (gcnew System::Windows::Forms::Label());
			this->groupBox_control = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button_disconnect = (gcnew System::Windows::Forms::Button());
			this->button_tatLed = (gcnew System::Windows::Forms::Button());
			this->button_batLed = (gcnew System::Windows::Forms::Button());
			this->button_connect = (gcnew System::Windows::Forms::Button());
			this->groupBox_caidat = (gcnew System::Windows::Forms::GroupBox());
			this->label_baudrate = (gcnew System::Windows::Forms::Label());
			this->label_comport = (gcnew System::Windows::Forms::Label());
			this->comboBox_baudrate = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_port = (gcnew System::Windows::Forms::ComboBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button_play = (gcnew System::Windows::Forms::Button());
			this->button_pause = (gcnew System::Windows::Forms::Button());
			this->button_exitchart = (gcnew System::Windows::Forms::Button());
			this->button_clear = (gcnew System::Windows::Forms::Button());
			this->button__viewchart = (gcnew System::Windows::Forms::Button());
			this->button_exitform = (gcnew System::Windows::Forms::Button());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel3 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->toolStripStatusLabel4 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->groupBox1->SuspendLayout();
			this->groupBox_control->SuspendLayout();
			this->groupBox_caidat->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->statusStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->TEMP);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label_status);
			this->groupBox1->Controls->Add(this->textBox_ppm);
			this->groupBox1->Controls->Add(this->label_data);
			this->groupBox1->Controls->Add(this->textBox_status);
			this->groupBox1->Controls->Add(this->listBox_data);
			this->groupBox1->Controls->Add(this->textBox_time);
			this->groupBox1->Controls->Add(this->label_time);
			this->groupBox1->Location = System::Drawing::Point(11, 10);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(264, 290);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"INFORMATION";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(88, 237);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(166, 22);
			this->textBox1->TabIndex = 15;
			// 
			// TEMP
			// 
			this->TEMP->AutoSize = true;
			this->TEMP->Location = System::Drawing::Point(19, 242);
			this->TEMP->Name = L"TEMP";
			this->TEMP->Size = System::Drawing::Size(46, 17);
			this->TEMP->TabIndex = 17;
			this->TEMP->Text = L"TEMP";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 215);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 17);
			this->label2->TabIndex = 16;
			this->label2->Text = L"PPM";
			// 
			// label_status
			// 
			this->label_status->AutoSize = true;
			this->label_status->Location = System::Drawing::Point(19, 159);
			this->label_status->Name = L"label_status";
			this->label_status->Size = System::Drawing::Size(63, 17);
			this->label_status->TabIndex = 13;
			this->label_status->Text = L"STATUS";
			// 
			// textBox_ppm
			// 
			this->textBox_ppm->Location = System::Drawing::Point(88, 210);
			this->textBox_ppm->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox_ppm->Name = L"textBox_ppm";
			this->textBox_ppm->ReadOnly = true;
			this->textBox_ppm->Size = System::Drawing::Size(166, 22);
			this->textBox_ppm->TabIndex = 15;
			this->textBox_ppm->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_ppm_TextChanged);
			// 
			// label_data
			// 
			this->label_data->AutoSize = true;
			this->label_data->Location = System::Drawing::Point(36, 26);
			this->label_data->Name = L"label_data";
			this->label_data->Size = System::Drawing::Size(45, 17);
			this->label_data->TabIndex = 12;
			this->label_data->Text = L"DATA";
			// 
			// textBox_status
			// 
			this->textBox_status->Location = System::Drawing::Point(88, 159);
			this->textBox_status->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox_status->Name = L"textBox_status";
			this->textBox_status->ReadOnly = true;
			this->textBox_status->Size = System::Drawing::Size(166, 22);
			this->textBox_status->TabIndex = 8;
			// 
			// listBox_data
			// 
			this->listBox_data->FormattingEnabled = true;
			this->listBox_data->ItemHeight = 16;
			this->listBox_data->Location = System::Drawing::Point(105, 25);
			this->listBox_data->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox_data->Name = L"listBox_data";
			this->listBox_data->Size = System::Drawing::Size(149, 116);
			this->listBox_data->TabIndex = 8;
			// 
			// textBox_time
			// 
			this->textBox_time->Location = System::Drawing::Point(88, 185);
			this->textBox_time->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox_time->Name = L"textBox_time";
			this->textBox_time->ReadOnly = true;
			this->textBox_time->Size = System::Drawing::Size(166, 22);
			this->textBox_time->TabIndex = 9;
			// 
			// label_time
			// 
			this->label_time->AutoSize = true;
			this->label_time->Location = System::Drawing::Point(19, 187);
			this->label_time->Name = L"label_time";
			this->label_time->Size = System::Drawing::Size(40, 17);
			this->label_time->TabIndex = 11;
			this->label_time->Text = L"TIME";
			// 
			// groupBox_control
			// 
			this->groupBox_control->Controls->Add(this->button1);
			this->groupBox_control->Controls->Add(this->button2);
			this->groupBox_control->Controls->Add(this->button_disconnect);
			this->groupBox_control->Controls->Add(this->button_tatLed);
			this->groupBox_control->Controls->Add(this->button_batLed);
			this->groupBox_control->Controls->Add(this->button_connect);
			this->groupBox_control->Location = System::Drawing::Point(11, 305);
			this->groupBox_control->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox_control->Name = L"groupBox_control";
			this->groupBox_control->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox_control->Size = System::Drawing::Size(335, 114);
			this->groupBox_control->TabIndex = 2;
			this->groupBox_control->TabStop = false;
			this->groupBox_control->Text = L"CONTROL";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(226, 28);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 32);
			this->button1->TabIndex = 15;
			this->button1->Text = L"BAT BOM";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(226, 59);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 31);
			this->button2->TabIndex = 16;
			this->button2->Text = L"TAT BOM";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button_disconnect
			// 
			this->button_disconnect->Location = System::Drawing::Point(22, 58);
			this->button_disconnect->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_disconnect->Name = L"button_disconnect";
			this->button_disconnect->Size = System::Drawing::Size(116, 33);
			this->button_disconnect->TabIndex = 8;
			this->button_disconnect->Text = L"DISCONNECT";
			this->button_disconnect->UseVisualStyleBackColor = true;
			this->button_disconnect->Click += gcnew System::EventHandler(this, &MyForm::button_disconnect_Click);
			// 
			// button_tatLed
			// 
			this->button_tatLed->Location = System::Drawing::Point(135, 59);
			this->button_tatLed->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_tatLed->Name = L"button_tatLed";
			this->button_tatLed->Size = System::Drawing::Size(94, 32);
			this->button_tatLed->TabIndex = 9;
			this->button_tatLed->Text = L"TAT QUAT";
			this->button_tatLed->UseVisualStyleBackColor = true;
			this->button_tatLed->Click += gcnew System::EventHandler(this, &MyForm::button_tatLed_Click);
			// 
			// button_batLed
			// 
			this->button_batLed->Location = System::Drawing::Point(135, 27);
			this->button_batLed->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_batLed->Name = L"button_batLed";
			this->button_batLed->Size = System::Drawing::Size(94, 33);
			this->button_batLed->TabIndex = 8;
			this->button_batLed->Text = L"BAT QUAT";
			this->button_batLed->UseVisualStyleBackColor = true;
			this->button_batLed->Click += gcnew System::EventHandler(this, &MyForm::button_batLed_Click);
			// 
			// button_connect
			// 
			this->button_connect->Location = System::Drawing::Point(22, 27);
			this->button_connect->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_connect->Name = L"button_connect";
			this->button_connect->Size = System::Drawing::Size(116, 33);
			this->button_connect->TabIndex = 6;
			this->button_connect->Text = L"CONNECT";
			this->button_connect->UseVisualStyleBackColor = true;
			this->button_connect->Click += gcnew System::EventHandler(this, &MyForm::button_connect_Click);
			// 
			// groupBox_caidat
			// 
			this->groupBox_caidat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->groupBox_caidat->Controls->Add(this->label_baudrate);
			this->groupBox_caidat->Controls->Add(this->label_comport);
			this->groupBox_caidat->Controls->Add(this->comboBox_baudrate);
			this->groupBox_caidat->Controls->Add(this->comboBox_port);
			this->groupBox_caidat->Location = System::Drawing::Point(901, 32);
			this->groupBox_caidat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox_caidat->Name = L"groupBox_caidat";
			this->groupBox_caidat->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox_caidat->Size = System::Drawing::Size(221, 154);
			this->groupBox_caidat->TabIndex = 3;
			this->groupBox_caidat->TabStop = false;
			this->groupBox_caidat->Text = L"SETTING";
			this->groupBox_caidat->Enter += gcnew System::EventHandler(this, &MyForm::groupBox_caidat_Enter);
			// 
			// label_baudrate
			// 
			this->label_baudrate->AutoSize = true;
			this->label_baudrate->Location = System::Drawing::Point(17, 95);
			this->label_baudrate->Name = L"label_baudrate";
			this->label_baudrate->Size = System::Drawing::Size(83, 17);
			this->label_baudrate->TabIndex = 3;
			this->label_baudrate->Text = L"BAUDRATE";
			// 
			// label_comport
			// 
			this->label_comport->AutoSize = true;
			this->label_comport->Location = System::Drawing::Point(14, 47);
			this->label_comport->Name = L"label_comport";
			this->label_comport->Size = System::Drawing::Size(82, 17);
			this->label_comport->TabIndex = 2;
			this->label_comport->Text = L"COM PORT";
			// 
			// comboBox_baudrate
			// 
			this->comboBox_baudrate->FormattingEnabled = true;
			this->comboBox_baudrate->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"1200", L"2400", L"4800", L"9600", L"19200",
					L"38400", L"57600"
			});
			this->comboBox_baudrate->Location = System::Drawing::Point(108, 93);
			this->comboBox_baudrate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox_baudrate->Name = L"comboBox_baudrate";
			this->comboBox_baudrate->Size = System::Drawing::Size(108, 24);
			this->comboBox_baudrate->TabIndex = 1;
			// 
			// comboBox_port
			// 
			this->comboBox_port->FormattingEnabled = true;
			this->comboBox_port->Location = System::Drawing::Point(108, 41);
			this->comboBox_port->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox_port->Name = L"comboBox_port";
			this->comboBox_port->Size = System::Drawing::Size(108, 24);
			this->comboBox_port->TabIndex = 0;
			this->comboBox_port->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox_port_SelectedIndexChanged);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(431, 79);
			this->chart1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"ppm";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(439, 227);
			this->chart1->TabIndex = 4;
			this->chart1->Text = L"chart1";
			// 
			// button_play
			// 
			this->button_play->Location = System::Drawing::Point(431, 326);
			this->button_play->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_play->Name = L"button_play";
			this->button_play->Size = System::Drawing::Size(116, 30);
			this->button_play->TabIndex = 5;
			this->button_play->Text = L"PLAY";
			this->button_play->UseVisualStyleBackColor = true;
			this->button_play->Click += gcnew System::EventHandler(this, &MyForm::button_play_Click);
			// 
			// button_pause
			// 
			this->button_pause->Location = System::Drawing::Point(547, 326);
			this->button_pause->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_pause->Name = L"button_pause";
			this->button_pause->Size = System::Drawing::Size(116, 30);
			this->button_pause->TabIndex = 6;
			this->button_pause->Text = L"PAUSE";
			this->button_pause->UseVisualStyleBackColor = true;
			this->button_pause->Click += gcnew System::EventHandler(this, &MyForm::button_pause_Click);
			// 
			// button_exitchart
			// 
			this->button_exitchart->Location = System::Drawing::Point(660, 326);
			this->button_exitchart->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_exitchart->Name = L"button_exitchart";
			this->button_exitchart->Size = System::Drawing::Size(116, 30);
			this->button_exitchart->TabIndex = 7;
			this->button_exitchart->Text = L"EXIT CHART";
			this->button_exitchart->UseVisualStyleBackColor = true;
			this->button_exitchart->Click += gcnew System::EventHandler(this, &MyForm::button_exitchart_Click);
			// 
			// button_clear
			// 
			this->button_clear->Location = System::Drawing::Point(547, 36);
			this->button_clear->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_clear->Name = L"button_clear";
			this->button_clear->Size = System::Drawing::Size(119, 32);
			this->button_clear->TabIndex = 8;
			this->button_clear->Text = L"CLEAR";
			this->button_clear->UseVisualStyleBackColor = true;
			this->button_clear->Click += gcnew System::EventHandler(this, &MyForm::button_clear_Click);
			// 
			// button__viewchart
			// 
			this->button__viewchart->Location = System::Drawing::Point(431, 35);
			this->button__viewchart->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button__viewchart->Name = L"button__viewchart";
			this->button__viewchart->Size = System::Drawing::Size(119, 32);
			this->button__viewchart->TabIndex = 9;
			this->button__viewchart->Text = L"VIEW CHART";
			this->button__viewchart->UseVisualStyleBackColor = true;
			this->button__viewchart->Click += gcnew System::EventHandler(this, &MyForm::button__viewchart_Click);
			// 
			// button_exitform
			// 
			this->button_exitform->Location = System::Drawing::Point(968, 363);
			this->button_exitform->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_exitform->Name = L"button_exitform";
			this->button_exitform->Size = System::Drawing::Size(119, 32);
			this->button_exitform->TabIndex = 10;
			this->button_exitform->Text = L"EXIT FORM";
			this->button_exitform->UseVisualStyleBackColor = true;
			this->button_exitform->Click += gcnew System::EventHandler(this, &MyForm::button_exitform_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2, this->toolStripStatusLabel3, this->toolStripStatusLabel4
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 435);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Padding = System::Windows::Forms::Padding(1, 0, 12, 0);
			this->statusStrip1->Size = System::Drawing::Size(1144, 26);
			this->statusStrip1->TabIndex = 11;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 20);
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(0, 20);
			// 
			// toolStripStatusLabel3
			// 
			this->toolStripStatusLabel3->Name = L"toolStripStatusLabel3";
			this->toolStripStatusLabel3->Size = System::Drawing::Size(0, 20);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// serialPort1
			// 
			this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &MyForm::serialPort1_DataReceived);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(431, 79);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(439, 227);
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(968, 214);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(119, 151);
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(918, 444);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 17);
			this->label1->TabIndex = 14;
			this->label1->Text = L"MADE BY HAI,THIEN,DUY";
			// 
			// toolStripStatusLabel4
			// 
			this->toolStripStatusLabel4->Name = L"toolStripStatusLabel4";
			this->toolStripStatusLabel4->Size = System::Drawing::Size(151, 20);
			this->toolStripStatusLabel4->Text = L"toolStripStatusLabel4";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(1144, 461);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->button_clear);
			this->Controls->Add(this->button_exitform);
			this->Controls->Add(this->button__viewchart);
			this->Controls->Add(this->button_exitchart);
			this->Controls->Add(this->button_pause);
			this->Controls->Add(this->button_play);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->groupBox_caidat);
			this->Controls->Add(this->groupBox_control);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"CANH BAO CHAY";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox_control->ResumeLayout(false);
			this->groupBox_caidat->ResumeLayout(false);
			this->groupBox_caidat->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	array<Int32^>^ a = { 1200,2400,4800,9600,19200,38400,57600 };
	comboBox_baudrate->DataSource = a;
	comboBox_baudrate->SelectedIndex = 3;
	comboBox_port->Items->AddRange(serialPort1->GetPortNames());
}
private: System::Void button_exitform_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button_connect_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (serialPort1->IsOpen)
		{
			MessageBox::Show("CONNECTED!");
		}
		else
		{
			serialPort1->Open();
			serialPort1->BaudRate = Convert::ToInt32(comboBox_baudrate->Text);
			toolStripStatusLabel1->Text = "Connected";
			toolStripStatusLabel1->BackColor = Color::ForestGreen;
			toolStripStatusLabel2->Text = "  Data is ready";
			toolStripStatusLabel2->BackColor = Color::ForestGreen;
		}
	}
	catch (Exception^)
	{
		MessageBox::Show("CHUA KET NOI");
	}
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->Series["ppm"]->Points->AddY(datas);
}
private: System::Void button_play_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Start();
}
private: System::Void button_pause_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Stop();
}
private: System::Void button_exitchart_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Enabled = false;
	chart1->Hide();
	pictureBox1->Show();
}
private: System::Void button_clear_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox_time->Text = "";
	textBox_status->Text = "";
	listBox_data->Items->Clear();
	chart1->Series["ppm"]->Points->Clear();
	textBox_ppm->Text = "";
}
private: System::Void comboBox_port_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	serialPort1->PortName = comboBox_port->Text;
}
private: System::Void serialPort1_DataReceived(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e) {
	Datas = serialPort1->ReadLine()->ToString();
	this->Invoke(gcnew Delegate(this, &MyForm::settext), gcnew array<Object^>{Datas});
}
void settext(String^ chuoi)
{
	try
	{
		array<String^>^ b = chuoi->Split('|');
		{
			statustb = b[0];
			dulieu = b[1];
			canhbao = b[2];
			temp = b[3];
			double::TryParse(dulieu, datas);
			textBox_time->Text = DateTime::Now.ToString();
			listBox_data->Items->Add(dulieu);
			textBox_status->Text = canhbao;
			textBox_ppm->Text = dulieu;
			textBox1->Text = temp;
			if (chuoi->Length != 0)
			{
				if (statustb == "1")
				{
					toolStripStatusLabel3->Text = " Turned on the pump";
					toolStripStatusLabel3->ForeColor = Color::DarkViolet;
				}
				else if (statustb == "0")
				{
					toolStripStatusLabel3->Text = " Turned off the pump";
					toolStripStatusLabel3->ForeColor = Color::OrangeRed;
				}
				else if (statustb == "2")
				{
					toolStripStatusLabel3->Text = " Turn on the fan";
					toolStripStatusLabel3->ForeColor = Color::DarkViolet;
				}
				else if (statustb == "3")
				{
					toolStripStatusLabel3->Text = " Turned off the fan";
					toolStripStatusLabel3->ForeColor = Color::OrangeRed;
				}
			}
		}
	}
	catch (Exception^)
	{

	}
}
private: System::Void button_batLed_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (serialPort1->IsOpen)
		{
			serialPort1->Write("1");
		}
		else
		{
			MessageBox::Show("CHUA KET NOI!");
		}
	}
	catch (Exception^)
	{
		MessageBox::Show("SET COM AGAIN!");
	}
}
private: System::Void button_tatLed_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (serialPort1->IsOpen)
		{
			serialPort1->Write("0");
		}
		else
		{
			MessageBox::Show("CHUA KET NOI!");
		}
	}
	catch (Exception^)
	{
		MessageBox::Show("SET COM AGAIN!");
	}
}

private: System::Void button__viewchart_Click(System::Object^ sender, System::EventArgs^ e) {
	if (serialPort1->IsOpen)
	{
		timer1->Enabled = true;
		chart1->Show();
		pictureBox1->Hide();
	}
	else
	{
		MessageBox::Show("CHUA KET NOI");
	}
}
private: System::Void button_disconnect_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (!serialPort1->IsOpen)
		{
			MessageBox::Show("Serial is closed!");
		}
		else
		{
			serialPort1->Close();
			timer1->Enabled = false;
			MessageBox::Show("Close successfully!");
			toolStripStatusLabel1->Text = "Disconected";
			toolStripStatusLabel1->BackColor = Color::Red;
			toolStripStatusLabel2->Text = "No data";
			toolStripStatusLabel2->BackColor = System::Drawing::Color::Red;
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void groupBox_caidat_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox_ppm_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (serialPort1->IsOpen)
		{
			serialPort1->Write("2");
		}
		else
		{
			MessageBox::Show("CHUA KET NOI!");
		}
	}
	catch (Exception^)
	{
		MessageBox::Show("SET COM AGAIN!");
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (serialPort1->IsOpen)
		{
			serialPort1->Write("3");
		}
		else
		{
			MessageBox::Show("CHUA KET NOI!");
		}
	}
	catch (Exception^)
	{
		MessageBox::Show("SET COM AGAIN!");
	}
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("CHUA KET NOI!");
}
};
}
