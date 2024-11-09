#include "function.h"

long long getRecycleBinSize() {
    SHQUERYRBINFO queryInfo;
    queryInfo.cbSize = sizeof(SHQUERYRBINFO);
    if (SHQueryRecycleBinW(NULL, &queryInfo) == S_OK) {
        return static_cast<long long>(queryInfo.i64Size);
    }
    else {
        return -1; // Повертаємо -1 у випадку помилки
    }
}

long long getDownloadsFolderSize() {
    // Шлях до папки завантажень користувача
    const std::wstring downloadsPath = L"C:\\Users\\Nazar\\Downloads";

    ULONGLONG totalSize = 0;

    WIN32_FIND_DATAW findFileData;
    HANDLE hFind = FindFirstFileW((downloadsPath + L"\\*").c_str(), &findFileData);
    if (hFind == INVALID_HANDLE_VALUE) {
        return -1; // Помилка при відкритті папки
    }

    do {
        if (!(findFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
            ULARGE_INTEGER fileSize;
            fileSize.LowPart = findFileData.nFileSizeLow;
            fileSize.HighPart = findFileData.nFileSizeHigh;
            totalSize += fileSize.QuadPart;
        }
        else if (wcscmp(findFileData.cFileName, L".") != 0 && wcscmp(findFileData.cFileName, L"..") != 0) {
            
            // Рекурсивно обчислюємо розмір підпапки, якщо це папка
            std::wstring subFolderPath = downloadsPath + L"\\" + findFileData.cFileName;
            HANDLE hSubFind = FindFirstFileW((subFolderPath + L"\\*").c_str(), &findFileData);
            if (hSubFind != INVALID_HANDLE_VALUE) {
                do {
                    if (!(findFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
                        ULARGE_INTEGER fileSize;
                        fileSize.LowPart = findFileData.nFileSizeLow;
                        fileSize.HighPart = findFileData.nFileSizeHigh;
                        totalSize += fileSize.QuadPart;
                    }
                } while (FindNextFileW(hSubFind, &findFileData) != 0);
                FindClose(hSubFind);
            }
        }
    } while (FindNextFileW(hFind, &findFileData) != 0);

    FindClose(hFind);

    return static_cast<long long>(totalSize);
}

long long getFirefoxCachedSize() {
   
    // Шлях до кешу Mozilla Firefox
    const std::wstring firefoxCachePath = L"C:\\Users\\Nazar\\AppData\\Local\\Mozilla\\Firefox\\Profiles\\600wm7mq.default-release\\cache2";

    // Отримуємо розмір кешу Mozilla Firefox
    ULONGLONG firefoxCacheSize = 0;
    WIN32_FIND_DATAW findFileData;
    HANDLE hFind = FindFirstFileW((firefoxCachePath + L"\\*").c_str(), &findFileData);
    if (hFind != INVALID_HANDLE_VALUE) {
        do {
            if (!(findFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
                ULARGE_INTEGER fileSize;
                fileSize.LowPart = findFileData.nFileSizeLow;
                fileSize.HighPart = findFileData.nFileSizeHigh;
                firefoxCacheSize += fileSize.QuadPart;
            }
        } while (FindNextFileW(hFind, &findFileData) != 0);
        FindClose(hFind);
    }

    return static_cast<long long>(firefoxCacheSize);
}

long long getTempFilesSize() {
    
    // Шлях до папки temp на диску C
    const std::wstring tempFolderPath = L"C:\\Windows\\Temp";

    // Отримуємо розмір тимчасових файлів
    ULONGLONG tempFilesSize = 0;
    WIN32_FIND_DATAW findFileData;
    HANDLE hFind = FindFirstFileW((tempFolderPath + L"\\*").c_str(), &findFileData);
    if (hFind != INVALID_HANDLE_VALUE) {
        do {
            if (!(findFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
                ULARGE_INTEGER fileSize;
                fileSize.LowPart = findFileData.nFileSizeLow;
                fileSize.HighPart = findFileData.nFileSizeHigh;
                tempFilesSize += fileSize.QuadPart;
            }
        } while (FindNextFileW(hFind, &findFileData) != 0);
        FindClose(hFind);
    }

    return static_cast<long long>(tempFilesSize);
}

int clearRecycleBin() {
    HRESULT result = SHEmptyRecycleBinW(NULL, NULL, SHERB_NOCONFIRMATION | SHERB_NOPROGRESSUI | SHERB_NOSOUND);

    std::ofstream logFile("D:\\nulp\\spz\\Apteka\\Apteka\\Logs.txt", std::ios_base::app);

    if (result == S_OK) {
        logFile << "\nRecycle bin has been cleared successfully\n";
    }
    else if (result == S_FALSE) {
        logFile << "\nRecycle bin is empty\n";
    }
    else {
        logFile << "\nRecycle bin is empty\n";
    }

    logFile.close();

    return 0;
}

void deleteFirefoxCacheRecursive(const std::wstring& path, std::wofstream& logFile) {
    WIN32_FIND_DATAW findFileData;
    HANDLE hFind = FindFirstFileW((path + L"\\*").c_str(), &findFileData);
    if (hFind == INVALID_HANDLE_VALUE) {
        return;
    }

    do {
        if (wcscmp(findFileData.cFileName, L".") == 0 || wcscmp(findFileData.cFileName, L"..") == 0) {
            continue;
        }

        std::wstring filePath = path + L"\\" + findFileData.cFileName;

        if (findFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
            deleteFirefoxCacheRecursive(filePath, logFile);
            if (!RemoveDirectoryW(filePath.c_str())) {
                logFile << L"Error deleting directory: " << filePath << std::endl;
            }
            else {
                logFile << L"Success deleting directory: " << filePath << std::endl;
            }
        }
        else {
            if (DeleteFileW(filePath.c_str())) {
                logFile << L"Success deleting file: " << filePath << std::endl;
            }
            else {
                logFile << L"Error deleting file: " << filePath << std::endl;
            }
        }
    } while (FindNextFileW(hFind, &findFileData) != 0);

    FindClose(hFind);
}

int deleteFirefoxCache() {
    const std::wstring firefoxCachePath = L"C:\\Users\\Nazar\\AppData\\Local\\Mozilla\\Firefox\\Profiles\\600wm7mq.default-release\\cache2";

    std::wofstream logFile("D:\\nulp\\spz\\Apteka\\Apteka\\Logs.txt", std::ios_base::app);

    logFile << L"Attempting to delete Firefox cache files:\n";

    deleteFirefoxCacheRecursive(firefoxCachePath, logFile);

    logFile.close();

    return 0;
}

int deleteDownloadsFolderContents() {
    const std::wstring firefoxCachePath = L"C:\\Users\\Nazar\\Downloads";

    std::wofstream logFile("D:\\nulp\\spz\\Apteka\\Apteka\\Logs.txt", std::ios_base::app);

    logFile << L"Attempting to delete Downloads files:\n";

    deleteFirefoxCacheRecursive(firefoxCachePath, logFile);

    logFile.close();

    return 0;
}

bool deleteDirectoryContents(const std::wstring& directoryPath, std::wofstream& logFile) {
    WIN32_FIND_DATAW findFileData;
    HANDLE hFind = FindFirstFileW((directoryPath + L"\\*").c_str(), &findFileData);
    if (hFind == INVALID_HANDLE_VALUE) {
        logFile << L"Error opening directory: " << directoryPath << std::endl;
        return false; // Помилка при відкритті папки
    }

    bool result = true;
    do {
        
        // Ігноруємо теку і батьківську теку
        if (wcscmp(findFileData.cFileName, L".") == 0 || wcscmp(findFileData.cFileName, L"..") == 0) {
            continue;
        }

        // Створюємо повний шлях до файлу або теки
        std::wstring filePath = directoryPath + L"\\" + findFileData.cFileName;

        if (findFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
            
            // Рекурсивно видаляємо вміст підкаталогу
            if (!deleteDirectoryContents(filePath, logFile) || !RemoveDirectoryW(filePath.c_str())) {
                logFile << L"Error deleting directory: " << filePath << std::endl;
                result = false; // Помилка видалення підкаталогу
            }
            else {
                logFile << L"Success deleting directory: " << filePath << std::endl;
            }
        }
        else {
            if (!DeleteFileW(filePath.c_str())) {
                logFile << L"Error deleting file: " << filePath << std::endl;
                result = false; // Помилка видалення файлу
            }
            else {
                logFile << L"Success deleting file: " << filePath << std::endl;
            }
        }
    } while (FindNextFileW(hFind, &findFileData) != 0);

    FindClose(hFind);
    return result;
}

int deleteTempFiles() {
    // Шлях до папки temp на диску C
    const std::wstring tempFolderPath = L"C:\\Windows\\Temp";

    std::wofstream logFile("D:\\nulp\\spz\\Apteka\\Apteka\\Logs.txt", std::ios_base::app);

    logFile << L"Attempting to delete temporary files:\n";

    bool result = deleteDirectoryContents(tempFolderPath, logFile);

    logFile.close();

    return result ? 0 : -1;
}