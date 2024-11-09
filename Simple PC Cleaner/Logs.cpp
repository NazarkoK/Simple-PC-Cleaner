//Logs.cpp
#include "Logs.h"

System::Void Simple PC Cleaner::Cleaner::Cleaener_Closing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
    String^ FileName = "D:\\nulp\\spz\\Simple PC Cleaner\\Simple PC Cleaner\\Logs.txt";
    StreamReader^ file = File::OpenText(FileName);
    textBox_logs->Text = file->ReadToEnd();
    file->Close();
    return System::Void();
}

System::Void Simple PC Cleaner::Cleaner::BCleaner_Load(System::Object^ sender, System::EventArgs^ e) {
    String^ FileName = "D:\\nulp\\spz\\Simple PC Cleaner\\Simple PC Cleaner\\Logs.txt";
    StreamReader^ file = File::OpenText(FileName);
    textBox_logs->Text = file->ReadToEnd();
    file->Close();
    return System::Void();
}

System::Void Simple PC Cleaner::Cleaener::Cleaner_Closed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
    String^ FileName = "D:\\nulp\\spz\\Simple PC Cleaner\\Simple PC Cleaner\\Logs.txt";
    StreamReader^ file = File::OpenText(FileName);
    textBox_logst->Text = file->ReadToEnd();
    file->Close();
    return System::Void();
}

System::Void Simple PC Cleaner::Cleaner::Cleaner_Shown(System::Object^ sender, System::EventArgs^ e)
{
    String^ FileName = "D:\\nulp\\spz\\Simple PC Cleaner\\Simple PC Cleaner\\Logs.txt";
    StreamReader^ file = File::OpenText(FileName);
    textBox_logs->Text = file->ReadToEnd();
    file->Close();
    return System::Void();
}
