#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <shlobj.h>
#include <strsafe.h>
#include <iostream>
#include <fstream>
#include <string>
#include <msclr/marshal_cppstd.h>
#include <filesystem>

using namespace std;
using namespace System;
using namespace System::IO;

long long getRecycleBinSize();
long long getDownloadsFolderSize();
long long getFirefoxCachedSize();
long long getTempFilesSize();
int deleteDownloadsFolderContents();
int clearRecycleBin();
int deleteFirefoxCache();
int deleteTempFiles();
bool deleteDirectoryContents();