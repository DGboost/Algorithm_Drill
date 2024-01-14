#include <string>
#include <unordered_set>

using namespace std;

string solution(string my_string) 
{
    unordered_set<char> seen;
    string answer = "";

    for (char c : my_string) 
    {
        if (seen.find(c) == seen.end()) 
        {
            seen.insert(c);
            answer += c;
        }
    }

    return answer;
}
