#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) 
{
    istringstream iss(my_string);
    int answer = 0;
    int number;
    char op = '+';
    
    while (iss >> number)
    {
        if (op == '+')
            answer += number;
        else if (op == '-')
            answer -= number;
        
        iss >> op;
    }
    
    return answer;
}