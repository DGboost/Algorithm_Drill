#include <string>
#include <vector>
#include <deque>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) 
{
    deque<int> deq(numbers.begin(), numbers.end());
    
    if (direction == "right")
    {
        int temp = deq.back();
        deq.pop_back();
        deq.push_front(temp);
    }
    else
    {
        int temp = deq.front();
        deq.pop_front();
        deq.push_back(temp);
    }
    
    vector<int> answer(deq.begin(), deq.end());
    return answer;
}