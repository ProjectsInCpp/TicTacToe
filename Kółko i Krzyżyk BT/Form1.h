// napisac bczymozna - poprawic
#include <ctime>
#include <math.h>
#include <stdlib.h>
#pragma once

namespace Kó³koiKrzy¿ykBT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	bool btrybgry=0; // tryb gry 1= pvp ; tryb gry 0=pve
	bool bsgn=1; // sgn 1=krzyzyk; sgn 0=kolko
	void vczyszczenie();
	void vzwyciestwo();
	void vremis();
	void vzmianagracza();
	void vnowagra();
	bool bczymozna=0;
	int izmianagracza=0;
	int iwynik1=0;
	int iwynik2=0;
	int ipvepole;
	bool bremis=0;


	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	protected: 

	private: System::Windows::Forms::ToolStripMenuItem^  PvCom;
	private: System::Windows::Forms::ToolStripMenuItem^  PvP;
	private: System::Windows::Forms::ToolStripMenuItem^  NowaGra;

	private: System::Windows::Forms::Button^  drugi;
	private: System::Windows::Forms::Button^  trzeci;
	private: System::Windows::Forms::Button^  czwarty;
	private: System::Windows::Forms::Button^  piaty;
	private: System::Windows::Forms::Button^  szosty;
	private: System::Windows::Forms::Button^  siodmy;
	private: System::Windows::Forms::Button^  osmy;
	private: System::Windows::Forms::Button^  dziewiaty;













	private: System::Windows::Forms::Button^  pierwszy;
	private: System::Windows::Forms::TextBox^  nazwagracz1;
	private: System::Windows::Forms::TextBox^  nazwagracz2;
	private: System::Windows::Forms::Label^  gracz2;
	private: System::Windows::Forms::Label^  gracz1;
	private: System::Windows::Forms::Button^  zapisznazwe;
	private: System::Windows::Forms::PictureBox^  animacja;
	private: System::Windows::Forms::Button^  wynik;
	private: System::Windows::Forms::PictureBox^  pictureBox1;






	private: System::Windows::Forms::ToolStripMenuItem^  playerVsPlaterToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  playerVsComputerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  Menu1;
	private: System::Windows::Forms::ToolStripMenuItem^  Gra1;
	private: System::Windows::Forms::ToolStripMenuItem^  Gra2;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  Gra3;
	private: System::Windows::Forms::ToolStripMenuItem^  Menu2;
	private: System::Windows::Forms::ToolStripMenuItem^  Tryb1;
	private: System::Windows::Forms::ToolStripMenuItem^  Tryb2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;

















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->NowaGra = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->drugi = (gcnew System::Windows::Forms::Button());
			this->trzeci = (gcnew System::Windows::Forms::Button());
			this->czwarty = (gcnew System::Windows::Forms::Button());
			this->piaty = (gcnew System::Windows::Forms::Button());
			this->szosty = (gcnew System::Windows::Forms::Button());
			this->siodmy = (gcnew System::Windows::Forms::Button());
			this->osmy = (gcnew System::Windows::Forms::Button());
			this->dziewiaty = (gcnew System::Windows::Forms::Button());
			this->pierwszy = (gcnew System::Windows::Forms::Button());
			this->nazwagracz1 = (gcnew System::Windows::Forms::TextBox());
			this->nazwagracz2 = (gcnew System::Windows::Forms::TextBox());
			this->gracz2 = (gcnew System::Windows::Forms::Label());
			this->gracz1 = (gcnew System::Windows::Forms::Label());
			this->zapisznazwe = (gcnew System::Windows::Forms::Button());
			this->animacja = (gcnew System::Windows::Forms::PictureBox());
			this->wynik = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Menu1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Gra1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Gra2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->Gra3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Menu2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Tryb1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Tryb2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->animacja))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// NowaGra
			// 
			this->NowaGra->Name = L"NowaGra";
			this->NowaGra->Size = System::Drawing::Size(71, 20);
			this->NowaGra->Text = L"Nowa Gra";
			// 
			// drugi
			// 
			this->drugi->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->drugi->Enabled = false;
			this->drugi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->drugi->Location = System::Drawing::Point(156, 47);
			this->drugi->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->drugi->Name = L"drugi";
			this->drugi->Size = System::Drawing::Size(67, 62);
			this->drugi->TabIndex = 0;
			this->drugi->UseVisualStyleBackColor = true;
			this->drugi->Click += gcnew System::EventHandler(this, &Form1::drugi_Click);
			// 
			// trzeci
			// 
			this->trzeci->Enabled = false;
			this->trzeci->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->trzeci->Location = System::Drawing::Point(229, 47);
			this->trzeci->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->trzeci->Name = L"trzeci";
			this->trzeci->Size = System::Drawing::Size(67, 62);
			this->trzeci->TabIndex = 0;
			this->trzeci->UseVisualStyleBackColor = true;
			this->trzeci->Click += gcnew System::EventHandler(this, &Form1::trzeci_Click);
			// 
			// czwarty
			// 
			this->czwarty->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->czwarty->Enabled = false;
			this->czwarty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->czwarty->Location = System::Drawing::Point(80, 116);
			this->czwarty->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->czwarty->Name = L"czwarty";
			this->czwarty->Size = System::Drawing::Size(67, 62);
			this->czwarty->TabIndex = 0;
			this->czwarty->UseVisualStyleBackColor = true;
			this->czwarty->Click += gcnew System::EventHandler(this, &Form1::czwarty_Click);
			// 
			// piaty
			// 
			this->piaty->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->piaty->Enabled = false;
			this->piaty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->piaty->Location = System::Drawing::Point(155, 116);
			this->piaty->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->piaty->Name = L"piaty";
			this->piaty->Size = System::Drawing::Size(67, 62);
			this->piaty->TabIndex = 0;
			this->piaty->UseVisualStyleBackColor = true;
			this->piaty->Click += gcnew System::EventHandler(this, &Form1::piaty_Click);
			// 
			// szosty
			// 
			this->szosty->Enabled = false;
			this->szosty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->szosty->Location = System::Drawing::Point(229, 116);
			this->szosty->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->szosty->Name = L"szosty";
			this->szosty->Size = System::Drawing::Size(67, 62);
			this->szosty->TabIndex = 0;
			this->szosty->UseVisualStyleBackColor = true;
			this->szosty->Click += gcnew System::EventHandler(this, &Form1::szosty_Click);
			// 
			// siodmy
			// 
			this->siodmy->Enabled = false;
			this->siodmy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->siodmy->Location = System::Drawing::Point(80, 185);
			this->siodmy->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->siodmy->Name = L"siodmy";
			this->siodmy->Size = System::Drawing::Size(67, 62);
			this->siodmy->TabIndex = 0;
			this->siodmy->UseVisualStyleBackColor = true;
			this->siodmy->Click += gcnew System::EventHandler(this, &Form1::siodmy_Click);
			// 
			// osmy
			// 
			this->osmy->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->osmy->Enabled = false;
			this->osmy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->osmy->Location = System::Drawing::Point(155, 185);
			this->osmy->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->osmy->Name = L"osmy";
			this->osmy->Size = System::Drawing::Size(67, 62);
			this->osmy->TabIndex = 0;
			this->osmy->UseVisualStyleBackColor = true;
			this->osmy->Click += gcnew System::EventHandler(this, &Form1::osmy_Click);
			// 
			// dziewiaty
			// 
			this->dziewiaty->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->dziewiaty->Enabled = false;
			this->dziewiaty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->dziewiaty->Location = System::Drawing::Point(229, 185);
			this->dziewiaty->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dziewiaty->Name = L"dziewiaty";
			this->dziewiaty->Size = System::Drawing::Size(67, 62);
			this->dziewiaty->TabIndex = 0;
			this->dziewiaty->UseVisualStyleBackColor = true;
			this->dziewiaty->Click += gcnew System::EventHandler(this, &Form1::dziewiaty_Click);
			// 
			// pierwszy
			// 
			this->pierwszy->Enabled = false;
			this->pierwszy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->pierwszy->Location = System::Drawing::Point(80, 47);
			this->pierwszy->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pierwszy->Name = L"pierwszy";
			this->pierwszy->Size = System::Drawing::Size(67, 62);
			this->pierwszy->TabIndex = 0;
			this->pierwszy->UseVisualStyleBackColor = true;
			this->pierwszy->Click += gcnew System::EventHandler(this, &Form1::pierwszy_Click);
			// 
			// nazwagracz1
			// 
			this->nazwagracz1->Location = System::Drawing::Point(317, 101);
			this->nazwagracz1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->nazwagracz1->Name = L"nazwagracz1";
			this->nazwagracz1->Size = System::Drawing::Size(112, 22);
			this->nazwagracz1->TabIndex = 12;
			this->nazwagracz1->Visible = false;
			// 
			// nazwagracz2
			// 
			this->nazwagracz2->Location = System::Drawing::Point(317, 169);
			this->nazwagracz2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->nazwagracz2->Name = L"nazwagracz2";
			this->nazwagracz2->Size = System::Drawing::Size(112, 22);
			this->nazwagracz2->TabIndex = 13;
			this->nazwagracz2->Visible = false;
			// 
			// gracz2
			// 
			this->gracz2->AutoSize = true;
			this->gracz2->Location = System::Drawing::Point(305, 132);
			this->gracz2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->gracz2->Name = L"gracz2";
			this->gracz2->Size = System::Drawing::Size(139, 34);
			this->gracz2->TabIndex = 14;
			this->gracz2->Text = L"Podaj nazwê gracza \r\nstawiaj¹cego kó³ko";
			this->gracz2->Visible = false;
			// 
			// gracz1
			// 
			this->gracz1->AutoSize = true;
			this->gracz1->Location = System::Drawing::Point(304, 63);
			this->gracz1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->gracz1->Name = L"gracz1";
			this->gracz1->Size = System::Drawing::Size(140, 34);
			this->gracz1->TabIndex = 15;
			this->gracz1->Text = L"Podaj nazwê gracza \r\nstawiaj¹cego krzy¿yk";
			this->gracz1->Visible = false;
			// 
			// zapisznazwe
			// 
			this->zapisznazwe->Location = System::Drawing::Point(332, 201);
			this->zapisznazwe->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zapisznazwe->Name = L"zapisznazwe";
			this->zapisznazwe->Size = System::Drawing::Size(79, 26);
			this->zapisznazwe->TabIndex = 16;
			this->zapisznazwe->Text = L"OK";
			this->zapisznazwe->UseVisualStyleBackColor = true;
			this->zapisznazwe->Visible = false;
			this->zapisznazwe->Click += gcnew System::EventHandler(this, &Form1::zapisznazwe_Click);
			// 
			// animacja
			// 
			this->animacja->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"animacja.Image")));
			this->animacja->Location = System::Drawing::Point(447, 47);
			this->animacja->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->animacja->Name = L"animacja";
			this->animacja->Size = System::Drawing::Size(60, 197);
			this->animacja->TabIndex = 17;
			this->animacja->TabStop = false;
			// 
			// wynik
			// 
			this->wynik->Enabled = false;
			this->wynik->Location = System::Drawing::Point(121, 254);
			this->wynik->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->wynik->Name = L"wynik";
			this->wynik->Size = System::Drawing::Size(140, 38);
			this->wynik->TabIndex = 18;
			this->wynik->Text = L"Wyœwietl Wynik";
			this->wynik->UseVisualStyleBackColor = true;
			this->wynik->Click += gcnew System::EventHandler(this, &Form1::wynik_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(9, 47);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(60, 197);
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// Menu1
			// 
			this->Menu1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->Gra1, this->Gra2, 
				this->toolStripSeparator1, this->Gra3});
			this->Menu1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->Menu1->Name = L"Menu1";
			this->Menu1->Size = System::Drawing::Size(44, 24);
			this->Menu1->Text = L"Gra";
			// 
			// Gra1
			// 
			this->Gra1->Name = L"Gra1";
			this->Gra1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->Gra1->Size = System::Drawing::Size(237, 24);
			this->Gra1->Text = L"Nowa Gra";
			this->Gra1->Click += gcnew System::EventHandler(this, &Form1::Gra1_Click);
			// 
			// Gra2
			// 
			this->Gra2->Name = L"Gra2";
			this->Gra2->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->Gra2->Size = System::Drawing::Size(237, 24);
			this->Gra2->Text = L"Wyczyœæ Planszê";
			this->Gra2->Click += gcnew System::EventHandler(this, &Form1::Gra2_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(234, 6);
			// 
			// Gra3
			// 
			this->Gra3->Name = L"Gra3";
			this->Gra3->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->Gra3->Size = System::Drawing::Size(237, 24);
			this->Gra3->Text = L"Wyjœcie";
			this->Gra3->Click += gcnew System::EventHandler(this, &Form1::Gra3_Click);
			// 
			// Menu2
			// 
			this->Menu2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->Tryb1, this->Tryb2});
			this->Menu2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->Menu2->Name = L"Menu2";
			this->Menu2->Size = System::Drawing::Size(76, 24);
			this->Menu2->Text = L"Tryb Gry";
			// 
			// Tryb1
			// 
			this->Tryb1->Name = L"Tryb1";
			this->Tryb1->Size = System::Drawing::Size(242, 24);
			this->Tryb1->Text = L"Player vs Player - PvP";
			this->Tryb1->Click += gcnew System::EventHandler(this, &Form1::Tryb1_Click);
			// 
			// Tryb2
			// 
			this->Tryb2->Name = L"Tryb2";
			this->Tryb2->Size = System::Drawing::Size(242, 24);
			this->Tryb2->Text = L"Player vs Computer - PvE";
			this->Tryb2->Click += gcnew System::EventHandler(this, &Form1::Tryb2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->Menu1, this->Menu2});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(512, 28);
			this->menuStrip1->TabIndex = 10;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(512, 298);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->wynik);
			this->Controls->Add(this->animacja);
			this->Controls->Add(this->zapisznazwe);
			this->Controls->Add(this->gracz1);
			this->Controls->Add(this->gracz2);
			this->Controls->Add(this->nazwagracz2);
			this->Controls->Add(this->nazwagracz1);
			this->Controls->Add(this->pierwszy);
			this->Controls->Add(this->dziewiaty);
			this->Controls->Add(this->osmy);
			this->Controls->Add(this->siodmy);
			this->Controls->Add(this->szosty);
			this->Controls->Add(this->piaty);
			this->Controls->Add(this->czwarty);
			this->Controls->Add(this->trzeci);
			this->Controls->Add(this->drugi);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Kó³ko_Krzy¿yk_B.T.";
			this->TopMost = true;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->animacja))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		// przyciski menu ////////////////////////////////////////////////////////////////////////////////////////

