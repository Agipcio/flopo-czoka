#include <bits/stdc++.h>
using namespace std;

void sortowanie(int tablica[], int liczba_n)
{
    int i, j;
    for (i = 0; i < liczba_n - 1; i++)
 
        for (j = 0; j < liczba_n - i - 1; j++)
            if (tablica[j] > tablica[j + 1])
                swap(tablica[j], tablica[j + 1]);
}
 
void wyswietlanie(int tablica[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << tablica[i] << " ";
    cout << endl;
}

int main()
{
    int tablica[] = {0,0,0};
    cout << "wpisz 3 liczby: \n";
    for(int i=0;i<3;i++){
    cin >> tablica[i];
    }
    int liczba_n = sizeof(tablica) / sizeof(tablica[0]);
    sortowanie(tablica, liczba_n);
    cout << "posortowane liczby: \n";
    wyswietlanie(tablica, liczba_n);
    return 0;
}
