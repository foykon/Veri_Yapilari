#include "sayi.hpp"
#include <iostream>

Sayi::Sayi() : bas(nullptr) {}

Sayi::~Sayi() {
    while (bas != nullptr) {
        Node* temp = bas;
        bas = bas->next;
        delete temp;
    }
}

void Sayi::ekle(int value) {
    Node* yeniNode = new Node(value);
    yeniNode->next = bas;
    bas = yeniNode;
}

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

void Sayi::listele() const {
    Node* temp = bas;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

bool Sayi::bosMu() const {
    return bas == nullptr;
}
