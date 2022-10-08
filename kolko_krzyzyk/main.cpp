#include <iostream>
#include "funkcje.hpp"
#include <vector>
#include <string>
using namespace std;

int main()
{
    char X_O[3][3] =
        {
            {'-', '-', '-'},
            {'-', '-', '-'},
            {'-', '-', '-'}};
    int cc = 0;
    char Current_char = 'X';
    string wejscie;
    vector<int> pozycja = {0,0};
    bool poprawnosc=true;
    szkielet(X_O,pozycja);
    for (int ruchy = 0; ruchy < 9;)
    {

        cout << "\nwybierz pole: ";
        cin >> wejscie;
        wejscie[0] = toupper(wejscie[0]);
        if (wejscie[0] == 'A')
            {
            pozycja[0]=0;
            pozycja[1]=(wejscie[1]-'0')-1;
            }
            else if (wejscie[0] == 'B')
            {
            pozycja[0]=1;
            pozycja[1]=(wejscie[1]-'0')-1;
            }
            else if (wejscie[0] == 'C')
            {
            pozycja[0]=2;
            pozycja[1]=(wejscie[1]-'0')-1;
            }
        if (spr_poz(wejscie,X_O,pozycja))
        {
            if (cc % 2 == 0)
            {
                Current_char = 'X';
                cc++;
            }
            else
            {
                Current_char = 'O';
                cc++;
            }


            X_O[pozycja[1]][pozycja[0]] = Current_char;
            szkielet(X_O,pozycja);
            
            if (endgame(X_O)){
                cout << "Wygral gracz: " << Current_char;
                return 0;
            }
        }
        else
        {
            szkielet(X_O,pozycja,poprawnosc);
        }
    }
}