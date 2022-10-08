#include <iostream>
  void swap_num01(int &i, int &j)
  {
    int temp = i;
    i=j;
    j=temp;
  }
int main()
{

  int soda = 99;
  int &pop = soda;
  pop++;
  std::cout << soda << ", " << pop;
  soda++;
  std::cout << std::endl;
  std::cout << soda << ", " << pop;
  std::cout << std::endl;
  std::cout << std::endl;
  int a = 20;
  int &b = a;
  b++;
  std::cout << a << "," << b;
  a++;
  b++;
  a++;
  b++;
  std::cout << "\n"
            << a << "," << b;
  // std::cout << endl;                   _______      ______ 
  // int c = 40;                         |___  / |    |  ____|
  // int d = &c;                            / /| |    | |__   
  // c++;                                  / / | |    |  __|  
  // std::cout << c << "," << d;          / /__| |____| |____ 
  // c++;                                /_____|______|______| 
  // d++;
  // c++;
  // d++;
  // std::cout << "\n"
  //           << c << "," << d;
  std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  int x=100,v=200;
  swap_num01(x,v);
  std::cout<< "X to " << x << "\n";
  std::cout<< "V to " << v << "\n";
}