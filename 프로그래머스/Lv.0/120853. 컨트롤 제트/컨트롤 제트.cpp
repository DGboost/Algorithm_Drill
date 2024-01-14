#include <iostream>
#include <sstream>
#include <stack>

using namespace std;

int solution(const string s) 
{
    istringstream iss(s);
    stack<int> numbers;
    string token;
    int sum = 0;

    while (iss >> token) 
    {
        if (token == "Z") 
        {
            if (!numbers.empty())
                numbers.pop();
        } 
        else 
        {
            int num = stoi(token);
            numbers.push(num);
        }
    }

    while (!numbers.empty()) 
    {
        sum += numbers.top();
        numbers.pop();
    }

    return sum;
}