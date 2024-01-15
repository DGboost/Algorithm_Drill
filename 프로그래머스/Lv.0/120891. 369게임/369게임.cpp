#include <string>
#include <sstream>
#include <vector>

using namespace std;

int solution(int order) 
{
    int answer = 0;
    stringstream ss;
    ss << order;
    string str = ss.str();
    
    for (auto num : str) 
    {
        if (num == '3' || num == '6' || num == '9') 
            ++answer;
    }
    return answer;
}
