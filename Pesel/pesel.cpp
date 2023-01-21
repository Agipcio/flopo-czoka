// tu bedzie pisany pesel essa mam https://pl.spoj.com/problems/JPESEL/
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector<int> pesel;
vector<int> z;
int t = 0;
int temp;
int l = 0;
short num;
int y;
int main()
{
    cout << "Ile peseli chcesz sprawdzic (max 100): ";
    cin >> t;
    while (true)
    {
        if (t > 100)
        {
            cout << "Za duzo peseli \n";
            break;
        }

        cout << "Wpisz pesele: \n";
        for (int i = 0; i <= t - 1; i++)
        {
            cin >> y;
            pesel.push_back(y);
        }

        for (int m = 0; m <= 1; m++)
        {
            while (pesel[m] != 0)
            {
                temp = pesel[m] % 10;
                pesel[m] /= 10;
                z[l] = temp;
                l++;
            }
        }
        for (int k = 0; k <= l; k++)
            cout << z[k] << endl;

        // for (int i = 0; i <= t - 1; i++)
        // {
        //     int y = pesel[i];
        //     for (int j = 0; j <= 11; j++)
        //     {
        //         z[j] = y / 10;
        //         cout << z[j];
        //     }
        // }
        break;
    }
}