#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) 
{
    vector<int> answer;
    for (auto _char : my_string) 
    {
        if (_char >= '0' && _char <= '9')
        {
            int num = _char - 48;
            answer.push_back(num);
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}