#include <iostream>
#include "funkcje.hpp"
#include <vector>
#include <fstream>
#include <random>
using std::cin;
using std::cout;
using std::ifstream;
using std::string;
using std::vector;
int main()
{
    string codeword;
    codeword = lowering("manga");
    cout << codeword << std::endl;
    greet();
    string answer = underlines(codeword);
    int misses = 0;
    vector<char> incorrect;
    bool guess = false;
    char letter;

    while (answer != codeword && misses < 7)
    {
        display_misses(misses);
        display_status(answer, incorrect);
        cout << "\nPlease enter your guess: ";
        cin >> letter;
        letter = tolower(letter);
        for (unsigned int i = 0; i < codeword.size(); i++)
        {
            if (letter == codeword[i])
            {
                answer[i] = letter;
                guess = true;
            }
        }
        if (guess)
        {
            cout << "\nCorrect!\n";
        }
        else
        {
            cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
            incorrect.push_back(letter);
            misses++;
        }
        guess = false;
    }
    display_misses(misses);
    display_status(answer, incorrect);
    end_game(answer, codeword);
    cout<< "\nthe codeword was: " << codeword;
}