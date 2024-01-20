#include <vector>
#include <algorithm> // max_element 함수를 사용하기 위함

using namespace std;

vector<int> solution(const vector<int> array) 
{
    if (array.empty())
        return {-1, -1};

    auto maxIt = std::max_element(array.begin(), array.end());

    int maxValue = *maxIt;
    int maxIndex = std::distance(array.begin(), maxIt);

    return {maxValue, maxIndex};
}
