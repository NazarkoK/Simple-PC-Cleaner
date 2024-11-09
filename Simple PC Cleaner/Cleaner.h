//Cleaner.h
#pragma once

namespace Simple PC Cleaner {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Ñâîäêà äëÿ Cleaner
	/// </summary>
	public ref class Cleaner : public System::Windows::Forms::Form
	{
	public:
		Cleaner(void)
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
		~Cleaener()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;

	private: System::Windows::Forms::Button^ button_check_size;
	private: System::Windows::Forms::Button^ button_cleaning;

	private: System::Windows::Forms::PictureBox^ pictureBox_logo;
	private: System::Windows::Forms::Label^ label_size_scan;

	private: System::Windows::Forms::Label^ label_make_choice;
	private: System::Windows::Forms::Label^ lable_scan_result;
	private: System::Windows::Forms::Label^ label_name_cleaner;

	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ logsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;

	private: System::Windows::Forms::Label^ label_clening_result;
	private: System::Windows::Forms::Label^ label_size_clean;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem1;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Cleaner::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->logsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button_check_size = (gcnew System::Windows::Forms::Button());
			this->button_cleaning = (gcnew System::Windows::Forms::Button());
			this->pictureBox_logo = (gcnew System::Windows::Forms::PictureBox());
			this->label_size_scan = (gcnew System::Windows::Forms::Label());
			this->label_make_choice = (gcnew System::Windows::Forms::Label());
			this->lable_scan_result = (gcnew System::Windows::Forms::Label());
			this->label_name_cleaner = (gcnew System::Windows::Forms::Label());
			this->label_clening_result = (gcnew System::Windows::Forms::Label());
			this->label_size_clean = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_logo))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Courier New", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->logsToolStripMenuItem,
					this->aboutToolStripMenuItem, this->helpToolStripMenuItem, this->aboutToolStripMenuItem1, this->helpToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(714, 35);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// logsToolStripMenuItem
			// 
			this->logsToolStripMenuItem->Name = L"logsToolStripMenuItem";
			this->logsToolStripMenuItem->Size = System::Drawing::Size(82, 31);
			this->logsToolStripMenuItem->Text = L"Logs";
			this->logsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Cleaner::logsToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(14, 31);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(14, 31);
			// 
			// aboutToolStripMenuItem1
			// 
			this->aboutToolStripMenuItem1->Name = L"aboutToolStripMenuItem1";
			this->aboutToolStripMenuItem1->Size = System::Drawing::Size(96, 31);
			this->aboutToolStripMenuItem1->Text = L"About";
			this->aboutToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Cleaner::aboutToolStripMenuItem1_Click);
			// 
			// helpToolStripMenuItem1
			// 
			this->helpToolStripMenuItem1->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->helpToolStripMenuItem1->Name = L"helpToolStripMenuItem1";
			this->helpToolStripMenuItem1->Size = System::Drawing::Size(82, 31);
			this->helpToolStripMenuItem1->Text = L"Help";
			this->helpToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Cleaner::helpToolStripMenuItem1_Click);
			// 
			// button_check_size
			// 
			this->button_check_size->ForeColor = System::Drawing::Color::Green;
			this->button_check_size->Location = System::Drawing::Point(73, 382);
			this->button_check_size->Name = L"button_check_size";
			this->button_check_size->Size = System::Drawing::Size(165, 72);
			this->button_check_size->TabIndex = 4;
			this->button_check_size->Text = L"Scanning";
			this->button_check_size->UseVisualStyleBackColor = true;
			this->button_check_size->Click += gcnew System::EventHandler(this, &Cleaner::button_check_size_Click);
			// 
			// button_cleaning
			// 
			this->button_cleaning->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_cleaning->ForeColor = System::Drawing::Color::Blue;
			this->button_cleaning->Location = System::Drawing::Point(125, 382);
			this->button_cleaning->Margin = System::Windows::Forms::Padding(3, 3, 3, 53);
			this->button_cleaning->Name = L"button_cleaning";
			this->button_cleaning->Size = System::Drawing::Size(165, 72);
			this->button_cleaning->TabIndex = 5;
			this->button_cleaning->Text = L"Сleaning";
			this->button_cleaning->UseVisualStyleBackColor = false;
			this->button_cleaning->Click += gcnew System::EventHandler(this, &Cleaner::button_clinning_Click);
			// 
			// pictureBox_logo
			// 
			this->pictureBox_logo->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox_logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_logo.Image")));
			this->pictureBox_logo->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_logo.InitialImage")));
			this->pictureBox_logo->Location = System::Drawing::Point(476, 38);
			this->pictureBox_logo->Name = L"pictureBox_logo";
			this->pictureBox_logo->Size = System::Drawing::Size(186, 172);
			this->pictureBox_logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_logo->TabIndex = 8;
			this->pictureBox_logo->TabStop = false;
			// 
			// label_size_scan
			// 
			this->label_size_scan->AutoSize = true;
			this->label_size_scan->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label_size_scan->Font = (gcnew System::Drawing::Font(L"Courier New", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_size_scan->ForeColor = System::Drawing::Color::Black;
			this->label_size_scan->Location = System::Drawing::Point(595, 262);
			this->label_size_scan->Margin = System::Windows::Forms::Padding(3);
			this->label_size_scan->Name = L"label_size_scan";
			this->label_size_scan->Size = System::Drawing::Size(130, 23);
			this->label_size_scan->TabIndex = 9;
			this->label_size_scan->Text = L"Size bytes";
			this->label_size_scan->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_make_choice
			// 
			this->label_make_choice->AutoSize = true;
			this->label_make_choice->Location = System::Drawing::Point(31, 173);
			this->label_make_choice->Name = L"label_make_choice";
			this->label_make_choice->Size = System::Drawing::Size(250, 27);
			this->label_make_choice->TabIndex = 10;
			this->label_make_choice->Text = L"Make your choice:";
			this->label_make_choice->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lable_scan_result
			// 
			this->lable_scan_result->AutoSize = true;
			this->lable_scan_result->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->lable_scan_result->Location = System::Drawing::Point(359, 259);
			this->lable_scan_result->Name = L"lable_scan_result";
			this->lable_scan_result->Size = System::Drawing::Size(236, 27);
			this->lable_scan_result->TabIndex = 11;
			this->lable_scan_result->Text = L"Scanning result:";
			// 
			// label_name_cleaner
			// 
			this->label_name_cleaner->AutoSize = true;
			this->label_name_cleaner->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_name_cleaner->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label_name_cleaner->Location = System::Drawing::Point(18, 47);
			this->label_name_cleaner->Name = L"label_name_cleaner";
			this->label_name_cleaner->Size = System::Drawing::Size(413, 96);
			this->label_name_cleaner->TabIndex = 12;
			this->label_name_cleaner->Text = L"Welcome to \r\n\r\n- - SIMPLE PC CLEANER - -";
			this->label_name_cleaner->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_clening_result
			// 
			this->label_clening_result->AutoSize = true;
			this->label_clening_result->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label_clening_result->Location = System::Drawing::Point(359, 300);
			this->label_clening_result->Name = L"label_clening_result";
			this->label_clening_result->Size = System::Drawing::Size(236, 27);
			this->label_clening_result->TabIndex = 17;
			this->label_clening_result->Text = L"Cleaning result:";
			// 
			// label_size_clean
			// 
			this->label_size_clean->AutoSize = true;
			this->label_size_clean->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label_size_clean->Font = (gcnew System::Drawing::Font(L"Courier New", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_size_clean->ForeColor = System::Drawing::Color::Black;
			this->label_size_clean->Location = System::Drawing::Point(595, 303);
			this->label_size_clean->Margin = System::Windows::Forms::Padding(3);
			this->label_size_clean->Name = L"label_size_clean";
			this->label_size_clean->Size = System::Drawing::Size(130, 23);
			this->label_size_clean->TabIndex = 18;
			this->label_size_clean->Text = L"Size bytes";
			this->label_size_clean->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox1->Controls->Add(this->button_cleaning);
			this->groupBox1->Location = System::Drawing::Point(351, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(401, 475);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(58, 216);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(202, 31);
			this->checkBox1->TabIndex = 20;
			this->checkBox1->Text = L"Trash folder";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(58, 255);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(244, 31);
			this->checkBox2->TabIndex = 21;
			this->checkBox2->Text = L"Download folder";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(58, 292);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(244, 31);
			this->checkBox3->TabIndex = 22;
			this->checkBox3->Text = L"Temporary files";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(58, 329);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(230, 31);
			this->checkBox4->TabIndex = 23;
			this->checkBox4->Text = L"Internet files";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// Cleaner
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
			this->ClientSize = System::Drawing::Size(714, 459);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label_size_clean);
			this->Controls->Add(this->label_clening_result);
			this->Controls->Add(this->label_name_cleaner);
			this->Controls->Add(this->lable_scan_result);
			this->Controls->Add(this->label_make_choice);
			this->Controls->Add(this->label_size_scan);
			this->Controls->Add(this->pictureBox_logo);
			this->Controls->Add(this->button_check_size);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Courier New", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(5);
			this->MaximizeBox = false;
			this->Name = L"Cleaener";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Cleaener";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_logo))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button_check_size_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_clinning_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void logsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void aboutToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void helpToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
};
}