private: System::Void Gra1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		vnowagra();
		 }
private: System::Void Gra2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 vczyszczenie();
		 }
private: System::Void Gra3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Close();
		 }
private: System::Void Tryb1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 btrybgry=1;
			 vczyszczenie();
			 vnowagra();
		 }
private: System::Void Tryb2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 btrybgry=0;
			 vczyszczenie();
			 vnowagra();
			 vzmianagracza();
		 }
		// przyciski programu////////////////////////////////////////////////////////////////////////////////
private: System::Void wynik_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 MessageBox::Show(nazwagracz1->Text+": "+iwynik1.ToString()+System::Environment::NewLine+nazwagracz2->Text+": "+iwynik2.ToString(),"Wynik Gry",MessageBoxButtons::OK,MessageBoxIcon::Information);
		 }
private: System::Void zapisznazwe_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 pierwszy->Enabled=true;
			 drugi->Enabled=true;
			 trzeci->Enabled=true;
			 czwarty->Enabled=true;
			 piaty->Enabled=true;
			 szosty->Enabled=true;
			 siodmy->Enabled=true;
			 osmy->Enabled=true;
			 dziewiaty->Enabled=true;
			 MessageBox::Show("Teraz rozpoczyna "+nazwagracz1->Text,"Kto rozpoczyna",MessageBoxButtons::OK,MessageBoxIcon::Information);
			 nazwagracz1->Visible=0;
			 nazwagracz2->Visible=0;
			 gracz1->Visible=0;
			 gracz2->Visible=0;
			 zapisznazwe->Visible=0;
			 this->Size=Drawing::Size(295, 280);
			 wynik->Enabled=true;
			 animacja->Location = System::Drawing::Point(230, 38);
			
		 }
