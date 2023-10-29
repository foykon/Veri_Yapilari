#include "SayilarListesi.hpp"
#include <iostream>
#include <iomanip>

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
        std::cout << "##########" << std::endl << std::endl;
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
