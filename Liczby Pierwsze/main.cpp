#include <iostream>
#include <vector>
#include <cmath>

int main()
{   
    int liczba1, liczba2, liczba3, liczba4;
    std::cout<< "podaj 4 liczby \n";
    std::cin>>liczba1;
    // std::cin>>liczba2;
    // std::cin>>liczba3;
    // std::cin>>liczba4;

    for(int i=0; i<=liczba1; i++)
    {
        if(liczba1 % i == 0)
            std::cout<<"nie";

        else
            std::cout<<"tak";
    }


    return 0;
}