#include <string>
#include <vector>

using namespace std;

string solution(string my_string) 
{
    string answer = "";
    for (auto ch : my_string)
    {
        if (ch >= 'a' && ch <= 'z')
            answer += ch - ('a' - 'A');
        else if (ch >= 'A' && ch <= 'Z')
            answer += ch + ('a' - 'A');
    }
    return answer;
}