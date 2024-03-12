#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) 
{
    string answer = "";
    
    for (const auto& character : my_string)
        answer += string(n, character);
    
    return answer;
}