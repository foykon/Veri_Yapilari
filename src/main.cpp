#include <iostream>

using namespace std;
int main()
{
    int girdi;
    do{
        cout<<"1. Tek basamaklari Basa Al"<< endl;
        cout<<"2. Basamaklari tersle"<< endl;
        cout<<"3. En buyuk cikar"<< endl;
        cout<<"4. Cikis"<< endl;
        
        cin>>girdi;

        switch (girdi){
        case 1:
            cout << "1. Tek basamaklari Basa Al"<< endl;
            break;

        case 2:
            cout << "2. Basamaklari tersle"<< endl;
            break;    
        

        case 3:
            cout << "3. En buyuk cikar"<< endl;
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