#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> numbers) 
{
    int answer = 1;
    
    if (numbers.empty())
        return 0;
    
    sort(numbers.begin(), numbers.end());
    answer *=  numbers[numbers.size() - 1];
    answer *=  numbers[numbers.size() - 2];
    
    return answer;
}