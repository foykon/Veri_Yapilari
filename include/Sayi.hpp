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
};

#endif