// przyciski od jeden do dziewiec /////////////////////////////////////////////////
private: System::Void pierwszy_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			if(btrybgry==1)
			 {
				 if(bsgn==1&&pierwszy->Text=="")
				 {
					 pierwszy->Text="X";
					 bsgn=0;
				 }
				 else
				 if(bsgn==0&&pierwszy->Text=="")
				 {
					 pierwszy->Text="O";
					 bsgn=1;
				 }
			}
			if(btrybgry==0)
			 {
				 if(bsgn==1&&pierwszy->Text=="")
				 {
					 pierwszy->Text="X";
					 bsgn=0;
					 bczymozna=1;
				 }

			 }
			ipvepole=rand()%9+1;
			vzwyciestwo();
		 }
private: System::Void drugi_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(btrybgry==1)
			 {
				 if(bsgn==1&&drugi->Text=="")
				 {
					 drugi->Text="X";
					 bsgn=0;
					 
				 }
				 else
				 if(bsgn==0&&drugi->Text=="")
				 {
					 drugi->Text="O";
					 bsgn=1;
					 
				 }
			 }
			if(btrybgry==0)
			 {
				 if(bsgn==1&&drugi->Text=="")
				 {
					 drugi->Text="X";
					 bsgn=0;
					 bczymozna=1;
				 }
			 }
			ipvepole=rand()%9+1;
			vzwyciestwo();
		 }
