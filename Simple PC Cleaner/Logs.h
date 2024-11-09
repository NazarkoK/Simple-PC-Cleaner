Logs.h
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
	/// —водка дл€ Logs
	/// </summary>
	public ref class Logs : public System::Windows::Forms::Form
	{
	public:
		Logs(void)
		{
			InitializeComponent();
			String^ FileName = "Logs.txt";
			StreamReader^ file = File::OpenText(FileName);
			textBox_logs->Text = file->ReadToEnd();
			file->Close();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Logs()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ textBox_logs;




	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Logs::typeid));
			this->textBox_logs = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox_logs
			// 
			this->textBox_logs->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox_logs->Font = (gcnew System::Drawing::Font(L"Courier New", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_logs->Location = System::Drawing::Point(0, 0);
			this->textBox_logs->Margin = System::Windows::Forms::Padding(16, 13, 16, 13);
			this->textBox_logs->Multiline = true;
			this->textBox_logs->Name = L"textBox_logs";
			this->textBox_logs->ReadOnly = true;
			this->textBox_logs->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox_logs->Size = System::Drawing::Size(422, 393);
			this->textBox_logs->TabIndex = 5;
			
			// 
			// Logs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 27);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(422, 393);
			this->Controls->Add(this->textBox_logs);
			this->Font = (gcnew System::Drawing::Font(L"Courier New", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->MaximizeBox = false;
			this->Name = L"logs";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"ProgramLogs";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &logs::logs_Closing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &logs::logs_Closed);
			this->Load += gcnew System::EventHandler(this, &logs::logs_Load);
			this->Shown += gcnew System::EventHandler(this, &logs::logs_Shown);
			this->ResumeLayout(false);
			this->PerformLayout();
			
		}
#pragma endregion


	private: 
		System::Void Logs_Closing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
		System::Void Logs_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void Logs_Closed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
		System::Void Logs_Shown(System::Object^ sender, System::EventArgs^ e);
	};
}