/**
* @file TxtReader.cpp
* @description txt ile gelen verileri okuduğumuz ve sayılarListesine göndererek bağlı liste yaptımız kod bloğu
* @course 1. Öğretim A grubu
* @assignment 1.Ödev
* @date 29 Oct 2023
* @author  G201210014 Furkan YILDIZ furkan.yildiz12@ogr.sakarya.edu.tr
*/

#include "TxtReader.hpp"
#include "SayilarListesi.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

TxtReader::TxtReader(const std::string& filename) : filename_(filename) {}

//dosyadaki sayıları okumak için vektör yardımıyla okuma işleminin yapıldığı yer
bool TxtReader::ReadNumbers() {
    std::ifstream file(filename_);
    if (!file.is_open()) {
        std::cerr << "Dosya açilamadi: " << filename_ << std::endl;
        return false;
    }

    numbers_.clear();

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        int number;
        while (iss >> number) {
            numbers_.push_back(number);
            
            //döngünün içinde dönen tüm sayıları bağlı listeye eklediğimiz nokta
            sayilarListesi.push(number);

        }
    }



    //şuanda output almak için kullandığım proint fonksiyonları

    sayilarListesi.print();
    file.close();
    return true;
}

//ilk okuma yaptığımda kontrol amaçlı yazdığım eski bi fonksiyon 
void TxtReader::PrintNumbers() const {
    for (int number : numbers_) {
        std::cout << number << " ";
    }
    std::cout << std::endl;
}


//ilk okuma yaparken vektör kullanarak numaraları elde ediyordum eski bir fonksiyon
std::vector<int> TxtReader::GetNumbers() const {
    return numbers_;
}
