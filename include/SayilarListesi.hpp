#ifndef SayilarListesi_HPP
#define SayilarListesi_HPP

class SayilarListesi {
public:
    SayilarListesi();
    ~SayilarListesi();

    void push(int value);
    void print();
    void printAddresses();

private:
    struct Node {
        int data;
        Node* next;
    };

    Node* head;
};

#endif 
