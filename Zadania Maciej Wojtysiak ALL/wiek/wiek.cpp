#include <iostream>
using namespace std;

int main(){
int wiek;
cout<< "wpisz wiek: \n";
cin >> wiek;
cout << "\n";
if(wiek <= 12 && wiek > 0){
    cout << "jestes dzieckiem";
}
else if(wiek > 12 && wiek < 18){
    cout << "jestes nastolatkiem";
}
else if(wiek >= 18){
    cout << "jestes dorosly";
}
else{
    cout << "nie mozna miec ujemnego wieku";
}
}