#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

string solution(const string s) 
{
    map<char, int> frequency;
    for (char ch : s)
        ++frequency[ch];

    string result;
    for (auto pair : frequency) 
    {
        if (pair.second == 1) 
            result.push_back(pair.first);
    }

    sort(result.begin(), result.end());
    return result;
}