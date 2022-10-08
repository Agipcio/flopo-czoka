#include <iostream>
int main(){
    int wiek;
    char plec;
    std::cout << "wpisz plec (k)(m): ";
    std::cin >> plec;
    std::cout << "wpisz wiek: ";
    std::cin >> wiek;
    if(wiek<0){
        std::cout << "nie mozna miec ujemnego wieku D: ";
        return 0;
    }
    if(plec=='m'){
        if(wiek > 18){
            std::cout << "\n\njestes pelnoletni";
        }
        else{
            std::cout << "\n\nnie jestes pelnoletni";
        }
    }
    if(plec=='k'){
        if(wiek > 18){
            std::cout << "\n\njestes pelnoletnia";
        }
        else{
            std::cout << "\n\nnie jestes pelnoletnia";
        }
    }
}