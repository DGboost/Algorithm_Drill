#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) 
{
    vector<int> temp = emergency;
    
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    
    for (auto& emerge : emergency)
    {
        for (int i = 0; i < temp.size(); ++i)
        {
            if (emerge == temp[i])
            {
                emerge = i + 1;
                break;
            }
        }
    }
    
    return emergency;
}