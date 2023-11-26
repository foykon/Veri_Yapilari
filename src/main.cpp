#include <iostream>
#include "TxtReader.hpp"

using namespace std;
int main()
{

   



    int girdi;
    TxtReader reader("veri.txt");
    if (reader.ReadNumbers()) {
        //reader.PrintNumbers();

        // Vektöre erişmek için
        //std::vector<int> numbers = reader.GetNumbers();

     
    }


    SayilarListesi sayilarListesi = reader.sayilarListesi; 
    
    
    
    do{
        cout<<"1. Tek basamaklari Basa Al"<< endl;
        cout<<"2. Basamaklari tersle"<< endl;
        cout<<"3. En buyuk cikar"<< endl;
        cout<<"4. Cikis"<< endl;
        
        cin>>girdi;

        switch (girdi){
        case 1:
            
            
            sayilarListesi.case1();
            sayilarListesi.print();


            break;

        case 2:
            
            sayilarListesi.case2();
            sayilarListesi.print();
            break;    
        

        case 3:
            
            sayilarListesi.case3();
            sayilarListesi.print();
            break;


        case 4:
            cout << "4. Cikis"<< endl;
            break;    
        default:
            cout << "Lütfen gecerli bir deger girin" << endl; 
            break;
        }


    }while(girdi!=4);

}