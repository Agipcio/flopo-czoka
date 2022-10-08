#include <iostream>
#include <vector>
#include <string>
using namespace std;
void szkielet(char vec1[3][3],vector<int> pozycja,bool poprawnosc=false)
{
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    if(poprawnosc){
        cout << "\n\nNiepoprawne pole, wybierz ponownie.\n";
        cout << "Zakres pol: A-C 1-3\n";
    }
        if(vec1[pozycja[1]][pozycja[0]]=='X'){
        cout << "ruch gracza: O\n\n";
    }
    else{
        cout << "ruch gracza: X\n\n";
    }
    cout << "    A     B     C   \n";
    cout << "       |     |     \n";
    cout << "1   " << vec1[0][0] << "  |  " << vec1[0][1] << "  |  " << vec1[0][2] << "  \n";
    cout << "  _____|_____|_____\n";
    cout << "       |     |     \n";
    cout << "2   " << vec1[1][0] << "  |  " << vec1[1][1] << "  |  " << vec1[1][2] << "  \n";
    cout << "  _____|_____|_____\n";
    cout << "       |     |     \n";
    cout << "3   " << vec1[2][0] << "  |  " << vec1[2][1] << "  |  " << vec1[2][2] << "  \n";
    cout << "       |     |     \n";

    
}
bool spr_poz(string wejscie,char arr1[3][3],vector<int> pozycja){
    if (wejscie[0] == 'A' || wejscie[0] == 'B' || wejscie[0] == 'C')
    {
        if (wejscie[1] == '1' || wejscie[1] == '2' || wejscie[1] == '3')
        {
            if (arr1[pozycja[1]][pozycja[0]]=='X' || arr1[pozycja[1]][pozycja[0]]=='O'){
                return false;
            }
            else{
            return true;
            }
        }
    }
    return false;
}

bool endgame(char vec1[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        if (vec1[i][0] == vec1[i][1] && vec1[i][1] == vec1[i][2] && vec1[i][1] != '-')
        {
            return true;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (vec1[0][i] == vec1[1][i] && vec1[1][i] == vec1[2][i] && vec1[1][i] != '-')
        {
            return true;
        }
    }
    if (vec1[2][0] == vec1[1][1] && vec1[1][1] == vec1[0][2] && vec1[1][1] != '-')
    {
        return true;
    }
    if (vec1[0][0] == vec1[1][1] && vec1[1][1] == vec1[2][2] && vec1[1][1] != '-')
    {
        return true;
    }
    return false;
}