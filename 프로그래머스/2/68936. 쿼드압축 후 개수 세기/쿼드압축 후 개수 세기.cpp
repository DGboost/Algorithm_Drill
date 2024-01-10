#include <string>
#include <vector>

using namespace std;

void compress(int x, int y, int size, vector<vector<int>>& arr, vector<int>& answer)
{
    int start = arr[x][y];
    bool isUniform = true;
    
    for (int i = x; i < (x + size); ++i)
    {
       for (int j = y; j < (y + size); ++j) 
       {
           if (arr[i][j] != start)
           {
               isUniform = false;
               break;
           }
       }
       if (isUniform == false)
           break;
    }
    
    if (isUniform)
        ++answer[start];
    else
    {
        int newSize = size / 2;
        compress(x, y, newSize, arr, answer);
        compress(x + newSize, y, newSize, arr, answer);
        compress(x, y + newSize, newSize, arr, answer);
        compress(x + newSize, y + newSize, newSize, arr, answer);
    }
}

vector<int> solution(vector<vector<int>> arr)
{
    vector<int> answer(2, 0);
    compress(0, 0, arr.size(), arr, answer);
    return answer;
}