#include <iostream>
#include <vector>
#include <fstream>
using std::cout;
using std::string;
using std::vector;
using std::ifstream;
// Define functions


string randomizer(){
  string a;
  srand(time(0));
     ifstream wejscie ("slowa.txt");
     if(wejscie.is_open()){
     int random;
     random = rand() % 101+1;
    for(int i=0;i<=random;i++)
        wejscie >> a;
     }
     wejscie.close();
    return a;
}

void display_status(string answer, vector<char> incorrect){
  cout << "\nIncorrect guesses: ";
        cout<< incorrect.size() << ": ";
        for (int i = incorrect.size() - 1; i >= 0; i--)
        {
            cout << incorrect[i] << ' ';
        }
        cout << "\nCodeword: ";
        for (unsigned int i=0;i <= answer.size();i++)
        {
            cout << answer[i] << ' ';
        }
}

string lowering(string inp){
  for(unsigned int i=0;i<=inp.size();i++){
    inp[i]=tolower(inp[i]);
  }
  return inp;
}

string underlines(string codeword){
  string a="";
  for(int i=codeword.size()-1;i>=0;i--){
        a+="_";
    }
    return a;
}

void greet(){
    cout << "=============\n";
    cout << "UFO: The Game\n";
    cout << "=============\n";
    cout << "Instructions: save your friend from alien abduction\n";
    cout << "by guessing the letters in the codeword.\n";
}

void end_game(string answer,string codeword){
      if(answer==codeword){
        cout<<"\nHooray! You saved the person and earned a medal of honor!";
    }
        else{
            cout<<"\nOh no! The UFO just flew away with another person!\n";
            cout<< "\nthe codeword was: " << codeword;
        }
}

void display_misses(int misses) {

  if (misses == 0 || misses == 1) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              /     \\        (  Send help! ) \n";
    cout << "             /   0   \\      / `-----------'  \n";
    cout << "            /  --|--  \\    /                 \n";
    cout << "           /     |     \\                     \n";
    cout << "          /     / \\     \\                   \n";
    cout << "         /               \\                   \n";

  }
  else if (misses == 2) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              /  0  \\        (  Send help! ) \n";
    cout << "             / --|-- \\      / `-----------'  \n";
    cout << "            /    |    \\    /                 \n";
    cout << "           /    / \\    \\                    \n";
    cout << "          /             \\                    \n";
    cout << "         /               \\                   \n";

  }
  else if (misses == 3) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              /--|--\\        (  Send help! ) \n";
    cout << "             /   |   \\      / `-----------'  \n";
    cout << "            /   / \\   \\    /                \n";
    cout << "           /           \\                     \n";
    cout << "          /             \\                    \n";
    cout << "         /               \\                   \n";

  }
  else if (misses == 3) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              /--|--\\        (  Send help! ) \n";
    cout << "             /   |   \\      / `-----------'  \n";
    cout << "            /   / \\   \\    /                \n";
    cout << "           /           \\                     \n";
    cout << "          /             \\                    \n";
    cout << "         /               \\                   \n";

  }
  else if (misses == 4) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              /  |  \\        (  Send help! ) \n";
    cout << "             /  / \\  \\      / `-----------' \n";
    cout << "            /         \\    /                 \n";
    cout << "           /           \\                     \n";
    cout << "          /             \\                    \n";
    cout << "         /               \\                   \n";

  }
  else if (misses == 5) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              / / \\ \\        (  Send help! )\n";
    cout << "             /       \\      / `-----------'  \n";
    cout << "            /         \\    /                 \n";
    cout << "           /           \\                     \n";
    cout << "          /             \\                    \n";
    cout << "         /               \\                   \n";

  }
  else if (misses == 6) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              /     \\        (  Send help! ) \n";
    cout << "             /       \\      / `-----------'  \n";
    cout << "            /         \\    /                 \n";
    cout << "           /           \\                     \n";
    cout << "          /             \\                    \n";
    cout << "         /               \\                   \n";

  }

}