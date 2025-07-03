#include <string>
#include <stdexcept>

using namespace std;

string my_substr(const string& s, int pos, int len)
{
    if (s.length() < pos || pos < 0) throw std::out_of_range("Index out of range");
    
    if (s.length() < pos + len)
    {
        len = s.length() - pos;
    }
    
    string result;
    for (int i = pos; i < pos + len; i++)
    {
        result += s[i];
    }
    return result;
}

string my_replace(const string& str, const string& compareStr, const string& shiftStr)
{
    string result;
    for (int i = 0; i < str.length(); i++)
    {
        if (my_substr(str, i, compareStr.length()) == compareStr) 
        {
            result += shiftStr;
            i += compareStr.length() - 1;
        }
        else
        {
            result += str[i];
        }
    }
    return result;
}

int my_stoi(const string& s)
{
    int result = 0;
    for (char ch : s)
    {
        result = result * 10 + (ch - '0');
    }
    return result;
}

int solution(string s) {
    int answer = 0;
    s = my_replace(s, "zero", "0");
    s = my_replace(s, "one", "1");
    s = my_replace(s, "two", "2");
    s = my_replace(s, "three", "3");
    s = my_replace(s, "four", "4");
    s = my_replace(s, "five", "5");
    s = my_replace(s, "six", "6");
    s = my_replace(s, "seven", "7");
    s = my_replace(s, "eight", "8");
    s = my_replace(s, "nine", "9");
    answer = my_stoi(s);
    return answer;
}