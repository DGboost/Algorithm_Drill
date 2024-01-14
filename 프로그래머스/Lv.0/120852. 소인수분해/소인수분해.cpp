#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) 
{
    vector<int> answer;
    
    for (int i = 2; i * i <= n; ++i) 
    {
        while (n % i == 0) 
        {
            if (answer.empty() || answer.back() != i) 
                answer.push_back(i);
            n /= i;
        }
    }
    if (n > 1) 
        answer.push_back(n);
    
    return answer;
}	