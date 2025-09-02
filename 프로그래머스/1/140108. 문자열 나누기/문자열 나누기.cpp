#include <string>

using namespace std;

int solution(string s) {
    int answer = 0;
    int firstCnt = 0;
    int otherCnt = 0;
    char firstLetter = s[0];
    for (int i = 0; i < s.size(); i++)
    {   
        if (firstLetter == s[i])
        {
            firstCnt++;
        }
        else
        {
            otherCnt++;
        }
        
        if (firstCnt == otherCnt)
        {
            answer++;
            firstCnt = 0;
            otherCnt = 0;
            firstLetter = s[i + 1];   
        }
        
        if (i == s.size() - 1 && firstCnt != otherCnt)
        {
            answer++;
        }
    }
    return answer;
}