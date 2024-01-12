#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> numbers, int k) 
{
    int answer = 0;
    queue<int> q;

    for (int num : numbers) 
        q.push(num);

    for (int i = 0; i < k; ++i)
    {
        answer = q.front();
        q.pop();
        q.push(answer);
        q.push(q.front());
        q.pop();
    }
    return answer;
}