private: System::Void trzeci_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(btrybgry==1)
			 {
				 if(bsgn==1&&trzeci->Text=="")
				 {
					 trzeci->Text="X";
					 bsgn=0;
				 }
				 else
				 if(bsgn==0&&trzeci->Text=="")
				 {
					 trzeci->Text="O";
					 bsgn=1;
				 }		 
			}
			if(btrybgry==0)
			 {
				 if(bsgn==1&&trzeci->Text=="")
				 {
					 trzeci->Text="X";
					 bsgn=0;
					 bczymozna=1;
				 }
			 }
			ipvepole=rand()%9+1;
			vzwyciestwo();
		 }
private: System::Void czwarty_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(btrybgry==1)
			 {
				 if(bsgn==1&&czwarty->Text=="")
				 {
					 czwarty->Text="X";
					 bsgn=0;
				 }
				 else
				 if(bsgn==0&&czwarty->Text=="")
				 {
					 czwarty->Text="O";
					 bsgn=1;
				 }
			 }
			if(btrybgry==0)
			 {
				 if(bsgn==1&&czwarty->Text=="")
				 {
					 czwarty->Text="X";
					 bsgn=0;
					 bczymozna=1;
				 }
			 }
			ipvepole=rand()%9+1;
			vzwyciestwo();
		 }
