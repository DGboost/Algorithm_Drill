#include <vector>
#include <cstdlib>

int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

std::vector<int> solution(int num1, int denum1, int num2, int denum2) 
{
    int new_num = (num1 * denum2) + (num2 * denum1);
    int new_denum = denum1 * denum2;

    int new_gcd = gcd(new_num, new_denum);

    std::vector<int> answer = {new_num / new_gcd, new_denum / new_gcd};
    return answer;
}