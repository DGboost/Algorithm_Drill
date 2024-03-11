#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) 
{
    int new_numer = (numer1 * denom2) + (numer2 * denom1);
    int new_denom = denom1 * denom2;
    
    int new_gcd = gcd(new_numer, new_denom);
    
    vector<int> answer = {new_numer / new_gcd, new_denom / new_gcd};
    
    return answer;
}