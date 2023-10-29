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
