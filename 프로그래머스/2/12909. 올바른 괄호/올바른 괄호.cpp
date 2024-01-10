#include <string>

using namespace std;

bool solution(string s) 
{
    int balance = 0;

    for (char c : s) 
    {
        if (c == '(')
            balance++;
        else 
        {
            balance--;
            if (balance < 0)
                return false; 
        }
    }
    
    return balance == 0;
}
