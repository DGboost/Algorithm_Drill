#include <string>
#include <iostream>
#include <vector>

using namespace std;

int getGcd(int a, int b) 
{
   if (b == 0) 
       return a;
    return getGcd(b, a % b);
}

int solution(int n) 
{
    int gcd = getGcd(6, n);
    int lcm = (6 / gcd) * (n / gcd) * gcd;
    
    return lcm / 6;
}