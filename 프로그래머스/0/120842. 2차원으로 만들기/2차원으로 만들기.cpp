#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n)
{
    vector<vector<int>> matrix;
    int size = num_list.size();
    
    for (int i = 0; i < size; i += n)
    {
        vector<int> row;
        for (int j = 0; j < n; ++j)
            row.push_back(num_list[i + j]);
        
        matrix.push_back(row);
    }
    
    return matrix;
}