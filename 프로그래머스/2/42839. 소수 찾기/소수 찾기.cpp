#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

bool isPrime(int n) 
{
    if (n < 2) 
        return false;
    
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) 
            return false;
    
    return true;
}

void permutate(const string& numbers, set<int>& nums, string current = "", vector<bool> used = {}) 
{
    if (used.empty()) used.resize(numbers.length(), false);

    if (!current.empty())
        nums.insert(stoi(current));

    for (int i = 0; i < numbers.length(); i++) 
    {
        if (!used[i]) 
        {
            used[i] = true;
            permutate(numbers, nums, current + numbers[i], used);
            used[i] = false;
        }
    }
}

int solution(string numbers) 
{
    set<int> nums;
    
    permutate(numbers, nums);
    
    int count = 0;
    for (auto num : nums)
        if (isPrime(num)) count++;
    
    return count;
}