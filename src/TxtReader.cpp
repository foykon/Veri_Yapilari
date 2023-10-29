#include "TxtReader.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

TxtReader::TxtReader(const std::string& filename) : filename_(filename) {}

bool TxtReader::ReadNumbers() {
    std::ifstream file(filename_);
    if (!file.is_open()) {
        std::cerr << "Dosya açılamadı: " << filename_ << std::endl;
        return false;
    }

    numbers_.clear();

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        int number;
        while (iss >> number) {
            numbers_.push_back(number);
        }
    }

    file.close();
    return true;
}

void TxtReader::PrintNumbers() const {
    for (int number : numbers_) {
        std::cout << number << " ";
    }
    std::cout << std::endl;
}

std::vector<int> TxtReader::GetNumbers() const {
    return numbers_;
}
