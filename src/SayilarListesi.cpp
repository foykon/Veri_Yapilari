#include "SayilarListesi.hpp"
#include <iostream>
#include <iomanip>
#include <cmath>

//kurucu fonksiyon
SayilarListesi::SayilarListesi() {
    head = nullptr;
}

//yıkıcı fonksiyon
SayilarListesi::~SayilarListesi() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

//listeye ekleme yapma fonksiyonu
void SayilarListesi::push(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    
    
    //divide(newNode->data);
    int basamakSayisi = 0;
    int tempNumber = value;

    while (tempNumber > 0) {
        tempNumber /= 10;
        basamakSayisi++;
    }

    tempNumber = value;
    
    for (int i = basamakSayisi - 1; i >= 0; i--) {
        int basamak = (tempNumber / static_cast<int>(pow(10, i))) % 10;
        
        newNode->basamakListesi.ekle(basamak);
    }

    std::cout << std::endl;
    
    newNode->next = head;
    head = newNode;
}

//istenen değerleri yazdıran bir fonksiyon
void SayilarListesi::print() {
    Node* current = head;
    while (current) {
        std::cout << "##########" << std::endl;
        std::cout << "#" << current << "#" << std::endl;
        std::cout << "#--------#" << std::endl;
        std::cout << "#  " << current->data << "  #" << std::endl;
        std::cout << "##########" << std::endl;
        current->basamakListesi.listele();
        std::cout << std::endl;
        current = current->next;
    }
}

//datanın adresini yazdıran eski bir fonksiyon
void SayilarListesi::printAddresses() {
    Node* current = head;
    while (current) {
        std::cout << "Address: " << current << " - Data: " << current->data << std::endl;
        current = current->next;
    }
}


//sayıları basamaklarına bölmek için kullanılan fonksiyon
void SayilarListesi::divide(int number){
    int basamakSayisi = 0;
    int tempNumber = number;

    while (tempNumber > 0) {
        tempNumber /= 10;
        basamakSayisi++;
    }

    tempNumber = number;
    
    for (int i = basamakSayisi - 1; i >= 0; i--) {
        int basamak = (tempNumber / static_cast<int>(pow(10, i))) % 10;
        
    //    basamakListesi.ekle(basamak);
    }

    std::cout << std::endl;
}

