#include <iostream>
#include <unordered_map>
#include <sstream>

using namespace std;

string solution(string letter) 
{
    unordered_map<string, char> morse = {
        {".-", 'a'}, {"-...", 'b'}, {"-.-.", 'c'}, {"-..", 'd'},
        {".", 'e'}, {"..-.", 'f'}, {"--.", 'g'}, {"....", 'h'},
        {"..", 'i'}, {".---", 'j'}, {"-.-", 'k'}, {".-..", 'l'},
        {"--", 'm'}, {"-.", 'n'}, {"---", 'o'}, {".--.", 'p'},
        {"--.-", 'q'}, {".-.", 'r'}, {"...", 's'}, {"-", 't'},
        {"..-", 'u'}, {"...-", 'v'}, {".--", 'w'}, {"-..-", 'x'},
        {"-.--", 'y'}, {"--..", 'z'}
    };
    
    stringstream ss(letter);
    string token;
    string answer;
    
    while (getline(ss, token, ' '))
        answer += morse[token];
    
    return answer;
}