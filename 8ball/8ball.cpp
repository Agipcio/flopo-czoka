#include <iostream>
#include <random>
#include <vector>
#include <string>
int main()
#fasfas
{
    std::vector<std::string> frazy = {"EMPTY",
                                      "It is certain.",
                                      "It is decidedly so.",
                                      "Without a doubt.",
                                      "Yes - definitely.",
                                      "You may rely on it.",
                                      "As I see it, yes.",
                                      "Most likely.",
                                      "Outlook good.",
                                      "Yes.",
                                      "Signs point to yes.",
                                      "Reply hazy, try again.",
                                      "Ask again later.",
                                      "Better not tell you now.",
                                      "Cannot predict now.",
                                      "Concentrate and ask again.",
                                      "Don't count on it.",
                                      "My reply is no.",
                                      "My sources say no.",
                                      "Outlook not so good.",
                                      "Very doubtful."};
    srand(time(NULL));
    int a = rand() % 19 + 1;
    std::cout << a << "\n";
    std::cout << frazy[a];
}
