// tu bedzie pisany pesel essa mam https://pl.spoj.com/problems/JPESEL/
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector<int> pesel;
vector<int> z;
int t = 0;
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

        for (int i = 0; i <= t - 1; i++)
        {

            for (int j = 0; i <= 11; i++)
            {
                z[j] = pesel[i] / 10;

                cout << z;
            }
        }
        break;
    }
}