#include <string>
#include <algorithm>

using namespace std;

bool compare(char c1, char c2)
{
    return c1 > c2;
}

string solution(string s) {
    string answer = "";
    sort(s.begin(), s.end(), compare);
    answer = s;
    return answer;
}