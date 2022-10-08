#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int l1,l2,wynik,typ;

    cout << "\n\nwybierz dzialanie: (numer) \n 1.dodawanie\n 2.odejmowanie\n 3.mnozenie\n 4.dzielenie\n 5.potegowanie (liczba1 ^ liczba2)\n 6.pierwiastek kwadratowy (z liczby1)\n\n";
    cin >> typ;
    cout<<"podaj liczbe nr1: ";
    cin >> l1;
    cout<< "\n\npodaj liczbe nr2: ";
    cin >> l2;
    if(typ==1){
        wynik = l1 + l2;
        cout << l1 << "+" << l2 << "=" << wynik;
    }
    else if(typ==2){
        wynik = l1-l2;
        cout << l1 << "-" << l2 << "=" << wynik;
    }
    else if(typ==3){
        wynik = l1*l2;
        cout << l1 << "*" << l2 << "=" << wynik;
    }    
    else if(typ==4){
        wynik = l1/l2;
        cout << l1 << "/" << l2 << "=" << wynik;
    }    
    else if(typ==5){
        wynik = pow(l1,l2);
        cout << l1 << "^" << l2 << "=" << wynik;
    }    
    else if(typ==6){
        wynik = sqrt(l1);
        cout << "pierwiastek kwadratowy" << l1 << "=" << wynik;
    }
}