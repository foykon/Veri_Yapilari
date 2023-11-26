/**
* @file TxtReader.hpp
* @description TxtReader.cpp in arayüzü
* @course 1. Öğretim A grubu
* @assignment 1.Ödev
* @date 29 Oct 2023
* @author  G201210014 Furkan YILDIZ furkan.yildiz12@ogr.sakarya.edu.tr
*/

#ifndef TxtReader_HPP
#define TxtReader_HPP

#include <vector>
#include <string>
#include "SayilarListesi.hpp"

class TxtReader {
public:
    TxtReader(const std::string& filename);
    bool ReadNumbers();
    void PrintNumbers() const;
    std::vector<int> GetNumbers() const;
    SayilarListesi sayilarListesi;

private:
    std::string filename_;
    std::vector<int> numbers_;
    
};

#endif