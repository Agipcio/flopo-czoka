#include <iostream>
#include <string>
#include <vector>

void bleep(std::string &a, std::string word)
{
    std::string temp;
    std::string temp2;
    std::vector<std::string> zdanie_vec;
    for (long long unsigned int i = 0; i < a.size(); i++)
    {
        if (a[i] == ' ')
        {
            zdanie_vec.push_back(temp);
            temp.clear();
        }
        else
        {
            temp.push_back(a[i]);
        }
    }
    zdanie_vec.push_back(temp);

    for (int i = 0; i < word.size(); i++)
    {
        temp2 += '*';
    }
    for (int i = 0; i < zdanie_vec.size(); i++)
    {
        if (zdanie_vec[i] == word || zdanie_vec[i] - zdanie_vec[i].back() == word || zdanie_vec[i] - zdanie_vec[i].begin() == word)
        {
            zdanie_vec[i] = temp2;
        }
    }
    a.clear();
    for (int i = 0; i < zdanie_vec.size(); i++)
    {
        a += zdanie_vec[i];
        a += " ";
    }
    std::cout << a;
}

int main()
{
    std::string zdanie = "I sometimes eat broccoli. The interesting thing about broccoli is that there are four interesting things about broccoli. Number One. Nobody knows how to spell it. Number Two. No matter how long you boil it, it's always cold by the time it reaches your plate. Number Three. It's green. #broccoli";
    std::string word = "broccoli";
    bleep(zdanie, word);
}