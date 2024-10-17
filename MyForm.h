#pragma once
#include <cmath>
#include <Windows.h> 
//#include<vector>

namespace PhysTask313 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ñòàðòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñòîïToolStripMenuItem;
	protected:


	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem1;
	private: System::Windows::Forms::GroupBox^ gb_param;
	private: System::Windows::Forms::Label^ label_x0;

	private: System::Windows::Forms::Label^ label_t_max;

	private: System::Windows::Forms::Label^ label_dt;
	private: System::Windows::Forms::Label^ label_v;
	private: System::Windows::Forms::TextBox^ textBox_x0;





	private: System::Windows::Forms::TextBox^ textBox_t_max;
	private: System::Windows::Forms::TextBox^ textBox_dt;
	private: System::Windows::Forms::TextBox^ textBox_vy;

	private: System::Windows::Forms::GroupBox^ gb_otr;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart4;
	private: System::Windows::Forms::TextBox^ textBox_Lz;
	private: System::Windows::Forms::TextBox^ textBox_a;
	private: System::Windows::Forms::TextBox^ textBox_b;
	private: System::Windows::Forms::TextBox^ textBox_T;
	private: System::Windows::Forms::TextBox^ textBox_kep3;
	private: System::Windows::Forms::TextBox^ textBox_vx;
	private: System::Windows::Forms::Label^ label_vx;
	private: System::Windows::Forms::Label^ label_kep3;

	private: System::Windows::Forms::Label^ label_T;
	private: System::Windows::Forms::Label^ label_b;


	private: System::Windows::Forms::Label^ label_a;
	private: System::Windows::Forms::Label^ label_Lz;
	private: System::Windows::Forms::TextBox^ textBox_e;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox_y0;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart5;


	private: System::ComponentModel::IContainer^ components;





	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ñòàðòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñòîïToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gb_param = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox_y0 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_e = (gcnew System::Windows::Forms::TextBox());
			this->label_kep3 = (gcnew System::Windows::Forms::Label());
			this->label_T = (gcnew System::Windows::Forms::Label());
			this->label_b = (gcnew System::Windows::Forms::Label());
			this->label_a = (gcnew System::Windows::Forms::Label());
			this->label_Lz = (gcnew System::Windows::Forms::Label());
			this->label_vx = (gcnew System::Windows::Forms::Label());
			this->textBox_vx = (gcnew System::Windows::Forms::TextBox());
			this->textBox_kep3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_T = (gcnew System::Windows::Forms::TextBox());
			this->textBox_b = (gcnew System::Windows::Forms::TextBox());
			this->textBox_a = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Lz = (gcnew System::Windows::Forms::TextBox());
			this->textBox_t_max = (gcnew System::Windows::Forms::TextBox());
			this->textBox_dt = (gcnew System::Windows::Forms::TextBox());
			this->textBox_vy = (gcnew System::Windows::Forms::TextBox());
			this->label_t_max = (gcnew System::Windows::Forms::Label());
			this->label_dt = (gcnew System::Windows::Forms::Label());
			this->label_v = (gcnew System::Windows::Forms::Label());
			this->textBox_x0 = (gcnew System::Windows::Forms::TextBox());
			this->label_x0 = (gcnew System::Windows::Forms::Label());
			this->gb_otr = (gcnew System::Windows::Forms::GroupBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->chart5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->menuStrip1->SuspendLayout();
			this->gb_param->SuspendLayout();
			this->gb_otr->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ñòàðòToolStripMenuItem,
					this->ñòîïToolStripMenuItem, this->âûõîäToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1400, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ñòàðòToolStripMenuItem
			// 
			this->ñòàðòToolStripMenuItem->Name = L"ñòàðòToolStripMenuItem";
			this->ñòàðòToolStripMenuItem->Size = System::Drawing::Size(61, 24);
			this->ñòàðòToolStripMenuItem->Text = L"Ñòàðò";
			this->ñòàðòToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñòàðòToolStripMenuItem_Click);
			// 
			// ñòîïToolStripMenuItem
			// 
			this->ñòîïToolStripMenuItem->Name = L"ñòîïToolStripMenuItem";
			this->ñòîïToolStripMenuItem->Size = System::Drawing::Size(56, 24);
			this->ñòîïToolStripMenuItem->Text = L"Ñòîï";
			this->ñòîïToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñòîïToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem1
			// 
			this->âûõîäToolStripMenuItem1->Name = L"âûõîäToolStripMenuItem1";
			this->âûõîäToolStripMenuItem1->Size = System::Drawing::Size(67, 24);
			this->âûõîäToolStripMenuItem1->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem1_Click);
			// 
			// gb_param
			// 
			this->gb_param->BackColor = System::Drawing::Color::White;
			this->gb_param->Controls->Add(this->label13);
			this->gb_param->Controls->Add(this->textBox_y0);
			this->gb_param->Controls->Add(this->label11);
			this->gb_param->Controls->Add(this->label12);
			this->gb_param->Controls->Add(this->label10);
			this->gb_param->Controls->Add(this->label9);
			this->gb_param->Controls->Add(this->label8);
			this->gb_param->Controls->Add(this->label7);
			this->gb_param->Controls->Add(this->label6);
			this->gb_param->Controls->Add(this->label5);
			this->gb_param->Controls->Add(this->label4);
			this->gb_param->Controls->Add(this->label3);
			this->gb_param->Controls->Add(this->label2);
			this->gb_param->Controls->Add(this->label1);
			this->gb_param->Controls->Add(this->textBox_e);
			this->gb_param->Controls->Add(this->label_kep3);
			this->gb_param->Controls->Add(this->label_T);
			this->gb_param->Controls->Add(this->label_b);
			this->gb_param->Controls->Add(this->label_a);
			this->gb_param->Controls->Add(this->label_Lz);
			this->gb_param->Controls->Add(this->label_vx);
			this->gb_param->Controls->Add(this->textBox_vx);
			this->gb_param->Controls->Add(this->textBox_kep3);
			this->gb_param->Controls->Add(this->textBox_T);
			this->gb_param->Controls->Add(this->textBox_b);
			this->gb_param->Controls->Add(this->textBox_a);
			this->gb_param->Controls->Add(this->textBox_Lz);
			this->gb_param->Controls->Add(this->textBox_t_max);
			this->gb_param->Controls->Add(this->textBox_dt);
			this->gb_param->Controls->Add(this->textBox_vy);
			this->gb_param->Controls->Add(this->label_t_max);
			this->gb_param->Controls->Add(this->label_dt);
			this->gb_param->Controls->Add(this->label_v);
			this->gb_param->Controls->Add(this->textBox_x0);
			this->gb_param->Controls->Add(this->label_x0);
			this->gb_param->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->gb_param->Location = System::Drawing::Point(400, 637);
			this->gb_param->Name = L"gb_param";
			this->gb_param->Size = System::Drawing::Size(1000, 165);
			this->gb_param->TabIndex = 1;
			this->gb_param->TabStop = false;
			this->gb_param->Text = L"Ïàðàìåòðû";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(184, 49);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(39, 25);
			this->label13->TabIndex = 35;
			this->label13->Text = L"êì";
			// 
			// textBox_y0
			// 
			this->textBox_y0->Location = System::Drawing::Point(78, 49);
			this->textBox_y0->Name = L"textBox_y0";
			this->textBox_y0->Size = System::Drawing::Size(100, 24);
			this->textBox_y0->TabIndex = 34;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(12, 49);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(50, 25);
			this->label11->TabIndex = 33;
			this->label11->Text = L"y0 =";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(764, 20);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(81, 25);
			this->label12->TabIndex = 32;
			this->label12->Text = L"ñ^2/ì^3";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(424, 136);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(22, 25);
			this->label10->TabIndex = 30;
			this->label10->Text = L"ñ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(424, 78);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 25);
			this->label9->TabIndex = 29;
			this->label9->Text = L"êì";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(424, 49);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(39, 25);
			this->label8->TabIndex = 28;
			this->label8->Text = L"êì";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(764, 49);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 25);
			this->label7->TabIndex = 27;
			this->label7->Text = L"ì^2·êã/ñ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(184, 136);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(22, 25);
			this->label6->TabIndex = 26;
			this->label6->Text = L"ñ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(424, 20);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(22, 25);
			this->label5->TabIndex = 25;
			this->label5->Text = L"ñ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(184, 107);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 25);
			this->label4->TabIndex = 24;
			this->label4->Text = L"ì/ñ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(184, 78);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 25);
			this->label3->TabIndex = 23;
			this->label3->Text = L"ì/ñ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(184, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 25);
			this->label2->TabIndex = 22;
			this->label2->Text = L"êì";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(252, 107);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 25);
			this->label1->TabIndex = 21;
			this->label1->Text = L"e =";
			// 
			// textBox_e
			// 
			this->textBox_e->Location = System::Drawing::Point(318, 107);
			this->textBox_e->MaxLength = 36000;
			this->textBox_e->Name = L"textBox_e";
			this->textBox_e->Size = System::Drawing::Size(100, 24);
			this->textBox_e->TabIndex = 20;
			// 
			// label_kep3
			// 
			this->label_kep3->AutoSize = true;
			this->label_kep3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_kep3->Location = System::Drawing::Point(575, 20);
			this->label_kep3->Name = L"label_kep3";
			this->label_kep3->Size = System::Drawing::Size(81, 25);
			this->label_kep3->TabIndex = 19;
			this->label_kep3->Text = L"Kep3 = ";
			// 
			// label_T
			// 
			this->label_T->AutoSize = true;
			this->label_T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_T->Location = System::Drawing::Point(252, 136);
			this->label_T->Name = L"label_T";
			this->label_T->Size = System::Drawing::Size(47, 25);
			this->label_T->TabIndex = 18;
			this->label_T->Text = L"T = ";
			// 
			// label_b
			// 
			this->label_b->AutoSize = true;
			this->label_b->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_b->Location = System::Drawing::Point(252, 78);
			this->label_b->Name = L"label_b";
			this->label_b->Size = System::Drawing::Size(45, 25);
			this->label_b->TabIndex = 17;
			this->label_b->Text = L"b = ";
			// 
			// label_a
			// 
			this->label_a->AutoSize = true;
			this->label_a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_a->Location = System::Drawing::Point(252, 49);
			this->label_a->Name = L"label_a";
			this->label_a->Size = System::Drawing::Size(45, 25);
			this->label_a->TabIndex = 16;
			this->label_a->Text = L"a = ";
			// 
			// label_Lz
			// 
			this->label_Lz->AutoSize = true;
			this->label_Lz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_Lz->Location = System::Drawing::Point(601, 49);
			this->label_Lz->Name = L"label_Lz";
			this->label_Lz->Size = System::Drawing::Size(55, 25);
			this->label_Lz->TabIndex = 15;
			this->label_Lz->Text = L"Lz = ";
			// 
			// label_vx
			// 
			this->label_vx->AutoSize = true;
			this->label_vx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_vx->Location = System::Drawing::Point(8, 107);
			this->label_vx->Name = L"label_vx";
			this->label_vx->Size = System::Drawing::Size(69, 25);
			this->label_vx->TabIndex = 14;
			this->label_vx->Text = L"Vx0 = ";
			// 
			// textBox_vx
			// 
			this->textBox_vx->Location = System::Drawing::Point(78, 107);
			this->textBox_vx->Name = L"textBox_vx";
			this->textBox_vx->Size = System::Drawing::Size(100, 24);
			this->textBox_vx->TabIndex = 13;
			// 
			// textBox_kep3
			// 
			this->textBox_kep3->Location = System::Drawing::Point(658, 20);
			this->textBox_kep3->Name = L"textBox_kep3";
			this->textBox_kep3->Size = System::Drawing::Size(100, 24);
			this->textBox_kep3->TabIndex = 12;
			// 
			// textBox_T
			// 
			this->textBox_T->Location = System::Drawing::Point(318, 136);
			this->textBox_T->Name = L"textBox_T";
			this->textBox_T->Size = System::Drawing::Size(100, 24);
			this->textBox_T->TabIndex = 11;
			// 
			// textBox_b
			// 
			this->textBox_b->Location = System::Drawing::Point(318, 78);
			this->textBox_b->Name = L"textBox_b";
			this->textBox_b->Size = System::Drawing::Size(100, 24);
			this->textBox_b->TabIndex = 10;
			// 
			// textBox_a
			// 
			this->textBox_a->Location = System::Drawing::Point(318, 49);
			this->textBox_a->Name = L"textBox_a";
			this->textBox_a->Size = System::Drawing::Size(100, 24);
			this->textBox_a->TabIndex = 9;
			// 
			// textBox_Lz
			// 
			this->textBox_Lz->Location = System::Drawing::Point(658, 49);
			this->textBox_Lz->Name = L"textBox_Lz";
			this->textBox_Lz->Size = System::Drawing::Size(100, 24);
			this->textBox_Lz->TabIndex = 8;
			// 
			// textBox_t_max
			// 
			this->textBox_t_max->Location = System::Drawing::Point(318, 20);
			this->textBox_t_max->Name = L"textBox_t_max";
			this->textBox_t_max->Size = System::Drawing::Size(100, 24);
			this->textBox_t_max->TabIndex = 7;
			// 
			// textBox_dt
			// 
			this->textBox_dt->Location = System::Drawing::Point(78, 136);
			this->textBox_dt->Name = L"textBox_dt";
			this->textBox_dt->Size = System::Drawing::Size(100, 24);
			this->textBox_dt->TabIndex = 6;
			// 
			// textBox_vy
			// 
			this->textBox_vy->Location = System::Drawing::Point(78, 78);
			this->textBox_vy->Name = L"textBox_vy";
			this->textBox_vy->Size = System::Drawing::Size(100, 24);
			this->textBox_vy->TabIndex = 5;
			// 
			// label_t_max
			// 
			this->label_t_max->AutoSize = true;
			this->label_t_max->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_t_max->Location = System::Drawing::Point(241, 20);
			this->label_t_max->Name = L"label_t_max";
			this->label_t_max->Size = System::Drawing::Size(71, 25);
			this->label_t_max->TabIndex = 4;
			this->label_t_max->Text = L"t max=";
			// 
			// label_dt
			// 
			this->label_dt->AutoSize = true;
			this->label_dt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_dt->Location = System::Drawing::Point(12, 136);
			this->label_dt->Name = L"label_dt";
			this->label_dt->Size = System::Drawing::Size(45, 25);
			this->label_dt->TabIndex = 3;
			this->label_dt->Text = L"dt =";
			// 
			// label_v
			// 
			this->label_v->AutoSize = true;
			this->label_v->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_v->Location = System::Drawing::Point(8, 78);
			this->label_v->Name = L"label_v";
			this->label_v->Size = System::Drawing::Size(64, 25);
			this->label_v->TabIndex = 2;
			this->label_v->Text = L"Vy0 =";
			// 
			// textBox_x0
			// 
			this->textBox_x0->Location = System::Drawing::Point(78, 20);
			this->textBox_x0->Name = L"textBox_x0";
			this->textBox_x0->Size = System::Drawing::Size(100, 24);
			this->textBox_x0->TabIndex = 1;
			// 
			// label_x0
			// 
			this->label_x0->AutoSize = true;
			this->label_x0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_x0->Location = System::Drawing::Point(12, 20);
			this->label_x0->Name = L"label_x0";
			this->label_x0->Size = System::Drawing::Size(50, 25);
			this->label_x0->TabIndex = 0;
			this->label_x0->Text = L"x0 =";
			// 
			// gb_otr
			// 
			this->gb_otr->BackColor = System::Drawing::Color::White;
			this->gb_otr->Controls->Add(this->chart1);
			this->gb_otr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->gb_otr->Location = System::Drawing::Point(400, 31);
			this->gb_otr->Name = L"gb_otr";
			this->gb_otr->Size = System::Drawing::Size(1000, 600);
			this->gb_otr->TabIndex = 2;
			this->gb_otr->TabStop = false;
			this->gb_otr->Text = L" ";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(0, 0);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::DarkViolet;
			series1->Legend = L"Legend1";
			series1->Name = L"Ñïóòíèê";
			series2->BackGradientStyle = System::Windows::Forms::DataVisualization::Charting::GradientStyle::DiagonalRight;
			series2->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::Top;
			series2->BackSecondaryColor = System::Drawing::Color::GreenYellow;
			series2->BorderWidth = 3;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::SplineArea;
			series2->Color = System::Drawing::Color::DodgerBlue;
			series2->Legend = L"Legend1";
			series2->Name = L"Çåìëÿ";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(1000, 600);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart";
			this->chart1->TextAntiAliasingQuality = System::Windows::Forms::DataVisualization::Charting::TextAntiAliasingQuality::Normal;
			// 
			// chart2
			// 
			chartArea2->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Triangle;
			chartArea2->AxisX->TextOrientation = System::Windows::Forms::DataVisualization::Charting::TextOrientation::Horizontal;
			chartArea2->AxisX->Title = L"t, ñ";
			chartArea2->AxisX->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea2->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Triangle;
			chartArea2->AxisY->Title = L"Ek, Äæ";
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Enabled = false;
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(0, 31);
			this->chart2->Name = L"chart2";
			series3->BorderColor = System::Drawing::Color::White;
			series3->BorderWidth = 2;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Color = System::Drawing::Color::Red;
			series3->LabelBorderColor = System::Drawing::Color::White;
			series3->Legend = L"Legend1";
			series3->Name = L"Ek";
			series3->ShadowColor = System::Drawing::Color::White;
			this->chart2->Series->Add(series3);
			this->chart2->Size = System::Drawing::Size(394, 189);
			this->chart2->TabIndex = 3;
			this->chart2->Text = L"chart2";
			title1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title1->Name = L"Title1";
			title1->Text = L"Êèíåòè÷åñêàÿ ýíåðãèÿ, 10^7 Äæ";
			this->chart2->Titles->Add(title1);
			// 
			// chart3
			// 
			chartArea3->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Triangle;
			chartArea3->AxisX->TextOrientation = System::Windows::Forms::DataVisualization::Charting::TextOrientation::Horizontal;
			chartArea3->AxisX->Title = L"t, ñ";
			chartArea3->AxisX->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea3->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Triangle;
			chartArea3->AxisY->Title = L"Ep, Äæ";
			chartArea3->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea3);
			legend3->Enabled = false;
			legend3->Name = L"Legend1";
			this->chart3->Legends->Add(legend3);
			this->chart3->Location = System::Drawing::Point(0, 226);
			this->chart3->Name = L"chart3";
			series4->BorderWidth = 2;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Color = System::Drawing::Color::Red;
			series4->Legend = L"Legend1";
			series4->Name = L"Ep";
			this->chart3->Series->Add(series4);
			this->chart3->Size = System::Drawing::Size(394, 189);
			this->chart3->TabIndex = 4;
			this->chart3->Text = L"chart3";
			title2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title2->Name = L"Title1";
			title2->Text = L"Ïîòåíöèàëüíàÿ ýíåðãèÿ, 10^7 Äæ";
			this->chart3->Titles->Add(title2);
			// 
			// chart4
			// 
			chartArea4->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Triangle;
			chartArea4->AxisX->TextOrientation = System::Windows::Forms::DataVisualization::Charting::TextOrientation::Horizontal;
			chartArea4->AxisX->Title = L"t, ñ";
			chartArea4->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Triangle;
			chartArea4->AxisY->TextOrientation = System::Windows::Forms::DataVisualization::Charting::TextOrientation::Rotated270;
			chartArea4->AxisY->Title = L"E, Äæ";
			chartArea4->AxisY->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea4->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea4);
			legend4->Enabled = false;
			legend4->Name = L"Legend1";
			this->chart4->Legends->Add(legend4);
			this->chart4->Location = System::Drawing::Point(0, 421);
			this->chart4->Name = L"chart4";
			series5->BorderWidth = 2;
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series5->Color = System::Drawing::Color::Red;
			series5->Legend = L"Legend1";
			series5->Name = L"E";
			this->chart4->Series->Add(series5);
			this->chart4->Size = System::Drawing::Size(394, 189);
			this->chart4->TabIndex = 5;
			this->chart4->Text = L"chart4";
			title3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title3->Name = L"Title1";
			title3->Text = L"Ïîëíàÿ ìåõàíè÷åñêàÿ ýíåðãèÿ, 10^7 Äæ";
			this->chart4->Titles->Add(title3);
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// chart5
			// 
			chartArea5->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Triangle;
			chartArea5->AxisX->Title = L"t, ñ";
			chartArea5->AxisX->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea5->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Triangle;
			chartArea5->AxisY->Title = L"Lz,  ì^2*êã/ñ";
			chartArea5->AxisY->TitleAlignment = System::Drawing::StringAlignment::Near;
			chartArea5->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea5->Name = L"ChartArea1";
			this->chart5->ChartAreas->Add(chartArea5);
			legend5->Enabled = false;
			legend5->Name = L"Legend1";
			this->chart5->Legends->Add(legend5);
			this->chart5->Location = System::Drawing::Point(0, 615);
			this->chart5->Name = L"chart5";
			series6->BorderWidth = 2;
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series6->Color = System::Drawing::Color::Red;
			series6->Legend = L"Legend1";
			series6->Name = L"Lz";
			this->chart5->Series->Add(series6);
			this->chart5->Size = System::Drawing::Size(394, 189);
			this->chart5->TabIndex = 6;
			this->chart5->Text = L"chart5";
			title4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title4->Name = L"Title1";
			title4->Text = L"Ìîìåíò èìïóëüñà 10^7 ì^2·êã/ñ";
			this->chart5->Titles->Add(title4);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1400, 800);
			this->Controls->Add(this->chart5);
			this->Controls->Add(this->chart4);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->gb_otr);
			this->Controls->Add(this->gb_param);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->gb_param->ResumeLayout(false);
			this->gb_param->PerformLayout();
			this->gb_otr->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: double angle, dt, M, G, Ek, Ep, E,Lz,a,b,e,Ta,T,kep3,rminimax,min,max,r, xc, yc,c;
		     int x0,y0,vx,vy,tmax,R_Earth,n;
			 double* xx;
			 double* yy;
			 double* vxx;
			 double* vyy;
			 bool TT, aa, stop;
			 
			 
	private: System::Void ñòàðòToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ñòîïToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void âûõîäToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
	public: void DefaultParams();
		    void Kepler();
		    double f(double x, double y);
		    double g(double x, double y);
			void DrawEarth();
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
