#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    string x = s;
    int convert_cnt = 0;
    int removeZero_cnt = 0;
    int removeZero_total = 0;
    while (x != "1")
    {
        removeZero_cnt = 0;
        for (int i = 0; i < x.size(); i++)
        {
            if (x[i] == '0')
            {
                removeZero_cnt++;
            }
        }
        removeZero_total += removeZero_cnt;
        int c = x.size() - removeZero_cnt;
        string stmp = "";
        while (c > 0)
        {
            char bit = '0' + (c % 2);
            stmp = bit + stmp;
            c /= 2;
        }
        x = stmp;
        convert_cnt++;
    }
    answer.push_back(convert_cnt);
    answer.push_back(removeZero_total);
    return answer;
}