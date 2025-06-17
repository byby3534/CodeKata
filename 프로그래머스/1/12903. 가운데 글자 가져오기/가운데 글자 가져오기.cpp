#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int mid = s.size() / 2;
    if (s.size() % 2 == 0)
    {
        answer.push_back(s[mid - 1]);
        answer.push_back(s[mid]);
    }
    else
    {
        answer.push_back(s[mid]);
    }
    return answer;
}