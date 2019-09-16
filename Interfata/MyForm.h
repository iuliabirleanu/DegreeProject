#pragma once

namespace Interfata {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text::RegularExpressions;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public struct tranzitie_executabila {
		int tranzitie;
		int tip;
	};
	public struct cerere {
		double MS;
		int tip;
	};


	public ref class MyForm : public System::Windows::Forms::Form
	{

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
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;


	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;















































































private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::PictureBox^  pictureBox7;
private: System::Windows::Forms::PictureBox^  pictureBox6;
private: System::Windows::Forms::PictureBox^  pictureBox5;
private: System::Windows::Forms::PictureBox^  pictureBox4;
private: System::Windows::Forms::Label^  og3;

private: System::Windows::Forms::Label^  o33;
private: System::Windows::Forms::Label^  o32;
private: System::Windows::Forms::Label^  o31;
private: System::Windows::Forms::Label^  trm3;







private: System::Windows::Forms::Label^  ct3;




private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Label^  og1;

private: System::Windows::Forms::Label^  o13;

private: System::Windows::Forms::Label^  o12;

private: System::Windows::Forms::Label^  o11;

private: System::Windows::Forms::Label^  trm1;

private: System::Windows::Forms::Label^  ct1;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  og2;

private: System::Windows::Forms::Label^  o22;

private: System::Windows::Forms::Label^  o21;

private: System::Windows::Forms::Label^  trm2;

private: System::Windows::Forms::Label^  ct2;
private: System::Windows::Forms::Label^  pcrg;

private: System::Windows::Forms::Label^  pcr4;

private: System::Windows::Forms::Label^  pcr3;

private: System::Windows::Forms::Label^  pcr2;

private: System::Windows::Forms::Label^  pcr1;

private: System::Windows::Forms::Label^  label38;

















	private: System::ComponentModel::IContainer^  components;

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager (MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl ());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage ());
			this->button3 = (gcnew System::Windows::Forms::Button ());
			this->button2 = (gcnew System::Windows::Forms::Button ());
			this->button1 = (gcnew System::Windows::Forms::Button ());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox ());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox ());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox ());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox ());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox ());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox ());
			this->label35 = (gcnew System::Windows::Forms::Label ());
			this->label34 = (gcnew System::Windows::Forms::Label ());
			this->label33 = (gcnew System::Windows::Forms::Label ());
			this->label32 = (gcnew System::Windows::Forms::Label ());
			this->label31 = (gcnew System::Windows::Forms::Label ());
			this->label30 = (gcnew System::Windows::Forms::Label ());
			this->label29 = (gcnew System::Windows::Forms::Label ());
			this->label28 = (gcnew System::Windows::Forms::Label ());
			this->label27 = (gcnew System::Windows::Forms::Label ());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox ());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox ());
			this->label26 = (gcnew System::Windows::Forms::Label ());
			this->label25 = (gcnew System::Windows::Forms::Label ());
			this->label24 = (gcnew System::Windows::Forms::Label ());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox ());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox ());
			this->label23 = (gcnew System::Windows::Forms::Label ());
			this->label22 = (gcnew System::Windows::Forms::Label ());
			this->label21 = (gcnew System::Windows::Forms::Label ());
			this->label20 = (gcnew System::Windows::Forms::Label ());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox ());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox ());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox ());
			this->label19 = (gcnew System::Windows::Forms::Label ());
			this->label18 = (gcnew System::Windows::Forms::Label ());
			this->label17 = (gcnew System::Windows::Forms::Label ());
			this->label16 = (gcnew System::Windows::Forms::Label ());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox ());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox ());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox ());
			this->label15 = (gcnew System::Windows::Forms::Label ());
			this->label14 = (gcnew System::Windows::Forms::Label ());
			this->label13 = (gcnew System::Windows::Forms::Label ());
			this->label12 = (gcnew System::Windows::Forms::Label ());
			this->label11 = (gcnew System::Windows::Forms::Label ());
			this->label10 = (gcnew System::Windows::Forms::Label ());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox ());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox ());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox ());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox ());
			this->label9 = (gcnew System::Windows::Forms::Label ());
			this->label8 = (gcnew System::Windows::Forms::Label ());
			this->label7 = (gcnew System::Windows::Forms::Label ());
			this->label6 = (gcnew System::Windows::Forms::Label ());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox ());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox ());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox ());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox ());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox ());
			this->label5 = (gcnew System::Windows::Forms::Label ());
			this->label4 = (gcnew System::Windows::Forms::Label ());
			this->label3 = (gcnew System::Windows::Forms::Label ());
			this->label2 = (gcnew System::Windows::Forms::Label ());
			this->label1 = (gcnew System::Windows::Forms::Label ());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox ());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage ());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox ());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox ());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox ());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox ());
			this->label36 = (gcnew System::Windows::Forms::Label ());
			this->ct1 = (gcnew System::Windows::Forms::Label ());
			this->trm1 = (gcnew System::Windows::Forms::Label ());
			this->o11 = (gcnew System::Windows::Forms::Label ());
			this->o12 = (gcnew System::Windows::Forms::Label ());
			this->o13 = (gcnew System::Windows::Forms::Label ());
			this->og1 = (gcnew System::Windows::Forms::Label ());
			this->label43 = (gcnew System::Windows::Forms::Label ());
			this->ct3 = (gcnew System::Windows::Forms::Label ());
			this->trm3 = (gcnew System::Windows::Forms::Label ());
			this->o31 = (gcnew System::Windows::Forms::Label ());
			this->o32 = (gcnew System::Windows::Forms::Label ());
			this->o33 = (gcnew System::Windows::Forms::Label ());
			this->og3 = (gcnew System::Windows::Forms::Label ());
			this->label37 = (gcnew System::Windows::Forms::Label ());
			this->ct2 = (gcnew System::Windows::Forms::Label ());
			this->trm2 = (gcnew System::Windows::Forms::Label ());
			this->o21 = (gcnew System::Windows::Forms::Label ());
			this->o22 = (gcnew System::Windows::Forms::Label ());
			this->og2 = (gcnew System::Windows::Forms::Label ());
			this->label38 = (gcnew System::Windows::Forms::Label ());
			this->pcr1 = (gcnew System::Windows::Forms::Label ());
			this->pcr2 = (gcnew System::Windows::Forms::Label ());
			this->pcr3 = (gcnew System::Windows::Forms::Label ());
			this->pcr4 = (gcnew System::Windows::Forms::Label ());
			this->pcrg = (gcnew System::Windows::Forms::Label ());
			this->tabControl1->SuspendLayout ();
			this->tabPage1->SuspendLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit ();
			this->tabPage2->SuspendLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit ();
			this->SuspendLayout ();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add (this->tabPage1);
			this->tabControl1->Controls->Add (this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point (0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size (678, 590);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add (this->button3);
			this->tabPage1->Controls->Add (this->button2);
			this->tabPage1->Controls->Add (this->button1);
			this->tabPage1->Controls->Add (this->textBox23);
			this->tabPage1->Controls->Add (this->textBox22);
			this->tabPage1->Controls->Add (this->textBox21);
			this->tabPage1->Controls->Add (this->textBox20);
			this->tabPage1->Controls->Add (this->textBox19);
			this->tabPage1->Controls->Add (this->textBox18);
			this->tabPage1->Controls->Add (this->label35);
			this->tabPage1->Controls->Add (this->label34);
			this->tabPage1->Controls->Add (this->label33);
			this->tabPage1->Controls->Add (this->label32);
			this->tabPage1->Controls->Add (this->label31);
			this->tabPage1->Controls->Add (this->label30);
			this->tabPage1->Controls->Add (this->label29);
			this->tabPage1->Controls->Add (this->label28);
			this->tabPage1->Controls->Add (this->label27);
			this->tabPage1->Controls->Add (this->textBox17);
			this->tabPage1->Controls->Add (this->textBox16);
			this->tabPage1->Controls->Add (this->label26);
			this->tabPage1->Controls->Add (this->label25);
			this->tabPage1->Controls->Add (this->label24);
			this->tabPage1->Controls->Add (this->textBox15);
			this->tabPage1->Controls->Add (this->textBox14);
			this->tabPage1->Controls->Add (this->label23);
			this->tabPage1->Controls->Add (this->label22);
			this->tabPage1->Controls->Add (this->label21);
			this->tabPage1->Controls->Add (this->label20);
			this->tabPage1->Controls->Add (this->textBox13);
			this->tabPage1->Controls->Add (this->textBox12);
			this->tabPage1->Controls->Add (this->textBox11);
			this->tabPage1->Controls->Add (this->label19);
			this->tabPage1->Controls->Add (this->label18);
			this->tabPage1->Controls->Add (this->label17);
			this->tabPage1->Controls->Add (this->label16);
			this->tabPage1->Controls->Add (this->textBox10);
			this->tabPage1->Controls->Add (this->textBox9);
			this->tabPage1->Controls->Add (this->textBox8);
			this->tabPage1->Controls->Add (this->label15);
			this->tabPage1->Controls->Add (this->label14);
			this->tabPage1->Controls->Add (this->label13);
			this->tabPage1->Controls->Add (this->label12);
			this->tabPage1->Controls->Add (this->label11);
			this->tabPage1->Controls->Add (this->label10);
			this->tabPage1->Controls->Add (this->pictureBox3);
			this->tabPage1->Controls->Add (this->textBox7);
			this->tabPage1->Controls->Add (this->textBox6);
			this->tabPage1->Controls->Add (this->textBox5);
			this->tabPage1->Controls->Add (this->label9);
			this->tabPage1->Controls->Add (this->label8);
			this->tabPage1->Controls->Add (this->label7);
			this->tabPage1->Controls->Add (this->label6);
			this->tabPage1->Controls->Add (this->pictureBox2);
			this->tabPage1->Controls->Add (this->textBox4);
			this->tabPage1->Controls->Add (this->textBox3);
			this->tabPage1->Controls->Add (this->textBox2);
			this->tabPage1->Controls->Add (this->textBox1);
			this->tabPage1->Controls->Add (this->label5);
			this->tabPage1->Controls->Add (this->label4);
			this->tabPage1->Controls->Add (this->label3);
			this->tabPage1->Controls->Add (this->label2);
			this->tabPage1->Controls->Add (this->label1);
			this->tabPage1->Controls->Add (this->pictureBox1);
			this->tabPage1->Location = System::Drawing::Point (4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding (3);
			this->tabPage1->Size = System::Drawing::Size (670, 564);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Configurare";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler (this, &MyForm::tabPage1_Click_1);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DodgerBlue;
			this->button3->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point (20, 470);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size (117, 67);
			this->button3->TabIndex = 61;
			this->button3->Text = L"DEFAULT \r\nVALUES";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler (this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkOrange;
			this->button2->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point (463, 481);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size (118, 36);
			this->button2->TabIndex = 60;
			this->button2->Text = L"RESET";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler (this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LimeGreen;
			this->button1->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point (253, 481);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size (118, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"RUN";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler (this, &MyForm::button1_Click);
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point (580, 420);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size (50, 20);
			this->textBox23->TabIndex = 59;
			this->textBox23->TextChanged += gcnew System::EventHandler (this, &MyForm::textBox23_TextChanged);
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point (580, 395);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size (50, 20);
			this->textBox22->TabIndex = 58;
			this->textBox22->TextChanged += gcnew System::EventHandler (this, &MyForm::textBox22_TextChanged);
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point (580, 370);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size (50, 20);
			this->textBox21->TabIndex = 57;
			this->textBox21->TextChanged += gcnew System::EventHandler (this, &MyForm::textBox21_TextChanged);
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point (580, 320);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size (50, 20);
			this->textBox20->TabIndex = 56;
			this->textBox20->TextChanged += gcnew System::EventHandler (this, &MyForm::textBox20_TextChanged);
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point (580, 295);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size (50, 20);
			this->textBox19->TabIndex = 55;
			this->textBox19->TextChanged += gcnew System::EventHandler (this, &MyForm::textBox19_TextChanged);
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point (580, 270);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size (50, 20);
			this->textBox18->TabIndex = 54;
			this->textBox18->TextChanged += gcnew System::EventHandler (this, &MyForm::textBox18_TextChanged);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::Lavender;
			this->label35->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point (460, 420);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size (73, 15);
			this->label35->TabIndex = 53;
			this->label35->Text = L"Procesor 33";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::Color::Lavender;
			this->label34->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point (460, 395);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size (73, 15);
			this->label34->TabIndex = 52;
			this->label34->Text = L"Procesor 32";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::Lavender;
			this->label33->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point (460, 370);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size (73, 15);
			this->label33->TabIndex = 51;
			this->label33->Text = L"Procesor 31";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::Lavender;
			this->label32->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point (460, 345);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size (83, 15);
			this->label32->TabIndex = 50;
			this->label32->Text = L"Cereri de tip 4";
			this->label32->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::Lavender;
			this->label31->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point (460, 320);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size (73, 15);
			this->label31->TabIndex = 49;
			this->label31->Text = L"Procesor 33";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::Lavender;
			this->label30->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point (460, 295);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size (73, 15);
			this->label30->TabIndex = 48;
			this->label30->Text = L"Procesor 32";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::Lavender;
			this->label29->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point (460, 270);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size (73, 15);
			this->label29->TabIndex = 47;
			this->label29->Text = L"Procesor 31";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Lavender;
			this->label28->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point (460, 245);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size (83, 15);
			this->label28->TabIndex = 46;
			this->label28->Text = L"Cereri de tip 3";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Lavender;
			this->label27->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point (460, 220);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size (81, 15);
			this->label27->TabIndex = 45;
			this->label27->Text = L"Subreteaua 3";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point (370, 370);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size (50, 20);
			this->textBox17->TabIndex = 44;
			this->textBox17->TextChanged += gcnew System::EventHandler (this, &MyForm::textBox17_TextChanged);
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point (370, 395);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size (50, 20);
			this->textBox16->TabIndex = 43;
			this->textBox16->TextChanged += gcnew System::EventHandler (this, &MyForm::textBox16_TextChanged);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Lavender;
			this->label26->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point (250, 395);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size (73, 15);
			this->label26->TabIndex = 42;
			this->label26->Text = L"Procesor 22";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Lavender;
			this->label25->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point (250, 370);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size (73, 15);
			this->label25->TabIndex = 41;
			this->label25->Text = L"Procesor 21";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Lavender;
			this->label24->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point (250, 345);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size (83, 15);
			this->label24->TabIndex = 40;
			this->label24->Text = L"Cereri de tip 3";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point (370, 270);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size (50, 20);
			this->textBox15->TabIndex = 39;
			this->textBox15->TextChanged += gcnew System::EventHandler (this, &MyForm::textBox15_TextChanged);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point (370, 295);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size (50, 20);
			this->textBox14->TabIndex = 38;
			this->textBox14->TextChanged += gcnew System::EventHandler (this, &MyForm::textBox14_TextChanged);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Lavender;
			this->label23->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point (250, 295);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size (73, 15);
			this->label23->TabIndex = 37;
			this->label23->Text = L"Procesor 22";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Lavender;
			this->label22->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point (250, 270);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size (73, 15);
			this->label22->TabIndex = 36;
			this->label22->Text = L"Procesor 21";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Lavender;
			this->label21->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point (250, 245);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size (83, 15);
			this->label21->TabIndex = 35;
			this->label21->Text = L"Cereri de tip 2";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Lavender;
			this->label20->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point (250, 220);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size (81, 15);
			this->label20->TabIndex = 34;
			this->label20->Text = L"Subreteaua 2";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point (150, 370);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size (50, 20);
			this->textBox13->TabIndex = 33;
			this->textBox13->TextChanged += gcnew System::EventHandler (this, &MyForm::textBox13_TextChanged);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point (150, 395);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size (50, 20);
			this->textBox12->TabIndex = 32;
			this->textBox12->TextChanged += gcnew System::EventHandler (this, &MyForm::textBox12_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point (150, 420);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size (50, 20);
			this->textBox11->TabIndex = 31;
			this->textBox11->TextChanged += gcnew System::EventHandler (this, &MyForm::textBox11_TextChanged);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Lavender;
			this->label19->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point (30, 420);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size (73, 15);
			this->label19->TabIndex = 30;
			this->label19->Text = L"Procesor 13";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Lavender;
			this->label18->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point (30, 395);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size (73, 15);
			this->label18->TabIndex = 29;
			this->label18->Text = L"Procesor 12";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Lavender;
			this->label17->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point (30, 370);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size (73, 15);
			this->label17->TabIndex = 28;
			this->label17->Text = L"Procesor 11";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Lavender;
			this->label16->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point (30, 345);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size (83, 15);
			this->label16->TabIndex = 27;
			this->label16->Text = L"Cereri de tip 2";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point (150, 320);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size (50, 20);
			this->textBox10->TabIndex = 26;
			this->textBox10->TextChanged += gcnew System::EventHandler (this, &MyForm::textBox10_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point (150, 295);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size (50, 20);
			this->textBox9->TabIndex = 25;
			this->textBox9->TextChanged += gcnew System::EventHandler (this, &MyForm::textBox9_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point (150, 270);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size (50, 20);
			this->textBox8->TabIndex = 24;
			this->textBox8->TextChanged += gcnew System::EventHandler (this, &MyForm::textBox8_TextChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Lavender;
			this->label15->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point (30, 320);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size (73, 15);
			this->label15->TabIndex = 23;
			this->label15->Text = L"Procesor 13";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Lavender;
			this->label14->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point (30, 295);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size (73, 15);
			this->label14->TabIndex = 22;
			this->label14->Text = L"Procesor 12";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Lavender;
			this->label13->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point (30, 270);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size (73, 15);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Procesor 11";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Lavender;
			this->label12->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point (30, 245);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size (83, 15);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Cereri de tip 1";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Lavender;
			this->label11->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point (30, 220);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size (89, 15);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Subreteaua S1";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Lavender;
			this->label10->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point (30, 190);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size (163, 15);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Rata de prelucare a cererilor";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Lavender;
			this->pictureBox3->Location = System::Drawing::Point (20, 185);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size (624, 266);
			this->pictureBox3->TabIndex = 1;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler (this, &MyForm::pictureBox3_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point (500, 50);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size (50, 20);
			this->textBox7->TabIndex = 18;
			this->textBox7->TextChanged += gcnew System::EventHandler (this, &MyForm::textBox7_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point (500, 75);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size (50, 20);
			this->textBox6->TabIndex = 17;
			this->textBox6->TextChanged += gcnew System::EventHandler (this, &MyForm::textBox6_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point (500, 100);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size (50, 20);
			this->textBox5->TabIndex = 16;
			this->textBox5->TextChanged += gcnew System::EventHandler (this, &MyForm::textBox5_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::LightCyan;
			this->label9->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point (390, 75);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size (89, 15);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Subreteaua S2";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::LightCyan;
			this->label8->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point (390, 100);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size (89, 15);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Subreteaua S3";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::LightCyan;
			this->label7->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point (390, 50);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size (89, 15);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Subreteaua S1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::LightCyan;
			this->label6->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point (390, 25);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size (119, 15);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Dimensionare buffer";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::LightCyan;
			this->pictureBox2->Location = System::Drawing::Point (380, 20);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size (264, 125);
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point (150, 125);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size (70, 20);
			this->textBox4->TabIndex = 10;
			this->textBox4->TextChanged += gcnew System::EventHandler (this, &MyForm::textBox4_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point (150, 100);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size (70, 20);
			this->textBox3->TabIndex = 9;
			this->textBox3->TextChanged += gcnew System::EventHandler (this, &MyForm::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point (150, 75);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size (70, 20);
			this->textBox2->TabIndex = 8;
			this->textBox2->TextChanged += gcnew System::EventHandler (this, &MyForm::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point (150, 50);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size (70, 20);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler (this, &MyForm::textBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::MistyRose;
			this->label5->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point (30, 125);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size (83, 15);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Cereri de tip 4";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::MistyRose;
			this->label4->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point (30, 100);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size (83, 15);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Cereri de tip 3";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::MistyRose;
			this->label3->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point (30, 75);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size (83, 15);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Cereri de tip 2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::MistyRose;
			this->label2->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point (30, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size (83, 15);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Cereri de tip 1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::MistyRose;
			this->label1->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point (30, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size (223, 15);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Frecventa de sosire a cererilor in sistem";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::MistyRose;
			this->pictureBox1->Location = System::Drawing::Point (20, 20);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size (300, 150);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler (this, &MyForm::pictureBox1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add (this->pcrg);
			this->tabPage2->Controls->Add (this->pcr4);
			this->tabPage2->Controls->Add (this->pcr3);
			this->tabPage2->Controls->Add (this->pcr2);
			this->tabPage2->Controls->Add (this->pcr1);
			this->tabPage2->Controls->Add (this->label38);
			this->tabPage2->Controls->Add (this->og2);
			this->tabPage2->Controls->Add (this->o22);
			this->tabPage2->Controls->Add (this->o21);
			this->tabPage2->Controls->Add (this->trm2);
			this->tabPage2->Controls->Add (this->ct2);
			this->tabPage2->Controls->Add (this->label37);
			this->tabPage2->Controls->Add (this->og3);
			this->tabPage2->Controls->Add (this->o33);
			this->tabPage2->Controls->Add (this->o32);
			this->tabPage2->Controls->Add (this->o31);
			this->tabPage2->Controls->Add (this->trm3);
			this->tabPage2->Controls->Add (this->ct3);
			this->tabPage2->Controls->Add (this->label43);
			this->tabPage2->Controls->Add (this->og1);
			this->tabPage2->Controls->Add (this->o13);
			this->tabPage2->Controls->Add (this->o12);
			this->tabPage2->Controls->Add (this->o11);
			this->tabPage2->Controls->Add (this->trm1);
			this->tabPage2->Controls->Add (this->ct1);
			this->tabPage2->Controls->Add (this->label36);
			this->tabPage2->Controls->Add (this->pictureBox7);
			this->tabPage2->Controls->Add (this->pictureBox6);
			this->tabPage2->Controls->Add (this->pictureBox5);
			this->tabPage2->Controls->Add (this->pictureBox4);
			this->tabPage2->Location = System::Drawing::Point (4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding (3);
			this->tabPage2->Size = System::Drawing::Size (670, 564);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Rezultate";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler (this, &MyForm::tabPage2_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::LightCyan;
			this->pictureBox4->Location = System::Drawing::Point (30, 30);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size (250, 230);
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler (this, &MyForm::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::LightCyan;
			this->pictureBox5->Location = System::Drawing::Point (386, 30);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size (250, 230);
			this->pictureBox5->TabIndex = 1;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::LightCyan;
			this->pictureBox6->Location = System::Drawing::Point (30, 312);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size (250, 205);
			this->pictureBox6->TabIndex = 2;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::LavenderBlush;
			this->pictureBox7->Location = System::Drawing::Point (386, 312);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size (250, 205);
			this->pictureBox7->TabIndex = 3;
			this->pictureBox7->TabStop = false;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::LightCyan;
			this->label36->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point (40, 40);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size (105, 18);
			this->label36->TabIndex = 4;
			this->label36->Text = L"Subreteaua S1";
			this->label36->Click += gcnew System::EventHandler (this, &MyForm::label36_Click);
			// 
			// ct1
			// 
			this->ct1->AutoSize = true;
			this->ct1->BackColor = System::Drawing::Color::LightCyan;
			this->ct1->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ct1->Location = System::Drawing::Point (40, 70);
			this->ct1->Name = L"ct1";
			this->ct1->Size = System::Drawing::Size (42, 17);
			this->ct1->TabIndex = 5;
			this->ct1->Text = L"CT = ";
			this->ct1->Click += gcnew System::EventHandler (this, &MyForm::ct1_Click);
			// 
			// trm1
			// 
			this->trm1->AutoSize = true;
			this->trm1->BackColor = System::Drawing::Color::LightCyan;
			this->trm1->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->trm1->Location = System::Drawing::Point (40, 100);
			this->trm1->Name = L"trm1";
			this->trm1->Size = System::Drawing::Size (49, 17);
			this->trm1->TabIndex = 6;
			this->trm1->Text = L"Trm = ";
			// 
			// o11
			// 
			this->o11->AutoSize = true;
			this->o11->BackColor = System::Drawing::Color::LightCyan;
			this->o11->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->o11->Location = System::Drawing::Point (40, 130);
			this->o11->Name = L"o11";
			this->o11->Size = System::Drawing::Size (47, 17);
			this->o11->TabIndex = 7;
			this->o11->Text = L"O11 =";
			// 
			// o12
			// 
			this->o12->AutoSize = true;
			this->o12->BackColor = System::Drawing::Color::LightCyan;
			this->o12->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->o12->Location = System::Drawing::Point (40, 160);
			this->o12->Name = L"o12";
			this->o12->Size = System::Drawing::Size (47, 17);
			this->o12->TabIndex = 8;
			this->o12->Text = L"O12 =";
			// 
			// o13
			// 
			this->o13->AutoSize = true;
			this->o13->BackColor = System::Drawing::Color::LightCyan;
			this->o13->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->o13->Location = System::Drawing::Point (40, 190);
			this->o13->Name = L"o13";
			this->o13->Size = System::Drawing::Size (51, 17);
			this->o13->TabIndex = 9;
			this->o13->Text = L"O13 = ";
			// 
			// og1
			// 
			this->og1->AutoSize = true;
			this->og1->BackColor = System::Drawing::Color::LightCyan;
			this->og1->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->og1->Location = System::Drawing::Point (40, 220);
			this->og1->Name = L"og1";
			this->og1->Size = System::Drawing::Size (83, 17);
			this->og1->TabIndex = 10;
			this->og1->Text = L"Ogeneral = ";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::Color::LightCyan;
			this->label43->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point (400, 40);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size (105, 18);
			this->label43->TabIndex = 11;
			this->label43->Text = L"Subreteaua S3";
			// 
			// ct3
			// 
			this->ct3->AutoSize = true;
			this->ct3->BackColor = System::Drawing::Color::LightCyan;
			this->ct3->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ct3->Location = System::Drawing::Point (400, 70);
			this->ct3->Name = L"ct3";
			this->ct3->Size = System::Drawing::Size (42, 17);
			this->ct3->TabIndex = 12;
			this->ct3->Text = L"CT = ";
			// 
			// trm3
			// 
			this->trm3->AutoSize = true;
			this->trm3->BackColor = System::Drawing::Color::LightCyan;
			this->trm3->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->trm3->Location = System::Drawing::Point (400, 100);
			this->trm3->Name = L"trm3";
			this->trm3->Size = System::Drawing::Size (49, 17);
			this->trm3->TabIndex = 13;
			this->trm3->Text = L"Trm = ";
			// 
			// o31
			// 
			this->o31->AutoSize = true;
			this->o31->BackColor = System::Drawing::Color::LightCyan;
			this->o31->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->o31->Location = System::Drawing::Point (400, 130);
			this->o31->Name = L"o31";
			this->o31->Size = System::Drawing::Size (47, 17);
			this->o31->TabIndex = 14;
			this->o31->Text = L"O31 =";
			// 
			// o32
			// 
			this->o32->AutoSize = true;
			this->o32->BackColor = System::Drawing::Color::LightCyan;
			this->o32->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->o32->Location = System::Drawing::Point (400, 160);
			this->o32->Name = L"o32";
			this->o32->Size = System::Drawing::Size (47, 17);
			this->o32->TabIndex = 15;
			this->o32->Text = L"O32 =";
			// 
			// o33
			// 
			this->o33->AutoSize = true;
			this->o33->BackColor = System::Drawing::Color::LightCyan;
			this->o33->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->o33->Location = System::Drawing::Point (400, 190);
			this->o33->Name = L"o33";
			this->o33->Size = System::Drawing::Size (51, 17);
			this->o33->TabIndex = 16;
			this->o33->Text = L"O33 = ";
			// 
			// og3
			// 
			this->og3->AutoSize = true;
			this->og3->BackColor = System::Drawing::Color::LightCyan;
			this->og3->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->og3->Location = System::Drawing::Point (400, 220);
			this->og3->Name = L"og3";
			this->og3->Size = System::Drawing::Size (83, 17);
			this->og3->TabIndex = 17;
			this->og3->Text = L"Ogeneral = ";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::LightCyan;
			this->label37->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point (40, 323);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size (105, 18);
			this->label37->TabIndex = 18;
			this->label37->Text = L"Subreteaua S2";
			// 
			// ct2
			// 
			this->ct2->AutoSize = true;
			this->ct2->BackColor = System::Drawing::Color::LightCyan;
			this->ct2->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ct2->Location = System::Drawing::Point (40, 353);
			this->ct2->Name = L"ct2";
			this->ct2->Size = System::Drawing::Size (42, 17);
			this->ct2->TabIndex = 19;
			this->ct2->Text = L"CT = ";
			// 
			// trm2
			// 
			this->trm2->AutoSize = true;
			this->trm2->BackColor = System::Drawing::Color::LightCyan;
			this->trm2->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->trm2->Location = System::Drawing::Point (40, 383);
			this->trm2->Name = L"trm2";
			this->trm2->Size = System::Drawing::Size (49, 17);
			this->trm2->TabIndex = 20;
			this->trm2->Text = L"Trm = ";
			// 
			// o21
			// 
			this->o21->AutoSize = true;
			this->o21->BackColor = System::Drawing::Color::LightCyan;
			this->o21->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->o21->Location = System::Drawing::Point (40, 413);
			this->o21->Name = L"o21";
			this->o21->Size = System::Drawing::Size (47, 17);
			this->o21->TabIndex = 21;
			this->o21->Text = L"O21 =";
			// 
			// o22
			// 
			this->o22->AutoSize = true;
			this->o22->BackColor = System::Drawing::Color::LightCyan;
			this->o22->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->o22->Location = System::Drawing::Point (40, 443);
			this->o22->Name = L"o22";
			this->o22->Size = System::Drawing::Size (47, 17);
			this->o22->TabIndex = 22;
			this->o22->Text = L"O22 =";
			// 
			// og2
			// 
			this->og2->AutoSize = true;
			this->og2->BackColor = System::Drawing::Color::LightCyan;
			this->og2->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->og2->Location = System::Drawing::Point (40, 473);
			this->og2->Name = L"og2";
			this->og2->Size = System::Drawing::Size (83, 17);
			this->og2->TabIndex = 24;
			this->og2->Text = L"Ogeneral = ";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::LavenderBlush;
			this->label38->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point (400, 323);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size (169, 18);
			this->label38->TabIndex = 25;
			this->label38->Text = L"Procente cereri respinse";
			// 
			// pcr1
			// 
			this->pcr1->AutoSize = true;
			this->pcr1->BackColor = System::Drawing::Color::LavenderBlush;
			this->pcr1->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pcr1->Location = System::Drawing::Point (400, 353);
			this->pcr1->Name = L"pcr1";
			this->pcr1->Size = System::Drawing::Size (69, 17);
			this->pcr1->TabIndex = 26;
			this->pcr1->Text = L"Pcr1 =  %";
			// 
			// pcr2
			// 
			this->pcr2->AutoSize = true;
			this->pcr2->BackColor = System::Drawing::Color::LavenderBlush;
			this->pcr2->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pcr2->Location = System::Drawing::Point (400, 383);
			this->pcr2->Name = L"pcr2";
			this->pcr2->Size = System::Drawing::Size (69, 17);
			this->pcr2->TabIndex = 27;
			this->pcr2->Text = L"Pcr2 =  %";
			// 
			// pcr3
			// 
			this->pcr3->AutoSize = true;
			this->pcr3->BackColor = System::Drawing::Color::LavenderBlush;
			this->pcr3->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pcr3->Location = System::Drawing::Point (400, 413);
			this->pcr3->Name = L"pcr3";
			this->pcr3->Size = System::Drawing::Size (69, 17);
			this->pcr3->TabIndex = 28;
			this->pcr3->Text = L"Pcr3 =  %";
			// 
			// pcr4
			// 
			this->pcr4->AutoSize = true;
			this->pcr4->BackColor = System::Drawing::Color::LavenderBlush;
			this->pcr4->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pcr4->Location = System::Drawing::Point (400, 443);
			this->pcr4->Name = L"pcr4";
			this->pcr4->Size = System::Drawing::Size (69, 17);
			this->pcr4->TabIndex = 29;
			this->pcr4->Text = L"Pcr4 =  %";
			// 
			// pcrg
			// 
			this->pcrg->AutoSize = true;
			this->pcrg->BackColor = System::Drawing::Color::LavenderBlush;
			this->pcrg->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pcrg->Location = System::Drawing::Point (400, 473);
			this->pcrg->Name = L"pcrg";
			this->pcrg->Size = System::Drawing::Size (69, 17);
			this->pcrg->TabIndex = 30;
			this->pcrg->Text = L"Pcrg =  %";
			// 
			// MyForm
			// 
			this->AccessibleName = L"Retele Petri";
			this->AutoScaleDimensions = System::Drawing::SizeF (6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size (677, 571);
			this->Controls->Add (this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject (L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Simulare";
			this->TransparencyKey = System::Drawing::Color::FromArgb (static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Load += gcnew System::EventHandler (this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout (false);
			this->tabPage1->ResumeLayout (false);
			this->tabPage1->PerformLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit ();
			this->tabPage2->ResumeLayout (false);
			this->tabPage2->PerformLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit ();
			this->ResumeLayout (false);

		}
#pragma endregion
	private: System::Void MyForm_Load (System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void tabPage1_Click (System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void tabPage1_Click_1 (System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void flowLayoutPanel1_Paint (System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void contextMenuStrip1_Opening (System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}
private: System::Void pictureBox1_Click (System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void pictureBox3_Click (System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox21_TextChanged (System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox19_TextChanged (System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void textBox18_TextChanged (System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void pictureBox5_Click (System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void pictureBox7_Click (System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tabPage2_Click (System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void textBox1_TextChanged (System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox2_TextChanged (System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox3_TextChanged (System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox4_TextChanged (System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox7_TextChanged (System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox6_TextChanged (System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox5_TextChanged (System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox8_TextChanged (System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox9_TextChanged (System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox10_TextChanged (System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox13_TextChanged (System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox12_TextChanged (System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox11_TextChanged (System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox15_TextChanged (System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox14_TextChanged (System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox17_TextChanged (System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox16_TextChanged (System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox20_TextChanged (System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox22_TextChanged (System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox23_TextChanged (System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void pictureBox4_Click (System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label36_Click (System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ct1_Click (System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click (System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->Text = "0.00000001";
	this->textBox2->Text = "0.00000001";
	this->textBox3->Text = "0.00000001";
	this->textBox4->Text = "5";
	this->textBox5->Text = "300";
	this->textBox6->Text = "300";
	this->textBox7->Text = "300";
	this->textBox8->Text = "10";
	this->textBox9->Text = "10";
	this->textBox10->Text = "10";
	this->textBox11->Text = "10";
	this->textBox12->Text = "10";
	this->textBox13->Text = "10";
	this->textBox14->Text = "30";
	this->textBox15->Text = "30";
	this->textBox16->Text = "30";
	this->textBox17->Text = "30";
	this->textBox18->Text = "30";
	this->textBox19->Text = "30";
	this->textBox20->Text = "30";
	this->textBox21->Text = "30";
	this->textBox22->Text = "30";
	this->textBox23->Text = "30";
}

Form waitPop;
private: System::Void button1_Click (System::Object^  sender, System::EventArgs^  e)
{
	if (vericareParametri () == false)
	{
		return;
	}
	if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == "" || textBox8->Text == "" || textBox9->Text == "" || textBox10->Text == "" || textBox11->Text == "" || textBox12->Text == "" || textBox13->Text == "" || textBox14->Text == "" || textBox15->Text == "" || textBox16->Text == "" || textBox17->Text == "" || textBox18->Text == "" || textBox19->Text == "" || textBox20->Text == "" || textBox21->Text == "" || textBox22->Text == "" || textBox23->Text == "")
	{
		MessageBox::Show ("Verificati parametrii!", "Eroare!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else
	{
		waitPop.Text = "Se calculeaza...";
		waitPop.BackColor = System::Drawing::Color::Red;
		waitPop.Size = System::Drawing::Size (300, 30);
		waitPop.Show ();
		simulare ();
		waitPop.Hide ();
		MessageBox::Show ("Verificati tabul Rezultate!", "Informare", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}

private: System::Void button2_Click (System::Object^  sender, System::EventArgs^  e) {
	//reset button
	this->textBox1->Text = "";
	this->textBox2->Text = "";
	this->textBox3->Text = "";
	this->textBox4->Text = "";
	this->textBox5->Text = "";
	this->textBox6->Text = "";
	this->textBox7->Text = "";
	this->textBox8->Text = "";
	this->textBox9->Text = "";
	this->textBox10->Text = "";
	this->textBox11->Text = "";
	this->textBox12->Text = "";
	this->textBox13->Text = "";
	this->textBox14->Text = "";
	this->textBox15->Text = "";
	this->textBox16->Text = "";
	this->textBox17->Text = "";
	this->textBox18->Text = "";
	this->textBox19->Text = "";
	this->textBox20->Text = "";
	this->textBox21->Text = "";
	this->textBox22->Text = "";
	this->textBox23->Text = "";

	this->trm1->Text = "Trm = ";
	this->ct1->Text = "CT = ";
	this->o11->Text = "O11 = ";
	this->o12->Text = "O12 = ";
	this->o13->Text = "O13 = ";
	this->og1->Text = "Ogeneral = ";

	this->trm2->Text = "Trm = ";
	this->ct2->Text = "CT = ";
	this->o21->Text = "O21 = ";
	this->o22->Text = "O22 = ";
	this->og2->Text = "Ogeneral = ";

	this->trm3->Text = "Trm = ";
	this->ct3->Text = "CT = ";
	this->o31->Text = "O31 = ";
	this->o32->Text = "O32 = ";
	this->o33->Text = "O33 = ";
	this->og3->Text = "Ogeneral =";


	this->pcr1->Text = "Pcr1 =  %";
	this->pcr2->Text = "Pcr2 =  %";
	this->pcr3->Text = "Pcr3 =  %";
	this->pcr4->Text = "Pcr4 =  %";
	this->pcrg->Text = "Pcrg =  %";
}

Random r;
private: double genDis (double lambda)
{
	double x, u;
	u = (double)r.Next (Int32::MaxValue) / Int32::MaxValue ;
	x = -Math::Log (1 - u) / lambda;
	return x;
}

private: double genGauss (double medie, double sigma)
{
	double s = 0;
	int i;
	for (i = 1; i <= 12; i++)
		s += (double)r.Next (Int32::MaxValue) / Int32::MaxValue;
	return medie + sigma*(s - 6);
}

private: double maxim (double parametru1, double parametru2)
{
	if (parametru1 > parametru2)
	{
		return parametru1;
	}
	else
	{
		return parametru2;
	}
}

private: double maxim (double parametru1, double parametru2, double parametru3)
{
	double max;
	if (parametru1 > parametru2)
	{
		max = parametru1;
	}
	else
	{
		max = parametru2;
	}
	if (max < parametru3)
	{
		max = parametru3;
	}
	return max;
}

private: bool esteLiberaS3 (int M[5][21])
{
	for (int j = 1; j <= 4; j++)
	{
		if (M[j][14] != 0 || M[j][15] != 0 || M[j][16] != 0 || M[j][17] != 0 || M[j][18] != 0 || M[j][19] != 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

private: tranzitie_executabila pozitieMinima (double D[5][25], int nt, int M[5][21], cerere Q1[5][301], cerere Q2[5][301], cerere Q3[5][301])
{
	tranzitie_executabila t;
	bool exit = false;
	bool return_value = false;
	double min;
	int i1, i2, j1, j2;

	int minPoz;//nu am tranzitia 0
	int tip;

	do {
		minPoz = 0;
		tip = 0;
		//return prima tranzitie valida
		for (j1 = 1; j1 <= 4; j1++)
		{
			for (i1 = 1; i1 <= nt; i1++)
			{
				if (D[j1][i1] != -1)
				{
					min = D[j1][i1];
					minPoz = i1;
					tip = j1;
					exit = true;
					break;
				}
			}
			if (exit)
			{
				break;
			}
		}
		//return tranzitia executabila
		for (j2 = 1; j2 <= 4; j2++)
		{
			for (i2 = 1; i2 <= nt; i2++)
			{
				if (D[j2][i2] != -1 && D[j2][i2] < min)
				{
					min = D[j2][i2];
					minPoz = i2;
					tip = j2;
				}
			}
		}

		//cererile de tip 2 parasesc S1
		if (tip == 2 && minPoz == 8)
		{
			D[2][8] = -1;
			minPoz = 9;
			return_value = true;
		}
		//cererile de tip 3 parasesc statia S2
		else if (tip == 3 && minPoz == 15)
		{
			D[3][15] = -1;
			minPoz = 16;
			return_value = true;
		}
		//cererile de tip 4 parasesc statia S3
		else if (tip == 4 && minPoz == 23)
		{
			D[4][23] = -1;
			minPoz = 24;
			return_value = true;
		}
		else
		{
			return_value = true;
		}
	} while (return_value != true);

	//pentru S1
	if (minPoz == 2 || minPoz == 3 || minPoz == 4)
	{
		for (int j = 1; j <= 4; j++)
		{
			if (M[j][1]>0 && Q1[j][1].MS < Q1[tip][1].MS)
			{
				tip = j;
				break;
			}
		}
	}

	//pentru S2
	if (minPoz == 11)
	{
		for (int j = 1; j <= 4; j++)
		{
			if (M[j][6]>0 && Q2[j][1].MS < Q2[tip][1].MS)
			{
				tip = j;
				break;
			}
		}
	}

	//pentru S3
	if (minPoz == 18)
	{
		for (int j = 1; j <= 4; j++)
		{
			if (M[j][13]>0 && Q3[j][1].MS < Q3[tip][1].MS)
			{
				tip = j;
				break;
			}
		}
	}

	t.tip = tip;
	t.tranzitie = minPoz;

	return t;
}

private: bool vericareParametri ()
{
	if ((Regex::IsMatch (textBox1->Text, "(^[0-9]{1,8}$)") || Regex::IsMatch (textBox1->Text, "(^[0-9]{1,8}\.[0-9]{1,8}$)")) &&
				 (Regex::IsMatch (textBox2->Text, "(^[0-9]{1,8}$)") || Regex::IsMatch (textBox2->Text, "(^[0-9]{1,8}\.[0-9]{1,8}$)")) &&
				 (Regex::IsMatch (textBox3->Text, "(^[0-9]{1,8}$)") || Regex::IsMatch (textBox3->Text, "(^[0-9]{1,8}\.[0-9]{1,8}$)")) &&
				 (Regex::IsMatch (textBox4->Text, "(^[0-9]{1,8}$)") || Regex::IsMatch (textBox4->Text, "(^[0-9]{1,8}\.[0-9]{1,8}$)")) &&
				 (Regex::IsMatch (textBox5->Text, "(^[0-9]{1,8}$)") || Regex::IsMatch (textBox5->Text, "(^[0-9]{1,8}\.[0-9]{1,8}$)")) &&
				 (Regex::IsMatch (textBox6->Text, "(^[0-9]{1,8}$)") || Regex::IsMatch (textBox6->Text, "(^[0-9]{1,8}\.[0-9]{1,8}$)")) &&
				 (Regex::IsMatch (textBox7->Text, "(^[0-9]{1,8}$)") || Regex::IsMatch (textBox7->Text, "(^[0-9]{1,8}\.[0-9]{1,8}$)")) &&
				 (Regex::IsMatch (textBox8->Text, "(^[0-9]{1,8}$)") || Regex::IsMatch (textBox8->Text, "(^[0-9]{1,8}\.[0-9]{1,8}$)")) &&
				 (Regex::IsMatch (textBox9->Text, "(^[0-9]{1,8}$)") || Regex::IsMatch (textBox9->Text, "(^[0-9]{1,8}\.[0-9]{1,8}$)")) &&
				 (Regex::IsMatch (textBox10->Text, "(^[0-9]{1,8}$)") || Regex::IsMatch (textBox10->Text, "(^[0-9]{1,8}\.[0-9]{1,8}$)")) &&
				 (Regex::IsMatch (textBox11->Text, "(^[0-9]{1,8}$)") || Regex::IsMatch (textBox11->Text, "(^[0-9]{1,8}\.[0-9]{1,8}$)")) &&
				 (Regex::IsMatch (textBox12->Text, "(^[0-9]{1,8}$)") || Regex::IsMatch (textBox12->Text, "(^[0-9]{1,8}\.[0-9]{1,8}$)")) &&
				 (Regex::IsMatch (textBox13->Text, "(^[0-9]{1,8}$)") || Regex::IsMatch (textBox13->Text, "(^[0-9]{1,8}\.[0-9]{1,8}$)")) &&
				 (Regex::IsMatch (textBox14->Text, "(^[0-9]{1,8}$)") || Regex::IsMatch (textBox14->Text, "(^[0-9]{1,8}\.[0-9]{1,8}$)")) &&
				 (Regex::IsMatch (textBox15->Text, "(^[0-9]{1,8}$)") || Regex::IsMatch (textBox15->Text, "(^[0-9]{1,8}\.[0-9]{1,8}$)")) &&
				 (Regex::IsMatch (textBox16->Text, "(^[0-9]{1,8}$)") || Regex::IsMatch (textBox16->Text, "(^[0-9]{1,8}\.[0-9]{1,8}$)")) &&
				 (Regex::IsMatch (textBox17->Text, "(^[0-9]{1,8}$)") || Regex::IsMatch (textBox17->Text, "(^[0-9]{1,8}\.[0-9]{1,8}$)")) &&
				 (Regex::IsMatch (textBox18->Text, "(^[0-9]{1,8}$)") || Regex::IsMatch (textBox18->Text, "(^[0-9]{1,8}\.[0-9]{1,8}$)")) &&
				 (Regex::IsMatch (textBox19->Text, "(^[0-9]{1,8}$)") || Regex::IsMatch (textBox19->Text, "(^[0-9]{1,8}\.[0-9]{1,8}$)")) &&
				 (Regex::IsMatch (textBox20->Text, "(^[0-9]{1,8}$)") || Regex::IsMatch (textBox20->Text, "(^[0-9]{1,8}\.[0-9]{1,8}$)")) &&
				 (Regex::IsMatch (textBox21->Text, "(^[0-9]{1,8}$)") || Regex::IsMatch (textBox21->Text, "(^[0-9]{1,8}\.[0-9]{1,8}$)")) &&
				 (Regex::IsMatch (textBox22->Text, "(^[0-9]{1,8}$)") || Regex::IsMatch (textBox22->Text, "(^[0-9]{1,8}\.[0-9]{1,8}$)")) &&
				 (Regex::IsMatch (textBox23->Text, "(^[0-9]{1,8}$)") || Regex::IsMatch (textBox23->Text, "(^[0-9]{1,8}\.[0-9]{1,8}$)")))
	{
		 return true;
	}
	else
	{
		MessageBox::Show ("Verificati parametrii!", "Eroare!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
}

private: void simulare ()
{
	double lambda1[5] = { 0, Double::Parse (textBox1->Text), Double::Parse (textBox2->Text), 0, 0 };
	double lambda2[5] = { 0, 0, Double::Parse (textBox2->Text), Double::Parse (textBox3->Text) , 0 };
	double lambda3[5] = { 0, 0, 0, Double::Parse (textBox3->Text) , Double::Parse (textBox4->Text) };

	double miu11[5] = { 0, Double::Parse (textBox8->Text) , Double::Parse (textBox13->Text), 0, 0 };
	double miu12[5] = { 0, Double::Parse (textBox9->Text), Double::Parse (textBox12->Text), 0, 0 };
	double miu13[5] = { 0, Double::Parse (textBox10->Text), Double::Parse (textBox11->Text), 0, 0 };

	double miu21[5] = { 0, 0, Double::Parse (textBox15->Text), Double::Parse (textBox17->Text), 0 };
	double miu22[5] = { 0, 0, Double::Parse (textBox14->Text), Double::Parse (textBox16->Text), 0 };

	double miu31[5] = { 0, 0, 0, Double::Parse (textBox18->Text), Double::Parse (textBox21->Text) };
	double miu32[5] = { 0, 0, 0, Double::Parse (textBox19->Text), Double::Parse (textBox22->Text) };
	double miu33[5] = { 0, 0, 0, Double::Parse (textBox20->Text), Double::Parse (textBox23->Text) };

	int C1 = Int32::Parse (textBox7->Text);
	int C2 = Int32::Parse (textBox6->Text);
	int C3 = Int32::Parse (textBox5->Text);
	double DS = 100000;

	int np = 20;
	int nt = 24;
	int tipuri = 4;

	int M[5][21] = {
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
	};

	double D[5][25] = {
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, genDis (lambda1[1]), -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 },
		{ 0, genDis (lambda1[2]), -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 },
		{ 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, genDis (lambda2[3]), -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 },
		{ 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, genDis (lambda3[4]), -1, -1, -1, -1, -1, -1 }

	};

	int I[21][25] = {
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, -C1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },//1
		{ 0, 0, -1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },//2
		{ 0, 0, 0, -1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },//3
		{ 0, 0, 0, 0, -1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },//4
		{ 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },//5
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -C2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },//6
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },//7
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },//8
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },//9
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },//10
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },//11
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },//12
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -C3, 1, 0, 0, 0, 0, 0, 0 },//13
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0 },//14
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0 },//15
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1, 0, 0, 0 },//16
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },//17
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },//18
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },//19
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1 },//20
	};

	int O[25][21] = {
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },//1
		{ 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },//2
		{ 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },//3
		{ 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },//4
		{ 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },//5
		{ 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },//6
		{ 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },//7
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },//8
		{ 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },//9
		{ 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },//10
		{ 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },//11
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },//12
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },//13
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },//14
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },//15
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0 },//16
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }
	};

	int CT1 = 0;
	int CT2 = 0;
	int CT2S1 = 0;
	int CT3 = 0;
	int CT3S2 = 0;
	int CT4 = 0;

	int CR1 = 0;
	int CR2 = 0;
	int CR3 = 0;
	int CR4 = 0;


	double ceas = 0;
	double pas = 0;
	int p, t, v, tip;

	tranzitie_executabila te;
	te.tip = 0;
	te.tranzitie = 0;

	cerere Q1[5][301];
	for (int i = 1; i <= 4; i++)
	{
		for (int j = 1; j <= 300; j++)
		{
			Q1[i][j].MS = -1;
			Q1[i][j].tip = 0;
		}
	}

	cerere Q2[5][301];
	for (int i = 1; i <= 4; i++)
	{
		for (int j = 1; j <= 300; j++)
		{
			Q2[i][j].MS = -1;
			Q2[i][j].tip = 0;
		}
	}

	cerere Q3[5][301];
	for (int i = 1; i <= 4; i++)
	{
		for (int j = 1; j <= 300; j++)
		{
			Q3[i][j].MS = -1;
			Q3[i][j].tip = 0;
		}
	}

	double STS1[4];
	for (int i = 0; i <= 3; i++)
	{
		STS1[i] = 0;
	}

	double STS2[3];
	for (int i = 0; i <= 2; i++)
	{
		STS2[i] = 0;
	}

	double STS3[4];
	for (int i = 0; i <= 3; i++)
	{
		STS3[i] = 0;
	}

	double STpS1[4];
	for (int i = 0; i <= 3; i++)
	{
		STpS1[i] = 0;
	}

	double STpS2[3];
	for (int i = 0; i <= 2; i++)
	{
		STpS2[i] = 0;
	}

	double STpS3[4];
	for (int i = 0; i <= 3; i++)
	{
		STpS3[i] = 0;
	}
	double Pcrg, Pcr1, Pcr2, Pcr3, Pcr4;
	double STS1general = 0;
	double STS2general = 0;
	double STS3general = 0;
	do {
		te = pozitieMinima (D, nt, M, Q1, Q2, Q3);
		pas = D[te.tip][te.tranzitie];
		ceas += pas;
		for (p = 1; p <= np; p++)
		{
			if (I[p][te.tranzitie] > 0)
			{
				M[te.tip][p] -= I[p][te.tranzitie];
			}
			M[te.tip][p] += O[te.tranzitie][p];
		}
		if (te.tranzitie == 11)
		{
			if (te.tip == 2)
			{
				M[3][12] = 0;
			}
			else
			{
				M[2][12] = 0;
			}
		}
		if (te.tranzitie == 14)
		{
			if (te.tip == 2)
			{
				M[3][12] = 1;
			}
			else
			{
				M[2][12] = 1;
			}
		}

		for (t = 1; t <= nt; t++)
		{
			for (tip = 1; tip <= tipuri; tip++)
			{
				v = 1;
				for (p = 1; p <= np; p++)
				{
					if ((I[p][t] < 0 && (M[1][p] + M[2][p] >= -I[p][t] || M[2][p] + M[3][p] >= -I[p][t] || M[3][p] + M[4][p] >= -I[p][t]))
						|| (I[p][t] > 0 && M[tip][p] < I[p][t]))
					{
						v = 0;
						break;
					}
				}
				if (!v)
				{
					if ((t == 1 && D[tip][t] != -1) || (t == 10 && D[tip][t] != -1) || (t == 17 && D[tip][t] != -1))
					{
						if (tip == 1)
						{
							CR1++;
						}
						else if (tip == 2)
						{
							CR2++;
						}
						else if (tip == 3)
						{
							CR3++;
						}
						else if (tip == 4)
						{
							CR4++;
						}
					}
					D[tip][t] = -1;
				}
				else if (D[tip][t] == -1 || (t == te.tranzitie && tip == te.tip))
				{
					switch (t)
					{
					case 1:
						if (tip == 3 || tip == 4)
						{
							D[tip][t] = -1;
						}
						else
						{
							D[tip][t] = genDis (lambda1[tip]);
						}
						break;
					case 2:
						D[tip][t] = 0;
						break;
					case 3:
						D[tip][t] = 0;
						break;
					case 4:
						D[tip][t] = 0;
						break;
					case 5:
						//D[tip][t] = genGauss (1/miu11[tip], 0.009);
						D[tip][t] = genDis (miu11[tip]);
						break;
					case 6:
						//D[tip][t] = genGauss (1 / miu12[tip], 0.009);
						D[tip][t] = genDis (miu12[tip]);
						break;
					case 7:
						//D[tip][t] = genGauss (1 / miu13[tip], 0.009);
						D[tip][t] = genDis (miu13[tip]);
						break;
					case 8:
						D[tip][t] = 0;
						break;
					case 9:
						D[tip][t] = 0;
						break;
					case 10:
						if (tip == 3)
						{
							D[tip][t] = genDis (lambda2[tip]);
						}
						else
						{
							D[tip][t] = -1;
						}
						break;
					case 11:
						D[tip][t] = 0;
						break;
					case 12:
						D[tip][t] = genDis (miu21[tip]);
						//D[tip][t] = genGauss (1/miu21[tip], 0.0009);
						break;
					case 13:
						D[tip][t] = genDis (miu22[tip]);
						//D[tip][t] = genGauss (1 / miu22[tip], 0.0009);
						break;
					case 14:
						D[tip][t] = 0;
						break;
					case 15:
						D[tip][t] = 0;
						break;
					case 16:
						D[tip][t] = 0;
						break;
					case 17:
						if (tip == 4)
						{
							D[tip][t] = genDis (lambda3[tip]);
						}
						else
						{
							D[tip][t] = -1;
						}
						break;
					case 18:
						if (esteLiberaS3 (M) == false)
						{
							D[tip][t] = -1;
						}
						else
						{
							D[tip][t] = 0;
						}
						break;
					case 19:
						D[tip][t] = genDis (miu31[tip]);
						//D[tip][t] = genGauss (1 / miu31[tip], 0.009);
						break;
					case 20:
						D[tip][t] = genDis (miu32[tip]);
						//D[tip][t] = genGauss (1 / miu32[tip], 0.009);
						break;
					case 21:
						D[tip][t] = genDis (miu33[tip]);
						//D[tip][t] = genGauss (1 / miu33[tip], 0.009);
						break;
					case 22:
						D[tip][t] = 0;
						break;
					case 23:
						D[tip][t] = 0;
						break;
					case 24:
						D[tip][t] = 0;
						break;
					}
				}
				else
				{
					D[tip][t] -= pas;
				}
			}
		}

		switch (te.tranzitie)
		{
		case 1:
			Q1[te.tip][M[te.tip][1]].MS = ceas;
			Q1[te.tip][M[te.tip][1]].tip = te.tip;
			break;
		case 2:
			STS1general += ceas - Q1[te.tip][1].MS + D[te.tip][te.tranzitie + 3];
			STS1[1] += ceas - Q1[te.tip][1].MS + D[te.tip][te.tranzitie + 3];
			STpS1[1] += D[te.tip][te.tranzitie + 3];

			for (int i = 1; i <= M[te.tip][1]; i++)
			{
				Q1[te.tip][i] = Q1[te.tip][i + 1];
			}
			break;
		case 3:
			STS1general += ceas - Q1[te.tip][1].MS + D[te.tip][te.tranzitie + 3];
			STS1[2] += ceas - Q1[te.tip][1].MS + D[te.tip][te.tranzitie + 3];
			STpS1[2] += D[te.tip][te.tranzitie + 3];
			for (int i = 1; i <= M[te.tip][1]; i++)
			{
				Q1[te.tip][i] = Q1[te.tip][i + 1];
			}
			break;
		case 4:
			STS1general += ceas - Q1[te.tip][1].MS + D[te.tip][te.tranzitie + 3];
			STS1[3] += ceas - Q1[te.tip][1].MS + D[te.tip][te.tranzitie + 3];
			STpS1[3] += D[te.tip][te.tranzitie + 3];

			for (int i = 1; i <= M[te.tip][1]; i++)
			{
				Q1[te.tip][i] = Q1[te.tip][i + 1];
			}
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			CT1++;
			break;
		case 9:
			CT2S1++;
			Q2[2][M[te.tip][6]].MS = ceas;
			Q2[2][M[te.tip][6]].tip = te.tip;
			break;
		case 10:
			Q2[te.tip][M[te.tip][6]].MS = ceas;
			Q2[te.tip][M[te.tip][6]].tip = te.tip;
			break;
		case 11:
			STS2general += ceas - Q2[te.tip][1].MS + maxim (D[te.tip][te.tranzitie + 1], D[te.tip][te.tranzitie + 2]);
			STpS2[1] += D[te.tip][te.tranzitie + 1];
			STpS2[2] += D[te.tip][te.tranzitie + 2];
			for (int i = 1; i <= M[te.tip][6]; i++)
			{
				Q2[te.tip][i] = Q2[te.tip][i + 1];
			}
			break;
		case 12:
			break;
		case 13:
			break;
		case 14:
			break;
		case 15:
			CT2++;
			break;
		case 16:
			CT3S2++;
			Q3[te.tip][M[te.tip][13]].MS = ceas;
			Q3[te.tip][M[te.tip][13]].tip = te.tip;
			break;
		case 17:
			Q3[te.tip][M[te.tip][13]].MS = ceas;
			Q3[te.tip][M[te.tip][13]].tip = te.tip;
			break;
		case 18:
			STS3general += ceas - Q3[te.tip][1].MS + maxim (D[te.tip][te.tranzitie + 1], D[te.tip][te.tranzitie + 2], D[te.tip][te.tranzitie + 3]);
			STS3[1] += ceas - Q3[te.tip][1].MS + D[te.tip][te.tranzitie + 1];
			STS3[2] += ceas - Q3[te.tip][1].MS + D[te.tip][te.tranzitie + 2];
			STS3[3] += ceas - Q3[te.tip][1].MS + D[te.tip][te.tranzitie + 3];
			STpS3[1] += D[te.tip][te.tranzitie + 1];
			STpS3[2] += D[te.tip][te.tranzitie + 2];
			STpS3[3] += D[te.tip][te.tranzitie + 3];
			for (int i = 1; i <= M[te.tip][13]; i++)
			{
				Q3[te.tip][i] = Q3[te.tip][i + 1];
			}
			break;
		case 19:
			break;
		case 20:
			break;
		case 21:
			break;
		case 22:
			break;
		case 23:
			CT3++;
			break;
		case 24:
			CT4++;
			break;
		}

	} while (ceas < DS);

	if (CR1 == 0 && CR2 == 0 && CR3 == 0 && CR4 == 0)
	{
		Pcrg = 0;
	}
	else
	{
		Pcrg = ((double)(CR1 + CR2 + CR3 + CR4) / (double)(M[1][1] + M[2][1] + M[3][6] + M[4][13] + CR1 + CR2 + CR3 + CR4 + CT1 + CT2 + CT3 + CT4)) * 100;
	}
	if (CR1 == 0)
	{
		Pcr1 = 0;
	}
	else
	{
		Pcr1 = ((double)CR1 / (double)(M[1][1] + CR1 + CT1)) * 100;
	}
	if (CR2 == 0)
	{
		Pcr2 = 0;
	}
	else
	{
		Pcr2 = ((double)CR2 / (double)(M[2][1] + M[3][6] + CR2 + CT2)) * 100;
	}
	if (CR3 == 0)
	{
		Pcr3 = 0;
	}
	else
	{
		Pcr3 = ((double)CR3 / (double)(M[3][6] + M[4][13] + CR3 + CT3)) * 100;
	}
	if (CR4 == 0)
	{
		Pcr4 = 0;
	}
	else
	{
		Pcr4 = ((double)CR4 / (double)(M[4][13] + CR4 + CT4)) * 100;
	}

	this->trm1->Text = "Trm = " + Convert::ToString (Math::Round (STS1general / (double)(CT1 + CT2S1), 5));
	this->ct1->Text = "CT = " + Convert::ToString (CT1 + CT2S1);
	this->o11->Text = "O11 = " + Convert::ToString (Math::Round ((STpS1[1] / DS) * 100, 5));
	this->o12->Text = "O12 = " + Convert::ToString (Math::Round ((STpS1[2] / DS) * 100, 5));
	this->o13->Text = "O13 = " + Convert::ToString (Math::Round ((STpS1[3] / DS) * 100, 5));
	this->og1->Text = "Ogeneral = " + Convert::ToString (Math::Round ((((STpS1[1] / DS) * 100) + ((STpS1[2] / DS) * 100) + ((STpS1[3] / DS) * 100)) / (double)3, 5));

	this->trm2->Text = "Trm = " + Convert::ToString (Math::Round (STS2general / (double)(CT2 + CT3S2), 5));
	this->ct2->Text = "CT = " + Convert::ToString (CT2 + CT3S2);
	this->o21->Text = "O21 = " + Convert::ToString (Math::Round ((STpS2[1] / DS) * 100, 5));
	this->o22->Text = "O22 = " + Convert::ToString (Math::Round ((STpS2[2] / DS) * 100, 5));
	this->og2->Text = "Ogeneral = " + Convert::ToString (Math::Round ((((STpS2[1] / DS) * 100) + ((STpS2[2] / DS) * 100)) / (double)2, 5));

	this->trm3->Text = "Trm = " + Convert::ToString (Math::Round (STS3general / (CT3 + CT4), 5));
	this->ct3->Text = "CT = " + Convert::ToString (CT3 + CT4);
	this->o31->Text = "O31 = " + Convert::ToString (Math::Round ((STpS3[1] / DS) * 100, 5));
	this->o32->Text = "O32 = " + Convert::ToString (Math::Round ((STpS3[2] / DS) * 100, 5));
	this->o33->Text = "O33 = " + Convert::ToString (Math::Round ((STpS3[3] / DS) * 100, 5));
	this->og3->Text = "Ogeneral = " + Convert::ToString (Math::Round ((((STpS3[1] / DS) * 100) + ((STpS3[2] / DS) * 100) + ((STpS3[3] / DS) * 100)) / (double)3, 5));


	this->pcr1->Text = "Pcr1 = " + Convert::ToString (Math::Round (Pcr1, 5)) + " %";
	this->pcr2->Text = "Pcr2 = " + Convert::ToString (Math::Round (Pcr2, 5)) + " %";
	this->pcr3->Text = "Pcr3 = " + Convert::ToString (Math::Round (Pcr3, 5)) + " %";
	this->pcr4->Text = "Pcr4 = " + Convert::ToString (Math::Round (Pcr4, 5)) + " %";
	this->pcrg->Text = "Pcrg = " + Convert::ToString (Math::Round (Pcrg, 5)) + " %";
}

};
  
}
