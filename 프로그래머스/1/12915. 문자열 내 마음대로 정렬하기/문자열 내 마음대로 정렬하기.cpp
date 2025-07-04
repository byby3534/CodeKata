#include <string>
#include <vector>

using namespace std;

void my_swap(vector<string>& strings, int i)
{
    string tmpStr = strings[i];
    strings[i] = strings[i + 1];
    strings[i + 1] = tmpStr;
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    for (int i = 0; i < strings.size() - 1; i++)
    {
        for (int j = 0; j < strings.size() - i - 1; j++)
        {
            if (strings[j][n] > strings[j + 1][n])
            {
                my_swap(strings, j);
            }
            else if (strings[j][n] == strings[j + 1][n])
            {
                if (strings[j] > strings[j + 1])
                {
                    my_swap(strings, j);
                }
            }
        }
    }
    answer = strings;
    return answer;
}