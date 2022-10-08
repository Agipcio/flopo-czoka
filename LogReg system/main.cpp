#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <cstdio>

int main()
{
    do
    {
        int typ, x = 0;
        std::cout << "zaloguj(1) sie lub zarejestruj(2)\n";
        std::cin >> typ;
        if (typ == 1)
        {
            std::string nazwa, haslo, hsl, nzw;
            std::cout << "podaj nazwe uzytkownika: ";
            std::cin >> nazwa;
            if (std::filesystem::exists(nazwa + ".txt") == false)
            {
                std::cout << "podana nazwa uzytkownika nie istnieje";
                return 0;
            }
            std::cout << "podaj haslo: ";
            std::cin >> haslo;
            std::ifstream passy(nazwa + ".txt");
            while (getline(passy, hsl))
                ;
            passy.close();
            if (haslo == hsl)
            {
                std::cout << "Zalogowano!";
                do
                {
                    if (x == 1)
                    {
                        x = 0;
                        break;
                    }
                    int LogTyp;
                    std::cout << "\nzmien haslo(1) zmien nazwe(2) usun konto(3) wyloguj sie (4)\n";
                    std::cin >> LogTyp;
                    std::fstream passy(nazwa + ".txt");
                    switch (LogTyp)
                    {
                    case 1:
                    {
                        do
                        {
                            std::cout << "podaj stare haslo: ";
                            std::cin >> haslo;
                            if (haslo == hsl)
                            {
                                std::cout << "podaj nowe haslo: ";
                                std::string nowe_haslo;
                                std::cin >> nowe_haslo;
                                haslo = nowe_haslo;
                                passy << nazwa;
                                passy << std::endl;
                                passy << haslo;
                                passy.close();
                                std::cout << "Nowe haslo to: " << nowe_haslo << "\n";
                                break;
                            }
                            std::cout << "stare haslo sie nie zgadza\n";
                        } while (true);
                    }
                    break;
                    case 2:
                    {
                        nzw = nazwa;
                        std::cout << "podaj nowa nazwe uzytkownika: ";
                        std::cin >> nazwa;
                        if (nazwa == nzw)
                        {
                            nazwa = nzw;
                            std::cout << "\nnazwy nie moga byc takie same";
                            break;
                        }
                        passy.close();
                        std::ofstream temporary(nazwa + ".txt");
                        temporary << nazwa;
                        temporary << std::endl;
                        temporary << haslo;
                        temporary.close();
                        std::filesystem::remove(nzw + ".txt");
                    }
                    break;
                    case 3:
                    {
                        char conf;
                        std::cout << "jestes pewien? (Y/N)";
                        std::cin >> conf;
                        if (conf == 'Y')
                        {
                            passy.close();
                            std::filesystem::remove(nazwa + ".txt");
                            std::cout << "konto zostalo usuniete\n";
                            x = 1;
                            break;
                        }
                    }
                    break;
                    case 4:
                    {
                        std::cout << "wychodzenie\n";
                        x = 1;
                        break;
                    }
                    }
                } while (true);
            }
            else
            {
                std::cout << "niepoprawne haslo\n";
            }
            passy.close();
        }
        else if (typ == 2)
        {
            std::string nazwa, haslo, hsl;
            std::cout << "podaj nazwe uzytkownika: ";
            std::cin >> nazwa;
            do
            {
                if (std::filesystem::exists(nazwa + ".txt"))
                {
                    std::cout << "podana nazwa uzytkownika istnieje";
                }
                else
                {
                    std::cout << "podaj haslo: ";
                    std::cin >> haslo;
                    std::cout << "powtorz haslo: ";
                    std::cin >> hsl;
                }

                if (haslo == hsl)
                {
                    std::ofstream passy(nazwa + ".txt");
                    passy << nazwa;
                    passy << std::endl;
                    passy << haslo;
                    passy.close();
                    break;
                }
                else
                {
                    std::cout << "hasla sie nie zgadzaja\n";
                }
            } while (true);
        }
    } while (true);
}