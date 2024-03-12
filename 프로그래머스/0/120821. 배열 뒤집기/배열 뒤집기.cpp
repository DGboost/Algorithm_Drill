#include <vector>
#include <algorithm>

using namespace std;

/*
vector<int> solution(vector<int> num_list) 
{
    for (int i = 0; i < num_list.size() / 2; ++i)
        swap(num_list[i], num_list[num_list.size() - 1 - i]);
        
    return num_list;
}
*/

vector<int> solution(vector<int> num_list)
{
    reverse(num_list.begin(), num_list.end());
    return num_list;
}