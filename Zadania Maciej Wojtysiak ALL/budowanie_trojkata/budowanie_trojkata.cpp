#include <iostream>
using namespace std;

int main(){
int a,b,c;
cout<< "podaj a,b,c\n";
cin >> a;
cin >> b;
cin >> c;
if(a>c+b||b>a+c||c>b+a){
    cout<< "da sie zbudowac trojkat";
}
else{
    cout << "nie da sie zbudowac trojkata";
}
}