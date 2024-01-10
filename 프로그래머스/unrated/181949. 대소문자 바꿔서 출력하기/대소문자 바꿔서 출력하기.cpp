#include <iostream>
#include <string>

using namespace std;

int main(void) 
{
    string str;
    cin >> str;
    
    for (char c: str) 
        cout << (c <= 'Z' ? char(c + 32) : char(c - 32));
    
    return 0;
}
