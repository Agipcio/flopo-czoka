#include <vector>
using std::string;
using std::vector;
void display_misses(int misses);
void greet();
void end_game(string answer, string codeword);
string randomizer();
string lowering(string inp);
string underlines(string codeword);
void display_status(string answer, vector<char> incorrect);