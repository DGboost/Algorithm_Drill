#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> array)
{
    unordered_map<int, int> frequency;

    for (int num : array) 
        frequency[num]++;

    int max_freq = 0;
    int mode = -1;

    for (const auto& kv : frequency) 
    {
        if (kv.second > max_freq) 
        {
            max_freq = kv.second;
            mode = kv.first;
        }
    }

    int count = 0;
    for (const auto& kv : frequency) 
    {
        if (kv.second == max_freq) 
        {
            count++;
            if (count > 1)
                return -1;  
        }
    }

    return mode;  
}