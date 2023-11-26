/**
* @file Sayi.hpp
* @description sayi.cpp in arayüzü
* @course 1. Öğretim A grubu
* @assignment 1.Ödev
* @date 29 Oct 2023
* @author  G201210014 Furkan YILDIZ furkan.yildiz12@ogr.sakarya.edu.tr
*/

#ifndef Sayi_HPP
#define Sayi_HPP

class Sayi {
private:
    struct Node {
        int data;
        Node* next;

        Node(int value) : data(value), next(nullptr) {}
    };

    Node* bas;

public:
    Sayi();
    ~Sayi();

    void ekle(int value);
    void sil(int value);
    void listele() const;
    void adresYazdir() const;
    void degerYazdir() const;
    bool bosMu() const;
    void tekrarSirala();
    void moveOddNumbersToBeginning();
};

#endif
