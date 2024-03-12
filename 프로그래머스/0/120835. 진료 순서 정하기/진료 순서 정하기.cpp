#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) 
{
    vector<int> answer;
    vector<int> temp = emergency;
    unordered_map<int, int> hash;
    
    // emergency copy, sort
    sort(temp.begin(), temp.end(), greater<>());
    
    // hash order set
    for (int i = 0; i < temp.size(); ++i)
        hash[temp[i]] = i + 1;
    
    for (auto& emerge : emergency)
        answer.push_back(hash[emerge]);
        
    return answer;
}