private: System::Void piaty_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(btrybgry==1)
			 {
				 if(bsgn==1&&piaty->Text=="")
				 {
					piaty->Text="X";
					bsgn=0;
				 }
				 else
				 if(bsgn==0&&piaty->Text=="")
				 {
					 piaty->Text="O";
					 bsgn=1;
				 }
			 }
			if(btrybgry==0)
			 {
				 if(bsgn==1&&piaty->Text=="")
				 {
					 piaty->Text="X";
					 bsgn=0;
					 bczymozna=1;
				 }
			 }
			ipvepole=rand()%9+1;
			vzwyciestwo();
		 }
private: System::Void szosty_Click(System::Object^  sender, System::EventArgs^  e) 
		 {

			 if(btrybgry==1)
			 {
				 if(bsgn==1&&szosty->Text=="")
				 {
					 szosty->Text="X";
					 bsgn=0;
				 }
				 else
				 if(bsgn==0&&szosty->Text=="")
				 {
					 szosty->Text="O";
					 bsgn=1;
				 }
			 }
			if(btrybgry==0)
			 {
				 if(bsgn==1&&szosty->Text=="")
				 {
					 szosty->Text="X";
					 bsgn=0;
					 bczymozna=1;
				 }
			 }
			ipvepole=rand()%9+1;
			vzwyciestwo();
		 }
private: System::Void siodmy_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(btrybgry==1)
			 {
				 if(bsgn==1&&siodmy->Text=="")
				 {
					 siodmy->Text="X";
					 bsgn=0;
				 }
				 else
				 if(bsgn==0&&siodmy->Text=="")
				 {
					 siodmy->Text="O";
					 bsgn=1;
				 }
			 }
			if(btrybgry==0)
			 {
				 if(bsgn==1&&siodmy->Text=="")
				 {
					 siodmy->Text="X";
					 bsgn=0;
					 bczymozna=1;
				 }
			 }
			ipvepole=rand()%9+1;
			vzwyciestwo();
		 }
private: System::Void osmy_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(btrybgry==1)
			 {

				 if(bsgn==1&&osmy->Text=="")
				 {
					 osmy->Text="X";
					 bsgn=0;
				 }
				 else
				 if(bsgn==0&&osmy->Text=="")
				 {
					 osmy->Text="O";
					 bsgn=1;
				 }
			 }
			if(btrybgry==0)
			 {

				 if(bsgn==1&&osmy->Text=="")
				 {
					 osmy->Text="X";
					 bsgn=0;
					 bczymozna=1;
				 }
			 }
			ipvepole=rand()%9+1;
			vzwyciestwo();
		 }
