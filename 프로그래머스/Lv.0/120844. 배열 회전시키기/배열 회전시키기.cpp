#include <vector>
#include <string>
#include <algorithm> 

using namespace std;

vector<int> solution(vector<int> numbers, string direction) 
{
    if (numbers.empty())
        return numbers;

    if (direction == "right") 
        rotate(numbers.begin(), numbers.end() - 1, numbers.end());
    else if (direction == "left") 
        rotate(numbers.begin(), numbers.begin() + 1, numbers.end());

    return numbers;
}