// Declaring the FileManager class
#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <string>


// File manager for handling file operations such as reading and writing to files.

class FileManager{
    public:
        void saveToFile(const std::string &filename, const std::string &date);
        std::string readfromFile(const std::string &filename);
};
#endif // FILEMANAGER_H
