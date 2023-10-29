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
    newNode->basamakSayisi = 0;
    int tempNumber = value;

    while (tempNumber > 0) {
        tempNumber /= 10;
        newNode->basamakSayisi++;
    }

    tempNumber = value;
    
    for (int i = newNode->basamakSayisi - 1; i >= 0; i--) {
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
    int tempBasamakSayisi=current->basamakSayisi;
    while (current) {
        
        //üst çizgi
        std::cout << "##########  ";
        for (;tempBasamakSayisi>0;tempBasamakSayisi--){
            std::cout << "**********  ";
        }
        std::cout<<std::endl;
        
        //adres değerleri
        tempBasamakSayisi=current->basamakSayisi;
        std::cout << "#" << current << "#  ";
        current->basamakListesi.adresYazdir();
        std::cout<<std::endl;

        // //orta çizgi
         tempBasamakSayisi=current->basamakSayisi;
         std::cout << "#--------#  ";
         for (;tempBasamakSayisi>0;tempBasamakSayisi--){
             std::cout << "*--------*  ";
         }
         std::cout<<std::endl;

        // //sayısal değerler
         tempBasamakSayisi=current->basamakSayisi;
     std::cout << "# " << current->data << " #  " ;
         current->basamakListesi.degerYazdir();
 std::cout<<std::endl;

        
        // //alt çizgi
         tempBasamakSayisi=current->basamakSayisi;
         std::cout << "##########  ";
        for (;tempBasamakSayisi>0;tempBasamakSayisi--){
            std::cout << "**********  ";
        }
        std::cout<<std::endl;        
        
         //current->basamakListesi.listele();
        // std::cout << std::endl;
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

