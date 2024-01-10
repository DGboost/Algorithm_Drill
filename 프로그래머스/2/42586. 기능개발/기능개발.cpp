#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) 
{
    vector<int> answer;
    queue<int> days;
    
    for (int i = 0; i < progresses.size(); ++i)
    {
        int day = (100 - progresses[i] + (speeds[i] - 1)) / speeds[i]; 
        days.push(day);
    }
    
    while (!days.empty())
    {
    	int cnt = 0;
        int day = days.front();
        
        while (!days.empty() && days.front() <= day)
        {
            days.pop();
            ++cnt;
        }
        
        answer.push_back(cnt);
    }
    
    return answer;
}