#include <iostream>
#include <vector>
#include <cmath>

int main()
{      
    std::vector<int> liczby;
    bool pierwsza = true;
    int x, y;
    std::cout<< "podaj 4 liczby:";
    for(int i=0; i<=3; i++)
        {   
            std::cin>>y;
            // std::cout<<std::endl;
            liczby.push_back(y);
        }
    for(int j=0; j==3; j++)
    {
        x=liczby[j];

        for(int i=2; i==x; i++)
        {
          if(x % i == 0)
          pierwsza = false;
            break;
         }
         if (pierwsza)
            std::cout<<"tak \n";
         else
            std::cout<<"nie \n";
    }
    

    return 0;
}