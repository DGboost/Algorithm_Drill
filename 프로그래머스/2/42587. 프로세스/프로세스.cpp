#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) 
{
    queue<pair<int, int>> q;
    priority_queue<int> pq;
    
    for (int i = 0; i < priorities.size(); ++i)
    {
        q.push({priorities[i], i});
        pq.push(priorities[i]);
    }
    
    int answer = 0;
    while (!q.empty())
    {
        int currentPriority = q.front().first;
        int currentIndex = q.front().second;
        q.pop();
        
        if (currentPriority == pq.top())
        {
            pq.pop();
            ++answer;
            if (currentIndex == location)
                return answer;
        }
        else
            q.push({currentPriority, currentIndex}); 
    }
    return answer;
}