#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) 
{
    string answer = "";
    int start = code - 1;
    for (int i = start; i < cipher.size(); i += code)
        answer += cipher[i];
    
    return answer;
}