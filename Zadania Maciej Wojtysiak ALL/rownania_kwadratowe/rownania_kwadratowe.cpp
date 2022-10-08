#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
cout << setprecision(3);
double a,b,c,delta,p1,p2;
cout<< "podaj a,b,c\n";
cin >> a;
cin >> b;
cin >> c;
delta=pow(b,2)+(-4*a*c);
cout << delta;
if(delta>=0){
    if(delta==0){
        p1 = -b/(2*a);
        cout << "\njedynym pierwiastkiem jest: " << p1;
        return 0;
    }
    p1 = (-b - sqrt(delta))/(2*a);
    p2 = (-b + sqrt(delta))/(2*a);
    cout << "rozwiazaniami sa: " << p1 << " " << p2;
}
else{
    cout <<"brak rozwiazan";
}
}