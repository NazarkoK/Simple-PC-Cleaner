//Claener.cpp
#include "Cleaner.h"
#include <Windows.h>
#include <string>
#include "function.h"
#include "Logs.h"
#include "About.h"
#include "Helps.h"

using namespace Simple PC Cleaner;

[STAThread]
 int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	// Очищення файлу Logs.txt
	std::ofstream logFile("D:\\nulp\\spz\\Simple PC Clenaer\\Simple PC Cleaner\\Logs.txt", std::ofstream::out | std::ofstream::trunc);
	logFile.close();
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Cleaner);
	return 0;
}

 System::Void Simple PC Cleaner::Cleaner::button_check_size_Click(System::Object^ sender, System::EventArgs^ e) {
	 long long res1 = 0, res2 = 0, res3 = 0, res4 = 0;
	 if (checkBox1->Checked)
		res1 = getRecycleBinSize();
	 if (checkBox2->Checked)
		res2 = getDownloadsFolderSize();
	 if (checkBox3->Checked)
		 res3 = getTempFilesSize();
	 if (checkBox4->Checked)
		 res4 = getFirefoxCachedSize();
	 if(res1 == -1 || res2 == -1 || res3 == -1  || res4 == -1)
		 MessageBox::Show("Scan error!", "Result scanning", MessageBoxButtons::OK, MessageBoxIcon::Error);
	 if (!checkBox1->Checked && !checkBox2->Checked && !checkBox3->Checked && !checkBox4->Checked)
		 MessageBox::Show("You have not selected any checkboxes", "Result scanning", MessageBoxButtons::OK, MessageBoxIcon::Error);
	 else {
		 long long totsize = static_cast<long long>(res1) + res2 + res3 + res4;

		 // Перевірити, чи totsize велике, щоб використовувати GB
		 if (totsize >= 1024LL * 1024 * 1024) {  // Якщо totsize більше або рівне 1 GB
			 double sizeInGB = static_cast<double>(totsize) / (1024 * 1024 * 1024);
			 String^ sizeText = String::Format("{0:F2} GB", sizeInGB);
			 label_size_scan->Text = sizeText;
		 }
		 else {
			 // В іншому випадку використовуємо байти
			 String^ sizeText = String::Format("{0} B", totsize);
			 label_size_scan->Text = sizeText;
		 }
		 MessageBox::Show("Scanned successfully!", "Result scanning", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		 checkBox1->Enabled = false;
		 checkBox2->Enabled = false;
		 checkBox3->Enabled = false;
		 checkBox4->Enabled = false;
	 }
	 
 }

 System::Void Claner::Cleaner::button_clinning_Click(System::Object^ sender, System::EventArgs^ e) {
	 
	 if (checkBox1->Checked)
		 if (clearRecycleBin() == -1)
		 {
			 MessageBox::Show("Trash folder is empty", "Result cleanning", MessageBoxButtons::OK, MessageBoxIcon::Error);
		 }
	 if (checkBox2->Checked)
		 deleteDownloadsFolderContents();
	 if (checkBox3->Checked)
		 deleteTempFiles();
	 if (checkBox4->Checked)
		 deleteFirefoxCache();
	 if (!checkBox1->Checked && !checkBox2->Checked && !checkBox3->Checked && !checkBox4->Checked)
		 MessageBox::Show("You have not selected any checkboxes", "Result cleanning", MessageBoxButtons::OK, MessageBoxIcon::Error);
	 else {
		 long long res1 = 0, res2 = 0, res3 = 0, res4 = 0;
		 if (checkBox1->Checked)
			 res1 = getRecycleBinSize();
		 if (checkBox2->Checked)
			 res2 = getDownloadsFolderSize();
		 if (checkBox3->Checked)
			 res3 = getTempFilesSize();
		 if (checkBox4->Checked)
			 res4 = getFirefoxCachedSize();
		 if (res1 == -1 || res2 == -1 || res3 == -1 || res4 == -1)
			 MessageBox::Show("Delete successfully!", "Result scanning", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		 
		 long long totsize = static_cast<long long>(res1) + res2 + res3 + res4;

		 // Перевірити, чи totsize велике, щоб використовувати GB
		 if (totsize >= 1024LL * 1024 * 1024) {  // Якщо totsize більше або рівне 1 GB
			 double sizeInGB = static_cast<double>(totsize) / (1024 * 1024 * 1024);
			 String^ sizeText = String::Format("{0:F2} GB", sizeInGB);
			 label_size_clean->Text = sizeText;
		 }
		 else {
			 // В іншому випадку використовуємо байти
			 String^ sizeText = String::Format("{0} B", totsize);
			 label_size_clean->Text = sizeText;
		 }

		 checkBox1->Enabled = true;
		 checkBox2->Enabled = true;
		 checkBox3->Enabled = true;
		 checkBox4->Enabled = true;
	 }
 }

 System::Void Simple PC Cleaner::Cleaner::logsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
 {
	 void OpenLogFile();
	 BuyList^ forma = gcnew BuyList();
	 forma->Show();
	 return System::Void();
 }

 System::Void Simple PC Cleaner::Cleaner::aboutToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
 {
	 About^ forma = gcnew About();
	 forma->Show();
	 return System::Void();
 }

 System::Void Simple PC Cleaner::Cleaner::helpToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
 {
	 Helps^ forma = gcnew Helps();
	 forma->Show();
	 return System::Void();
 }
