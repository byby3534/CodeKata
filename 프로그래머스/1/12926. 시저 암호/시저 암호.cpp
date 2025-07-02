#include <string>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if ('z' == s[j] || 'Z' == s[j])
            {
                s[j] -= 25;
            }
            else if (' ' == s[j])
            {
                
            }
            else
            {
                s[j] += 1;   
            }
        }
    }
    answer = s;
    return answer;
}