private: System::Void dziewiaty_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(btrybgry==1)
			 {
				 if(bsgn==1&&dziewiaty->Text=="")
				 {
					 dziewiaty->Text="X";
					 bsgn=0;
				 }
				 else
				 if(bsgn==0&&dziewiaty->Text=="")
				 {
					 dziewiaty->Text="O";
					 bsgn=1;
				 }
			 }
			if(btrybgry==0)
			 {
				 if(bsgn==1&&dziewiaty->Text=="")
				 {
					 dziewiaty->Text="X";
					 bsgn=0;
					 bczymozna=1;
				 }

			 }
			ipvepole=rand()%9+1;
			vzwyciestwo();
		 }

		 // FUNCKJE !!!!!!!!!!!!!!
		 // funkcja czyszcz¹ca planszê ////////////////////////////////////////////////////////////////
		 	void vczyszczenie()
	{
				if((izmianagracza%2)==0)
				{
					bsgn=1;
				}
				else
				if((izmianagracza%2)!=0)
				{
					bsgn=0;
				}
			 pierwszy->Text="";
			 drugi->Text="";
			 trzeci->Text="";
			 czwarty->Text="";
			 piaty->Text="";
			 szosty->Text="";
			 siodmy->Text="";
			 osmy->Text="";
			 dziewiaty->Text="";
			 bremis=0;
	}
			// funkcja zmieniaj¹ca gracza/////////////////////////////////////////////////////////////
			void vzmianagracza()
			{
				if((izmianagracza%2)==0)
				{
					bsgn=1;
					MessageBox::Show("Teraz rozpoczyna : "+nazwagracz1->Text,"Kto zaczyna",MessageBoxButtons::OK,MessageBoxIcon::Information);
				}
				else
				if((izmianagracza%2)!=0)
				{
					bsgn=0;
					MessageBox::Show("Teraz rozpoczyna : "+nazwagracz2->Text,"Kto zaczyna",MessageBoxButtons::OK,MessageBoxIcon::Information);
				}
			}
			// funkcja sprawdzaj¹ca czy zaistania³ remis//////////////////////////////////////////////////
			void vremis()
			{
			if(bremis==1&&(pierwszy->Text=="X"||pierwszy->Text=="O")&&(drugi->Text=="X"||drugi->Text=="O")&&(trzeci->Text=="X"||trzeci->Text=="O")&&(czwarty->Text=="X"||czwarty->Text=="O")&&(piaty->Text=="X"||piaty->Text=="O")&&(szosty->Text=="X"||szosty->Text=="O")&&(siodmy->Text=="X"||siodmy->Text=="O")&&(osmy->Text=="X"||osmy->Text=="O")&&(dziewiaty->Text=="X"||dziewiaty->Text=="O"))
			 {
				 MessageBox::Show("Remis !","Zwyciêzca!",MessageBoxButtons::OK,MessageBoxIcon::Information);
				 ++izmianagracza;
				 vzmianagracza();
				 vczyszczenie();
			 }
			}
		// funkcja tworz¹ca grê od nowa////////////////////////////////////////////////////////////////
			void vnowagra()
		 {
			 if(btrybgry==1)
			 {
			 izmianagracza=0;
			 bsgn=1;
			 iwynik1=0;
			 iwynik2=0;
			 nazwagracz1->Text="";
			 nazwagracz2->Text="";
			 pierwszy->Enabled=false;
			 drugi->Enabled=false;
			 trzeci->Enabled=false;
			 czwarty->Enabled=false;
			 piaty->Enabled=false;
			 szosty->Enabled=false;
			 siodmy->Enabled=false;
			 osmy->Enabled=false;
			 dziewiaty->Enabled=false;
			 nazwagracz1->Visible=true;
			 nazwagracz2->Visible=true;
			 gracz1->Visible=true;
			 gracz2->Visible=true;
			 zapisznazwe->Visible=true;
			 wynik->Enabled=false;
			 this->Size=Drawing::Size(400, 280);
			 animacja->Location=Drawing::Point(335,38);
			 vczyszczenie();
			 }
			 else
				 if(btrybgry==0)
				 {

				 }

		 }
			// funkcja sprawdzaj¹ca kto wygra³//////////////////////////////////////////////////////////////
			void vzwyciestwo()
			{
			 // warunki zwyciêstwa krzyzyka /////////////////////////////////////////////////////////////////
			 if(pierwszy->Text=="X"&&drugi->Text=="X"&&trzeci->Text=="X")
			 {
				 MessageBox::Show("Wygra³/³a "+nazwagracz1->Text,"Zwyciêzca!",MessageBoxButtons::OK,MessageBoxIcon::Information);
				 ++izmianagracza;
				 ++iwynik1;
				 vzmianagracza();
				 vczyszczenie();
			 }
			 else
			 if(czwarty->Text=="X"&&piaty->Text=="X"&&szosty->Text=="X")
			 {
				 MessageBox::Show("Wygra³/³a "+nazwagracz1->Text,"Zwyciêzca!",MessageBoxButtons::OK,MessageBoxIcon::Information);
				 ++izmianagracza;
				 ++iwynik1;
				 vzmianagracza();
				 vczyszczenie();
			 }
			 else
			 if(siodmy->Text=="X"&&osmy->Text=="X"&&dziewiaty->Text=="X")
			 {
				 MessageBox::Show("Wygra³/³a "+nazwagracz1->Text,"Zwyciêzca!",MessageBoxButtons::OK,MessageBoxIcon::Information);
				 ++izmianagracza;
				 ++iwynik1;
				 vzmianagracza();
				 vczyszczenie();
			 }
			 else
			 if(pierwszy->Text=="X"&&czwarty->Text=="X"&&siodmy->Text=="X")
			 {
				 MessageBox::Show("Wygra³/³a "+nazwagracz1->Text,"Zwyciêzca!",MessageBoxButtons::OK,MessageBoxIcon::Information);
				 ++izmianagracza;
				 ++iwynik1;
				 vzmianagracza();
				 vczyszczenie();
			 }
			 else
			 if(drugi->Text=="X"&&piaty->Text=="X"&&osmy->Text=="X")
			 {
				 MessageBox::Show("Wygra³/³a "+nazwagracz1->Text,"Zwyciêzca!",MessageBoxButtons::OK,MessageBoxIcon::Information);
				 ++izmianagracza;
				 ++iwynik1;
				 vzmianagracza();
				 vczyszczenie();
			 }
			 else
			 if(trzeci->Text=="X"&&szosty->Text=="X"&&dziewiaty->Text=="X")
			 {
				 MessageBox::Show("Wygra³/³a "+nazwagracz1->Text,"Zwyciêzca!",MessageBoxButtons::OK,MessageBoxIcon::Information);
				 ++izmianagracza;
				 ++iwynik1;
				 vzmianagracza();
				 vczyszczenie();
			 }
			 else
			 if(pierwszy->Text=="X"&&piaty->Text=="X"&&dziewiaty->Text=="X")
			 {
				 MessageBox::Show("Wygra³/³a "+nazwagracz1->Text,"Zwyciêzca!",MessageBoxButtons::OK,MessageBoxIcon::Information);
				 ++izmianagracza;
				 ++iwynik1;
				 vzmianagracza();
				 vczyszczenie();
			 }
			 else
			 if(trzeci->Text=="X"&&piaty->Text=="X"&&siodmy->Text=="X")
			 {
				 MessageBox::Show("Wygra³/³a "+nazwagracz1->Text,"Zwyciêzca!",MessageBoxButtons::OK,MessageBoxIcon::Information);
				 ++izmianagracza;
				 ++iwynik1;
				 vzmianagracza();
				 vczyszczenie();
			 }
			 else			  // warunki zwyciêstwa kó³ka /////////////////////////////////////////////////////////////////
			 if(pierwszy->Text=="O"&&drugi->Text=="O"&&trzeci->Text=="O")
			 {
				 MessageBox::Show("Wygra³/³a "+nazwagracz2->Text,"Zwyciêzca!",MessageBoxButtons::OK,MessageBoxIcon::Information);
				 ++izmianagracza;
				 ++iwynik2;
				 vzmianagracza();
				 vczyszczenie();
				 bczymozna=0;
			 }
			 else
			 if(czwarty->Text=="O"&&piaty->Text=="O"&&szosty->Text=="O")
			 {
				 MessageBox::Show("Wygra³/³a "+nazwagracz2->Text,"Zwyciêzca!",MessageBoxButtons::OK,MessageBoxIcon::Information);
				 ++izmianagracza;
				 ++iwynik2;
				 vzmianagracza();
				 vczyszczenie();
				 bczymozna=0;
			 }
			 else
			 if(siodmy->Text=="O"&&osmy->Text=="O"&&dziewiaty->Text=="O")
			 {
				 MessageBox::Show("Wygra³/³a "+nazwagracz2->Text,"Zwyciêzca!",MessageBoxButtons::OK,MessageBoxIcon::Information);
				 ++izmianagracza;
				 ++iwynik2;
				 vzmianagracza();
				 vczyszczenie();
				 bczymozna=1;
			 }
			 else
			 if(pierwszy->Text=="O"&&czwarty->Text=="O"&&siodmy->Text=="O")
			 {
				 MessageBox::Show("Wygra³/³a "+nazwagracz2->Text,"Zwyciêzca!",MessageBoxButtons::OK,MessageBoxIcon::Information);
				 ++izmianagracza;
				 ++iwynik2;
				 vzmianagracza();
				 vczyszczenie();
				 bczymozna=1;
			 }
			 else
			 if(drugi->Text=="O"&&piaty->Text=="O"&&osmy->Text=="O")
			 {
				 MessageBox::Show("Wygra³/³a "+nazwagracz2->Text,"Zwyciêzca!",MessageBoxButtons::OK,MessageBoxIcon::Information);
				 ++izmianagracza;
				 ++iwynik2;
				 vzmianagracza();
				 vczyszczenie();
				 bczymozna=1;
			 }
			 else
			 if(trzeci->Text=="O"&&szosty->Text=="O"&&dziewiaty->Text=="O")
			 {
				 MessageBox::Show("Wygra³/³a "+nazwagracz2->Text,"Zwyciêzca!",MessageBoxButtons::OK,MessageBoxIcon::Information);
				 ++izmianagracza;
				 ++iwynik2;
				 vzmianagracza();
				 vczyszczenie();
				 bczymozna=1;
			 }
			 else
			 if(pierwszy->Text=="O"&&piaty->Text=="O"&&dziewiaty->Text=="O")
			 {
				 MessageBox::Show("Wygra³/³a "+nazwagracz2->Text,"Zwyciêzca!",MessageBoxButtons::OK,MessageBoxIcon::Information);
				 ++izmianagracza;
				 ++iwynik2;
				 vzmianagracza();
				 vczyszczenie();
				 bczymozna=0;
			 }
			 else
			 if(trzeci->Text=="O"&&piaty->Text=="O"&&siodmy->Text=="O")
			 {
				 MessageBox::Show("Wygra³/³a "+nazwagracz2->Text,"Zwyciêzca!",MessageBoxButtons::OK,MessageBoxIcon::Information);
				 ++izmianagracza;
				 ++iwynik2;
				 vzmianagracza();
				 vczyszczenie();
				 bczymozna=0;
			 }
			 else
			 {
				 bremis=1;
			 }
			 vremis();
			}

