#include <vector>

using namespace std;

void my_swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

vector<int> my_sort(vector<int> array, int begin, int end)
{
    vector<int> sub(array.begin() + begin - 1, array.begin() + end);

    for (int i = 0; i < sub.size() - 1; i++)
    {
        for (int j = 0; j < sub.size() - i - 1; j++)
        {
            if (sub[j] > sub[j + 1])
            {
                my_swap(sub[j], sub[j + 1]);
            }
        }
    }
    return sub;
}

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for (vector<int> v : commands)
    {
        vector<int> tmpArr = my_sort(array, v[0], v[1]);
        answer.push_back(tmpArr[v[2] - 1]);
    }
    
    return answer;
}