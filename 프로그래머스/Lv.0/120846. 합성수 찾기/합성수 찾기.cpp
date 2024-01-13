#include <iostream>
#include <cmath>

using namespace std;

bool is_composite(int x) 
{
    if (x < 4) 
        return false;  
    
    for (int i = 2; i <= sqrt(x); ++i) 
    {
        if (x % i == 0) 
            return true;
    }
    return false;
}

int solution(int n) 
{
    int answer = 0;
    for (int i = 2; i <= n; ++i) 
    {
        if (is_composite(i)) 
            ++answer;
    }
    return answer;
}