#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(string my_string) 
{
    int answer = 0;
    for (auto _char : my_string)
    {
        if (_char >= '0' && _char <= '9')
            answer += _char - '0';
    }
    return answer;
}