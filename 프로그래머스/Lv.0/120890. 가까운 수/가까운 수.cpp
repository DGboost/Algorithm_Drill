#include <string>
#include <vector>
#include <cstdlib>  

using namespace std;

int solution(vector<int> array, int n) 
{
    int closest = array[0]; 
    int min_diff = abs(n - array[0]); 

    for (int i = 1; i < array.size(); i++) 
    {
        int current_diff = abs(n - array[i]);

        if (current_diff < min_diff || (current_diff == min_diff && array[i] < closest)) 
        {
            closest = array[i];
            min_diff = current_diff;
        }
    }

    return closest;
}