// ZDARZENIA ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		// zdarzenie wy³¹czania gry ////////////////////////////////////////////////////////////////////////////
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) 
		 {
			MessageBox::Show("Dziêkujê za pobranie mojej gry - BoksyckaTeam :D","Podziêkowanie",MessageBoxButtons::OK,MessageBoxIcon::Information);
		 }
		 // zdarzenie w³¹czania gry /////////////////////////////////////////////////////////////////////////////////
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
		 {

			 Windows::Forms::DialogResult drpytanie;
			 drpytanie=MessageBox::Show("Player vs Player ?"+System::Environment::NewLine+"Tak = Player vs Player - PvP"+System::Environment::NewLine+"Nie = Player vs Computer - PvE","Wybierz tryb",MessageBoxButtons::YesNo,MessageBoxIcon::Question);
			 switch(drpytanie)
			 {
			 case Windows::Forms::DialogResult::Yes:
				 {
			 btrybgry=1;
			 gracz1->Visible=true;
			 gracz2->Visible=true;
			 nazwagracz1->Visible=true;
			 nazwagracz2->Visible=true;
			 zapisznazwe->Visible=true;
			 this->AcceptButton=zapisznazwe;
			 break;
				}
			 case Windows::Forms::DialogResult::No:
				 {
			 btrybgry=0;
			 izmianagracza=0;
			 srand(static_cast<int>(time(NULL)));
			 ipvepole=rand()%9+1;
			 bsgn=1;
			 iwynik1=0;
			 iwynik2=0;
			 nazwagracz1->Text="";
			 pierwszy->Enabled=false;
			 drugi->Enabled=false;
			 trzeci->Enabled=false;
			 czwarty->Enabled=false;
			 piaty->Enabled=false;
			 szosty->Enabled=false;
			 siodmy->Enabled=false;
			 osmy->Enabled=false;
			 dziewiaty->Enabled=false;
			 nazwagracz1->Visible=true;
			 nazwagracz2->Text="Computer";
			 gracz1->Visible=true;
			 zapisznazwe->Visible=true;
			 wynik->Enabled=false;
			 this->Size=Drawing::Size(400, 280);
			 animacja->Location=Drawing::Point(335,38);
			 vczyszczenie();
					 break;		 
				 }
			 }
			 if(btrybgry==1)
			 {
				 Form1::Text=("Kó³ko_Krzy¿yk_B.T. PvP");
			 }
			 else
				 if(btrybgry==0)
				 {
					 Form1::Text=("Kó³ko_Krzy¿yk_B.T. PvE");
				 }
		 }
