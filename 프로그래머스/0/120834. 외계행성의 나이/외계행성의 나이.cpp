#include <vector>
#include <algorithm>

using namespace std;

string solution(int age) 
{
    string answer = "";
    
    while (age > 0)
    {
        answer += (age % 10) + 97;
        age /= 10;
    }
    
    reverse(answer.begin(), answer.end());
    
    return answer;
}
