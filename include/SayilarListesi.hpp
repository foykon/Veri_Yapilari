/**
* @file SAyilarListesi.hpp
* @description SAyilarListesi.cpp in arayüzü
* @course 1. Öğretim A grubu
* @assignment 1.Ödev
* @date 29 Oct 2023
* @author  G201210014 Furkan YILDIZ furkan.yildiz12@ogr.sakarya.edu.tr
*/

#ifndef SayilarListesi_HPP
#define SayilarListesi_HPP
#include "Sayi.hpp"

class SayilarListesi {
public:
    SayilarListesi();
    ~SayilarListesi();

    void push(int value);
    void print();
    void printAddresses();
    void divide(int number);
    void reverse();
    void case2();
    void case1();
    void case3();
private:
    
    struct Node {
        int data;
        Node* next;
        Sayi basamakListesi;
        int basamakSayisi;
        
    };
    Node* head;
    
    
};

#endif 