private: System::Void Form1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
		 {
			 vzwyciestwo();
			 if(bczymozna==1)
			 {
				 vzwyciestwo();
				 if(bsgn==0&&ipvepole==9&&dziewiaty->Text=="")
				 {
					 dziewiaty->Text="O";
					 bsgn=1;
					 bczymozna=0;
				 }
				 else
				 if(bsgn==0&&ipvepole==9&&dziewiaty->Text!="")
					 {
						 ipvepole=rand()%9+1;
					 }

				 if(bsgn==0&&ipvepole==8&&osmy->Text=="")
				 {
					 osmy->Text="O";
					 bsgn=1;
					 bczymozna=0;
				 }
				 else
				 if(bsgn==0&&ipvepole==8&&osmy->Text!="")
					 {
						 ipvepole=rand()%9+1;
					 }


				 if(bsgn==0&&ipvepole==7&&siodmy->Text=="")
				 {
					 siodmy->Text="O";
					 bsgn=1;
					 bczymozna=0;
				 }
				 else
				 if(bsgn==0&&ipvepole==7&&siodmy->Text!="")
					 {
						 ipvepole=rand()%9+1;
					 }


				 if(bsgn==0&&ipvepole==6&&szosty->Text=="")
				 {
					 szosty->Text="O";
					 bsgn=1;
					 bczymozna=0;
				 }
				 else
				 if(bsgn==0&&ipvepole==6&&szosty->Text!="")
					 {
						 ipvepole=rand()%9+1;
					 }


				 if(bsgn==0&&ipvepole==5&&piaty->Text=="")
				 {
					 piaty->Text="O";
					 bsgn=1;
					 bczymozna=0;
				 }
				 else
				 if(bsgn==0&&ipvepole==5&&piaty->Text!="")
					 {
						 ipvepole=rand()%9+1;
					 }

				 if(bsgn==0&&ipvepole==4&&czwarty->Text=="")
				 {
					 czwarty->Text="O";
					 bsgn=1;
					 bczymozna=0;
				 }
				 else
				 if(bsgn==0&&ipvepole==4&&czwarty->Text!="")
					 {
						 ipvepole=rand()%9+1;
					 }

				 if(bsgn==0&&ipvepole==3&&trzeci->Text=="")
				 {
					 trzeci->Text="O";
					 bsgn=1;
					 bczymozna=0;
				 }
				 else
				 if(bsgn==0&&ipvepole==3&&trzeci->Text!="")
					 {
						 ipvepole=rand()%9+1;
					 }

				 if(bsgn==0&&ipvepole==2&&drugi->Text=="")
				 {
					 drugi->Text="O";
					 bsgn=1;
					 bczymozna=0;
				 }
				 else
				 if(bsgn==0&&ipvepole==2&&drugi->Text!="")
					 {
						 ipvepole=rand()%9+1;
					 }

				 if(bsgn==0&&ipvepole==1&&pierwszy->Text=="")
				 {
					 pierwszy->Text="O";
					 bsgn=1; 
					 bczymozna=0;
				 }
				 else
				 if(bsgn==0&&ipvepole==1&&pierwszy->Text!="")
					 {
						 ipvepole=rand()%9+1;
					 }
			 }
		 }
};
}