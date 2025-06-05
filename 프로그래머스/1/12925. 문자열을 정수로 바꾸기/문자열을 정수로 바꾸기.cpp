#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    for(int i = 0; i < s.size(); i++)
    {
        if(isdigit(s[i]))
        {
            answer = answer * 10 + ((int)s[i] - '0');
        }
    }
    
    // 음수일 경우 
    if(s[0] == '-')
    {
        answer -= answer * 2;
    }
    
    return answer;
}