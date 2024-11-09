#pragma once

namespace Apteka {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Helps
	/// </summary>
	public ref class Helps : public System::Windows::Forms::Form
	{
	public:
		Helps(void)
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
		~Helps()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_make_choice;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Helps::typeid));
			this->label_make_choice = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label_make_choice
			// 
			this->label_make_choice->AutoSize = true;
			this->label_make_choice->Font = (gcnew System::Drawing::Font(L"Courier New", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_make_choice->ForeColor = System::Drawing::Color::Purple;
			this->label_make_choice->Location = System::Drawing::Point(197, 21);
			this->label_make_choice->Name = L"label_make_choice";
			this->label_make_choice->Size = System::Drawing::Size(502, 27);
			this->label_make_choice->TabIndex = 12;
			this->label_make_choice->Text = L"A guide to using Simple PC Cleaner!\r\n";
			this->label_make_choice->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label1
			// 
			this->label1->AllowDrop = true;
			this->label1->AutoEllipsis = true;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(12, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(802, 644);
			this->label1->TabIndex = 13;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Courier New", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Crimson;
			this->label2->Location = System::Drawing::Point(644, 727);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(230, 21);
			this->label2->TabIndex = 14;
			this->label2->Text = L"With love, Nazarkok)";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Helps
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
			this->ClientSize = System::Drawing::Size(907, 753);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label_make_choice);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Helps";
			this->Text = L"Help";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
