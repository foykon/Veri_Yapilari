#include "Sayi.hpp"
#include <iostream>

Sayi::Sayi() : bas(nullptr) {}

Sayi::~Sayi() {
    while (bas != nullptr) {
        Node* temp = bas;
        bas = bas->next;
        delete temp;
    }
}

//ekleme fonksiyonu
void Sayi::ekle(int value) {
    Node* yeniNode = new Node(value);
    yeniNode->next = bas;
    bas = yeniNode;
}

//silme fonksiyonu
void Sayi::sil(int value) {
    Node* onceki = nullptr;
    Node* simdiki = bas;

    while (simdiki != nullptr && simdiki->data != value) {
        onceki = simdiki;
        simdiki = simdiki->next;
    }

    if (simdiki != nullptr) {
        if (onceki == nullptr) {
            bas = simdiki->next;
        } else {
            onceki->next = simdiki->next;
        }
        delete simdiki;
    }
}

//adres yazdırma fonksiyonu sayilarlistesi.cpp de kullanıyoruz
void Sayi::adresYazdir() const{
    Node* temp = bas;
    while (temp != nullptr) {
        std::cout << "*" << temp << "*  ";
temp = temp->next;
    }

}

//değer yazdırma fonksiyonu sayilarlistesi.cpp de kullanıyoruz
void Sayi::degerYazdir() const{
    Node* temp = bas;
    while (temp != nullptr) {
        std::cout << "*   " << temp->data << "    *  ";
        temp = temp->next;
    }

}

//ilk yazdığımda listeleme yaparken kullandığım eski bir fonksiyon
void Sayi::listele() const {
    Node* temp = bas;
    while (temp != nullptr) {
        
        std::cout << "********" << std::endl;
        std::cout << "*" << temp << "*" << std::endl;
        std::cout << "*--------*" << std::endl;
        std::cout << "*    " << temp->data << "    *" << std::endl;
        std::cout << "********" << std::endl;
        
        
        temp = temp->next;
    }
    std::cout << std::endl;
}


bool Sayi::bosMu() const {
    return bas == nullptr;
}

//basamak değerlerini tersten yazdığı için listeyi tersten tekrar yazdırmak için fonksiyon
void Sayi::tekrarSirala() {
        Node* prev = nullptr;
        Node* current = bas;
        Node* nextNode = nullptr;

        while (current != nullptr) {
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }

        bas = prev;
}

void Sayi::moveOddNumbersToBeginning() {
        if (!bas || !bas->next) {
            return;  // Liste boş veya tek elemanlıysa işlem yapmaya gerek yok
        }

        Node* current = bas;
        Node* oddListHead = nullptr; // 2'ye bölünemeyen sayıların başı
        Node* oddListTail = nullptr; // 2'ye bölünemeyen sayıların sonu

        while (current && current->next) {
            if (current->next->data % 2 != 0) {
                // 2'ye bölünemeyen sayıyı kesip oddList'e ekliyoruz
                if (!oddListHead) {
                    oddListHead = oddListTail = current->next;
                } else {
                    oddListTail->next = current->next;
                    oddListTail = current->next;
                }
                current->next = current->next->next;
            } else {
                current = current->next;
            }
        }

        if (oddListHead) {
            // Eğer 2'ye bölünemeyen sayılar varsa, bunları listenin başına ekliyoruz
            oddListTail->next = bas;
            bas = oddListHead;
        }
    }
