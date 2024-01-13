#include <string>
#include <vector>

using namespace std;

int factorial(int n)
{
    if (n < 2)
        return 1;
    
    return n * factorial(n - 1);
}

int solution(int n) 
{
    int i = 10;
    while (1)
    {
        if (factorial(i) <= n)
            return i;
 		--i;       
	}
}