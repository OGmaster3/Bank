// Implementation of the ExpenseManager class defined in ExpenseManager.h
#include "FileManger.h"
#include <fstream>
#include <iostream>

void FileManger::saveToFile(const std::string &filename) const{
    std::ofstream file(filename);

    if (!file.is_open()){
        std::cerr << "Error opening file: " << filename << std::endl;
        return;
    }
    
    file << data;
    std::cout << "Data saved to file: " << filename << std::endl;
}

std::string FileManager::loadFromFile(const std::string &filename){
    std::ifstream file(filename);

    if (!file.is_open()){
        std::cerr << "Error opening file: " << filename << std::endl;
        return "";
    }
   
    std::string content((std::istreambuf_iterator<char>(file), std::istreambuf_iterator<char>()));
    file.close();
    return content;
}
