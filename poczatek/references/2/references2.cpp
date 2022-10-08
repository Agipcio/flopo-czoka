#include <iostream>

int main()
{

    int power = 9000;

    // Create pointer
    int* ptr = nullptr;
    ptr = &power;

    // Print ptr
    std::cout << ptr;
    *ptr = *ptr + 1;
    std::cout << "\n"
              << power;
}