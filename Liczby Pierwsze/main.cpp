#include <iostream>
#include <vector>
#include <cmath>
int main()
{      
    std::vector<int> liczby;
    int x, y;
    std::cout<< "podaj 4 pozytywne liczby: \n";
    for(int i=0; i<=3; i++)
        {   
            std::cin>>y;
            liczby.push_back(y);
        }
    for(int j=0; j<=3; j++)
    {
        x=liczby[j];
         bool pierwsza = true;
        for(int i=2; i<=x/2; i++)
        {
          if(x % i == 0)
            {pierwsza = false;
            break;}
         }
         if (pierwsza == true)
            std::cout<<"liczba " <<x<<" jest pierwsza \n";
         if (pierwsza == false)
            std::cout<<"liczba " <<x<<" nie jest pierwsza \n";
    }
    return 0;
}