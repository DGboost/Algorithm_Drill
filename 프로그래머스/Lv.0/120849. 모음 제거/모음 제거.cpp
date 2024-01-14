#include <iostream>
#include <string>

using namespace std;

string solution(const string my_string) 
{
    string result;
    
    for (char ch : my_string) 
    {
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') 
            result += ch;
    }
    return result;
}