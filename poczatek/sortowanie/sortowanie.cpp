#include <iostream>
int main()
{
    int arr[10], temp, size, powtorzenia;
    size = *(&arr + 1) - arr;
    std::cout << "podaj 10 liczb\n";
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << ", ";
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                powtorzenia++;
            }
        }
    }
    std::cout<< "\n" << powtorzenia << "<- ilosc powtorzen";
    std::cout<< "\n" << "sorted array: \n";
    for (int i = 0; i < size; i++){
        std::cout << arr[i] << "\n";
    }
}