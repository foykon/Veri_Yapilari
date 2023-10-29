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
