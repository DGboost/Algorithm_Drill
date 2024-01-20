#include <string>
#include <vector>

using namespace std;

int solution(string message) 
{
    int answer = 0;
    while (message[answer])
        ++answer;
    
    return answer * 2;
}