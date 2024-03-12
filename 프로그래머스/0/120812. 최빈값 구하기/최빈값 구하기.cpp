#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int solution(vector<int> array) 
{
    unordered_map<int, int> frequency;
    for (auto number : array)
        frequency[number]++;
    
    int maxFrequency = -1;
    int maxFrequencyNumber = -1;
    bool dupChecker = false;
    
    for (const auto& number : frequency)
    {
        if (number.second == maxFrequency)
            dupChecker = true;
            
        if (number.second > maxFrequency)
        {
            maxFrequencyNumber = number.first;
            maxFrequency = number.second;
            dupChecker = false;
        }
    }
    
    return dupChecker ? -1 : maxFrequencyNumber;
}