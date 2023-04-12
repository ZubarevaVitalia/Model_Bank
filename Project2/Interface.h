#pragma once
#include "Model.h"

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Interface
	/// </summary>
	public ref class Interface : public System::Windows::Forms::Form
	{
	public:
		Model md;
		Interface(void)
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
		~Interface()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ timeBox;
	private: System::Windows::Forms::Button^ start;
	private: System::Windows::Forms::Button^ step;
	protected:



	private: System::Windows::Forms::GroupBox^ infoBox;
	private: System::Windows::Forms::TextBox^ clerkNumber;
	private: System::Windows::Forms::TextBox^ clientNumber;
	private: System::Windows::Forms::TextBox^ cl1;
	private: System::Windows::Forms::TextBox^ cl2;
	private: System::Windows::Forms::TextBox^ cl3;
	private: System::Windows::Forms::TextBox^ cl4;
	private: System::Windows::Forms::TextBox^ cl5;
	private: System::Windows::Forms::TextBox^ c1;
	private: System::Windows::Forms::TextBox^ c2;
	private: System::Windows::Forms::TextBox^ c3;
	private: System::Windows::Forms::TextBox^ c4;
	private: System::Windows::Forms::TextBox^ c5;










	private: System::Windows::Forms::TextBox^ cl6;
	private: System::Windows::Forms::TextBox^ c6;











	private: System::Windows::Forms::TextBox^ cl7;
	private: System::Windows::Forms::TextBox^ c7;
	private: System::Windows::Forms::Button^ tillEnd;
	private: System::Windows::Forms::Button^ again;
	private: System::Windows::Forms::Button^ exit;









	private: System::Windows::Forms::GroupBox^ Clerks;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ servedClients;

	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ departedClients;
	private: System::Windows::Forms::TextBox^ lengthQueue;


	private: System::Windows::Forms::TextBox^ waitingTime;
	private: System::Windows::Forms::TextBox^ workingTime;


	private: System::Windows::Forms::TextBox^ profit;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::TextBox^ mQueue;
private: System::Windows::Forms::TextBox^ queue;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
private: System::Windows::Forms::NumericUpDown^ numericUpDown2;


	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->timeBox = (gcnew System::Windows::Forms::TextBox());
			this->start = (gcnew System::Windows::Forms::Button());
			this->step = (gcnew System::Windows::Forms::Button());
			this->infoBox = (gcnew System::Windows::Forms::GroupBox());
			this->clerkNumber = (gcnew System::Windows::Forms::TextBox());
			this->clientNumber = (gcnew System::Windows::Forms::TextBox());
			this->cl1 = (gcnew System::Windows::Forms::TextBox());
			this->cl2 = (gcnew System::Windows::Forms::TextBox());
			this->cl3 = (gcnew System::Windows::Forms::TextBox());
			this->cl4 = (gcnew System::Windows::Forms::TextBox());
			this->cl5 = (gcnew System::Windows::Forms::TextBox());
			this->c1 = (gcnew System::Windows::Forms::TextBox());
			this->c2 = (gcnew System::Windows::Forms::TextBox());
			this->c3 = (gcnew System::Windows::Forms::TextBox());
			this->c4 = (gcnew System::Windows::Forms::TextBox());
			this->c5 = (gcnew System::Windows::Forms::TextBox());
			this->cl6 = (gcnew System::Windows::Forms::TextBox());
			this->c6 = (gcnew System::Windows::Forms::TextBox());
			this->cl7 = (gcnew System::Windows::Forms::TextBox());
			this->c7 = (gcnew System::Windows::Forms::TextBox());
			this->tillEnd = (gcnew System::Windows::Forms::Button());
			this->again = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->Clerks = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->servedClients = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->departedClients = (gcnew System::Windows::Forms::TextBox());
			this->lengthQueue = (gcnew System::Windows::Forms::TextBox());
			this->waitingTime = (gcnew System::Windows::Forms::TextBox());
			this->workingTime = (gcnew System::Windows::Forms::TextBox());
			this->profit = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->mQueue = (gcnew System::Windows::Forms::TextBox());
			this->queue = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->infoBox->SuspendLayout();
			this->Clerks->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// timeBox
			// 
			this->timeBox->Location = System::Drawing::Point(239, 12);
			this->timeBox->Name = L"timeBox";
			this->timeBox->ReadOnly = true;
			this->timeBox->Size = System::Drawing::Size(181, 20);
			this->timeBox->TabIndex = 0;
			// 
			// start
			// 
			this->start->Location = System::Drawing::Point(12, 365);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(97, 42);
			this->start->TabIndex = 1;
			this->start->Text = L"Старт";
			this->start->UseVisualStyleBackColor = true;
			this->start->Click += gcnew System::EventHandler(this, &Interface::Start_Click);
			// 
			// step
			// 
			this->step->Location = System::Drawing::Point(158, 365);
			this->step->Name = L"step";
			this->step->Enabled = false;
			this->step->Size = System::Drawing::Size(102, 41);
			this->step->TabIndex = 2;
			this->step->Text = L"Шаг";
			this->step->UseVisualStyleBackColor = true;
			this->step->Click += gcnew System::EventHandler(this, &Interface::Step_Click);
			// 
			// infoBox
			// 
			this->infoBox->Controls->Add(this->clerkNumber);
			this->infoBox->Controls->Add(this->clientNumber);
			this->infoBox->Location = System::Drawing::Point(239, 37);
			this->infoBox->Name = L"infoBox";
			this->infoBox->Size = System::Drawing::Size(181, 35);
			this->infoBox->TabIndex = 3;
			this->infoBox->TabStop = false;
			// 
			// clerkNumber
			// 
			this->clerkNumber->Location = System::Drawing::Point(137, 9);
			this->clerkNumber->Name = L"clerkNumber";
			this->clerkNumber->ReadOnly = true;
			this->clerkNumber->Size = System::Drawing::Size(44, 20);
			this->clerkNumber->TabIndex = 1;
			// 
			// clientNumber
			// 
			this->clientNumber->Location = System::Drawing::Point(0, 9);
			this->clientNumber->Name = L"clientNumber";
			this->clientNumber->ReadOnly = true;
			this->clientNumber->Size = System::Drawing::Size(139, 20);
			this->clientNumber->TabIndex = 0;
			// 
			// cl1
			// 
			this->cl1->Location = System::Drawing::Point(11, 8);
			this->cl1->Name = L"cl1";
			this->cl1->ReadOnly = true;
			this->cl1->Size = System::Drawing::Size(21, 20);
			this->cl1->TabIndex = 4;
			this->cl1->Text = L"К1";
			// 
			// cl2
			// 
			this->cl2->Location = System::Drawing::Point(50, 8);
			this->cl2->Name = L"cl2";
			this->cl2->ReadOnly = true;
			this->cl2->Size = System::Drawing::Size(21, 20);
			this->cl2->TabIndex = 5;
			this->cl2->Text = L"К2";
			// 
			// cl3
			// 
			this->cl3->Location = System::Drawing::Point(89, 8);
			this->cl3->Name = L"cl3";
			this->cl3->ReadOnly = true;
			this->cl3->Size = System::Drawing::Size(21, 20);
			this->cl3->TabIndex = 6;
			this->cl3->Text = L"К3";
			// 
			// cl4
			// 
			this->cl4->Location = System::Drawing::Point(129, 8);
			this->cl4->Name = L"cl4";
			this->cl4->ReadOnly = true;
			this->cl4->Size = System::Drawing::Size(21, 20);
			this->cl4->TabIndex = 7;
			this->cl4->Text = L"К4";
			// 
			// cl5
			// 
			this->cl5->Location = System::Drawing::Point(171, 8);
			this->cl5->Name = L"cl5";
			this->cl5->ReadOnly = true;
			this->cl5->Size = System::Drawing::Size(21, 20);
			this->cl5->TabIndex = 8;
			this->cl5->Text = L"К5";
			// 
			// c1
			// 
			this->c1->Location = System::Drawing::Point(11, 24);
			this->c1->Name = L"c1";
			this->c1->ReadOnly = true;
			this->c1->Size = System::Drawing::Size(21, 20);
			this->c1->TabIndex = 9;
			// 
			// c2
			// 
			this->c2->Location = System::Drawing::Point(50, 24);
			this->c2->Name = L"c2";
			this->c2->ReadOnly = true;
			this->c2->Size = System::Drawing::Size(21, 20);
			this->c2->TabIndex = 10;
			// 
			// c3
			// 
			this->c3->Location = System::Drawing::Point(89, 24);
			this->c3->Name = L"c3";
			this->c3->ReadOnly = true;
			this->c3->Size = System::Drawing::Size(21, 20);
			this->c3->TabIndex = 11;
			// 
			// c4
			// 
			this->c4->Location = System::Drawing::Point(129, 24);
			this->c4->Name = L"c4";
			this->c4->ReadOnly = true;
			this->c4->Size = System::Drawing::Size(21, 20);
			this->c4->TabIndex = 12;
			// 
			// c5
			// 
			this->c5->Location = System::Drawing::Point(171, 24);
			this->c5->Name = L"c5";
			this->c5->ReadOnly = true;
			this->c5->Size = System::Drawing::Size(21, 20);
			this->c5->TabIndex = 13;
			// 
			// cl6
			// 
			this->cl6->Location = System::Drawing::Point(11, 65);
			this->cl6->Name = L"cl6";
			this->cl6->ReadOnly = true;
			this->cl6->Size = System::Drawing::Size(21, 20);
			this->cl6->TabIndex = 14;
			this->cl6->Text = L"К6";
			// 
			// c6
			// 
			this->c6->Location = System::Drawing::Point(11, 82);
			this->c6->Name = L"c6";
			this->c6->ReadOnly = true;
			this->c6->Size = System::Drawing::Size(21, 20);
			this->c6->TabIndex = 15;
			// 
			// cl7
			// 
			this->cl7->Location = System::Drawing::Point(171, 65);
			this->cl7->Name = L"cl7";
			this->cl7->ReadOnly = true;
			this->cl7->Size = System::Drawing::Size(21, 20);
			this->cl7->TabIndex = 16;
			this->cl7->Text = L"К7";
			// 
			// c7
			// 
			this->c7->Location = System::Drawing::Point(171, 82);
			this->c7->Name = L"c7";
			this->c7->ReadOnly = true;
			this->c7->Size = System::Drawing::Size(21, 20);
			this->c7->TabIndex = 17;
			// 
			// tillEnd
			// 
			this->tillEnd->Location = System::Drawing::Point(278, 365);
			this->tillEnd->Name = L"tillEnd";
			this->tillEnd->Enabled = false;
			this->tillEnd->Size = System::Drawing::Size(102, 41);
			this->tillEnd->TabIndex = 18;
			this->tillEnd->Text = L"До конца";
			this->tillEnd->UseVisualStyleBackColor = true;
			this->tillEnd->Click += gcnew System::EventHandler(this, &Interface::tillEnd_Click);
			// 
			// again
			// 
			this->again->Location = System::Drawing::Point(399, 365);
			this->again->Name = L"again";
			this->again->Size = System::Drawing::Size(102, 41);
			this->again->TabIndex = 19;
			this->again->Text = L"Заново";
			this->again->UseVisualStyleBackColor = true;
			this->again->Click += gcnew System::EventHandler(this, &Interface::again_Click);
			// 
			// exit
			// 
			this->exit->Location = System::Drawing::Point(583, 366);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(102, 41);
			this->exit->TabIndex = 20;
			this->exit->Text = L"Выход";
			this->exit->UseVisualStyleBackColor = true;
			this->exit->Click += gcnew System::EventHandler(this, &Interface::exit_Click);
			// 
			// Clerks
			// 
			this->Clerks->Controls->Add(this->c7);
			this->Clerks->Controls->Add(this->cl7);
			this->Clerks->Controls->Add(this->c6);
			this->Clerks->Controls->Add(this->cl6);
			this->Clerks->Controls->Add(this->c5);
			this->Clerks->Controls->Add(this->c4);
			this->Clerks->Controls->Add(this->c3);
			this->Clerks->Controls->Add(this->c2);
			this->Clerks->Controls->Add(this->c1);
			this->Clerks->Controls->Add(this->cl5);
			this->Clerks->Controls->Add(this->cl4);
			this->Clerks->Controls->Add(this->cl3);
			this->Clerks->Controls->Add(this->cl2);
			this->Clerks->Controls->Add(this->cl1);
			this->Clerks->Location = System::Drawing::Point(228, 78);
			this->Clerks->Name = L"Clerks";
			this->Clerks->Size = System::Drawing::Size(206, 116);
			this->Clerks->TabIndex = 21;
			this->Clerks->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(185, 23);
			this->textBox1->TabIndex = 22;
			this->textBox1->Text = L"Параметры";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(452, 12);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(233, 23);
			this->textBox2->TabIndex = 23;
			this->textBox2->Text = L"Статистика";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(12, 87);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(185, 21);
			this->textBox3->TabIndex = 24;
			this->textBox3->Text = L"Количество клерков";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(12, 174);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(185, 21);
			this->textBox4->TabIndex = 25;
			this->textBox4->Text = L"Максимальная длина очереди";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(12, 266);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(185, 21);
			this->textBox5->TabIndex = 26;
			this->textBox5->Text = L"Шаг моделирования";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(452, 69);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(182, 20);
			this->textBox6->TabIndex = 27;
			this->textBox6->Text = L"Кол-во обслуженных клиентов";
			// 
			// servedClients
			// 
			this->servedClients->Location = System::Drawing::Point(634, 69);
			this->servedClients->Name = L"servedClients";
			this->servedClients->ReadOnly = true;
			this->servedClients->Size = System::Drawing::Size(51, 20);
			this->servedClients->TabIndex = 28;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(452, 123);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(182, 20);
			this->textBox8->TabIndex = 29;
			this->textBox8->Text = L"Кол-во потерянных клиентов";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(452, 174);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(182, 20);
			this->textBox9->TabIndex = 30;
			this->textBox9->Text = L"Средняя длина очереди";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(452, 223);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(182, 20);
			this->textBox10->TabIndex = 31;
			this->textBox10->Text = L"Среднее время ожидания клиента";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(452, 268);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(182, 20);
			this->textBox11->TabIndex = 32;
			this->textBox11->Text = L"Среднее время занятости клерка";
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox12->Location = System::Drawing::Point(452, 315);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(129, 21);
			this->textBox12->TabIndex = 33;
			this->textBox12->Text = L"Прибыль";
			// 
			// departedClients
			// 
			this->departedClients->Location = System::Drawing::Point(634, 123);
			this->departedClients->Name = L"departedClients";
			this->departedClients->ReadOnly = true;
			this->departedClients->Size = System::Drawing::Size(51, 20);
			this->departedClients->TabIndex = 34;
			// 
			// lengthQueue
			// 
			this->lengthQueue->Location = System::Drawing::Point(634, 174);
			this->lengthQueue->Name = L"lengthQueue";
			this->lengthQueue->ReadOnly = true;
			this->lengthQueue->Size = System::Drawing::Size(51, 20);
			this->lengthQueue->TabIndex = 35;
			// 
			// waitingTime
			// 
			this->waitingTime->Location = System::Drawing::Point(634, 223);
			this->waitingTime->Name = L"waitingTime";
			this->waitingTime->ReadOnly = true;
			this->waitingTime->Size = System::Drawing::Size(51, 20);
			this->waitingTime->TabIndex = 36;
			// 
			// workingTime
			// 
			this->workingTime->Location = System::Drawing::Point(634, 268);
			this->workingTime->Name = L"workingTime";
			this->workingTime->ReadOnly = true;
			this->workingTime->Size = System::Drawing::Size(51, 20);
			this->workingTime->TabIndex = 37;
			// 
			// profit
			// 
			this->profit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->profit->Location = System::Drawing::Point(577, 315);
			this->profit->Name = L"profit";
			this->profit->ReadOnly = true;
			this->profit->Size = System::Drawing::Size(108, 21);
			this->profit->TabIndex = 38;
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(228, 230);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(206, 20);
			this->textBox7->TabIndex = 39;
			this->textBox7->Text = L"Длина очереди                     из";
			// 
			// mQueue
			// 
			this->mQueue->Location = System::Drawing::Point(391, 230);
			this->mQueue->Name = L"mQueue";
			this->mQueue->ReadOnly = true;
			this->mQueue->Size = System::Drawing::Size(43, 20);
			this->mQueue->TabIndex = 40;
			// 
			// queue
			// 
			this->queue->Location = System::Drawing::Point(317, 230);
			this->queue->Name = L"queue";
			this->queue->ReadOnly = true;
			this->queue->Size = System::Drawing::Size(43, 20);
			this->queue->TabIndex = 41;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"2", L"3", L"4", L"5", L"6", L"7" });
			this->comboBox1->Location = System::Drawing::Point(12, 114);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(185, 23);
			this->comboBox1->TabIndex = 42;
			this->comboBox1->Text = L"2";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown1->Location = System::Drawing::Point(12, 201);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(182, 21);
			this->numericUpDown1->TabIndex = 43;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown2->Location = System::Drawing::Point(12, 293);
			this->numericUpDown2->Maximum = 60;
			this->numericUpDown2->Minimum = 10;
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(185, 21);
			this->numericUpDown2->TabIndex = 44;
			// 
			// Interface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(697, 419);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->queue);
			this->Controls->Add(this->mQueue);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->profit);
			this->Controls->Add(this->workingTime);
			this->Controls->Add(this->waitingTime);
			this->Controls->Add(this->lengthQueue);
			this->Controls->Add(this->departedClients);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->servedClients);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Clerks);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->again);
			this->Controls->Add(this->tillEnd);
			this->Controls->Add(this->infoBox);
			this->Controls->Add(this->step);
			this->Controls->Add(this->start);
			this->Controls->Add(this->timeBox);
			this->Name = L"Interface";
			this->Text = L"Interface";
			this->Load += gcnew System::EventHandler(this, &Interface::Interface_Load);
			this->infoBox->ResumeLayout(false);
			this->infoBox->PerformLayout();
			this->Clerks->ResumeLayout(false);
			this->Clerks->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Interface_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Start_Click(System::Object^ sender, System::EventArgs^ e) {
		this->step->Enabled = true;
		this->tillEnd->Enabled = true;
		md.numbClerks = int::Parse(this->comboBox1->SelectedItem->ToString());
		md.maxQueueLength = int(this->numericUpDown1->Value);
		md.modelStep = int(this->numericUpDown2->Value);
		this->comboBox1->Enabled = false;
		this->numericUpDown1->Enabled = false;
		this->numericUpDown2->Enabled = false;
		md.Start();
		this->timeBox->Text = md.strTime();
		if (md.numbClerks == 7) {
			this->c7->Text = "0";
		}
		if (md.numbClerks >= 6) {
			this->c6->Text = "0";
		}
		if (md.numbClerks >= 5) {
			this->c5->Text = "0";
		}
		if (md.numbClerks >= 4) {
			this->c4->Text = "0";
		}
		if (md.numbClerks >= 3) {
			this->c3->Text = "0";
		}
		this->c1->Text = "0";
		this->c2->Text = "0";
		this->profit->Text = "0";
		this->mQueue->Text = md.maxQueueLength.ToString();
		this->queue->Text = "0";
	}
	private: System::Void Step_Click(System::Object^ sender, System::EventArgs^ e) {
		md.Step();
		std::pair<int, int> inf = *md.info;
		this->timeBox->Text = md.strTime();
		if (md.numbClerks == 7) {
			this->c7->Text = int(md.bank->clerks[6].endTime > md.time).ToString();
		}
		if (md.numbClerks >= 6) {
			this->c6->Text = int(md.bank->clerks[5].endTime > md.time).ToString();
		}
		if (md.numbClerks >= 5) {
			this->c5->Text = int(md.bank->clerks[4].endTime > md.time).ToString();
		}
		if (md.numbClerks >= 4) {
			this->c4->Text = int(md.bank->clerks[3].endTime > md.time).ToString();
		}
		if (md.numbClerks >= 3) {
			this->c3->Text = int(md.bank->clerks[2].endTime > md.time).ToString();
		}
		this->c1->Text = int(md.bank->clerks[0].endTime > md.time).ToString();
		this->c2->Text = int(md.bank->clerks[1].endTime > md.time).ToString();
		this->queue->Text = md.bank->requests.size().ToString();
		this->clerkNumber->Text = inf.second.ToString();
		this->clientNumber->Text = inf.first.ToString();
		this->profit->Text = md.bank->profit.ToString();
		this->servedClients->Text = md.bank->numbServedClients.ToString();
		this->departedClients->Text = md.numbDepartedClients.ToString();
		this->waitingTime->Text = md.stTime(md.avarageWaitingTime);
		this->workingTime->Text = md.stTime(md.avarageWorkingTime);
		this->lengthQueue->Text = md.avarageQueueLength.ToString();
	}
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void tillEnd_Click(System::Object^ sender, System::EventArgs^ e) {
		md.End();
		std::pair<int, int> inf = *md.info;
		this->timeBox->Text = md.strTime();
		if (md.numbClerks == 7) {
			this->c7->Text = int(md.bank->clerks[6].endTime > md.time).ToString();
		}
		if (md.numbClerks >= 6) {
			this->c6->Text = int(md.bank->clerks[5].endTime > md.time).ToString();
		}
		if (md.numbClerks >= 5) {
			this->c5->Text = int(md.bank->clerks[4].endTime > md.time).ToString();
		}
		if (md.numbClerks >= 4) {
			this->c4->Text = int(md.bank->clerks[3].endTime > md.time).ToString();
		}
		if (md.numbClerks >= 3) {
			this->c3->Text = int(md.bank->clerks[2].endTime > md.time).ToString();
		}
		this->c1->Text = int(md.bank->clerks[0].endTime > md.time).ToString();
		this->c2->Text = int(md.bank->clerks[1].endTime > md.time).ToString();
		this->queue->Text = md.bank->requests.size().ToString();
		this->clerkNumber->Text = inf.second.ToString();
		this->clientNumber->Text = inf.first.ToString();
		this->profit->Text = md.bank->profit.ToString();
		this->servedClients->Text = md.bank->numbServedClients.ToString();
		this->departedClients->Text = md.numbDepartedClients.ToString();
		this->waitingTime->Text = md.stTime(md.avarageWaitingTime);
		this->workingTime->Text = md.stTime(md.avarageWorkingTime);
		this->lengthQueue->Text = md.avarageQueueLength.ToString();
	}
	private: System::Void again_Click(System::Object^ sender, System::EventArgs^ e) {
		md.Again();
		this->comboBox1->Enabled = true;
		this->numericUpDown1->Enabled = true;
		this->numericUpDown2->Enabled = true;
		this->step->Enabled = false;
		this->tillEnd->Enabled = false;
		this->c1->Text = "";
		this->c2->Text = "";
		this->c3->Text = "";
		this->c4->Text = "";
		this->c5->Text = "";
		this->c6->Text = "";
		this->c7->Text = "";
		this->queue->Text = "";
		this->clerkNumber->Text = "";
		this->clientNumber->Text = "";
		this->profit->Text = "";
		this->servedClients->Text = "";
		this->departedClients->Text = "";
		this->timeBox->Text = "";
		this->mQueue->Text = "";
		this->waitingTime->Text = "";
		this->workingTime->Text = "";
		this->lengthQueue->Text = "";
	}
};
}
