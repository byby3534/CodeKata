#include <iostream>
#include <string>

using namespace std;

string my_substr(const string& str, int begin_idx, int end_idx)
{
    if (str.size() <= end_idx)
    {
        cout << "Index Out of Range!";
        return string();
    }
    
    string result;
    for (int i = begin_idx; i <= end_idx; i++)
    {
        result += str[i];
    }
    return result;
}

bool my_isdigit(const char& ch)
{
    return ('0' <= ch && ch <= '9');
}

int my_stoi(const string& s)
{
    int result = 0;
    for (char c : s)
    {
        if (!my_isdigit(c)) throw invalid_argument("숫자가 아님"); // throw로 에러 던짐
        result = result * 10 + (c - '0');
    }
    return result;
}

long long my_stoll(const string& s)
{
    long long result = 0;
    for (char c : s)
    {
        if (!isdigit(c)) throw invalid_argument("숫자가 아님");
        result = result * 10 + (c - '0');
    }
    return result;
}

int solution(string t, string p) {
    int answer = 0;
    for (int i = 0; i <= t.size() - p.size(); i++)
    {
        long long num = my_stoll(my_substr(t, i, i + p.size() - 1));
        if (num <= my_stoll(p))
        {
            answer++;
        }
    }
    return answer;
}