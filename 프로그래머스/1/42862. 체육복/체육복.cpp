#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> result(n, 1);
    
    for (int i : lost) result[i - 1]--;
    for (int i : reserve) result[i - 1]++;
    
    for (int i = 0; i < result.size(); i++)
    {
        if (!result[i])
        {
            if (i > 0 &&result[i - 1] == 2)
            {
                result[i]++;
                result[i - 1]--;
            }
            else if (i < result.size() - 1 && result[i + 1] == 2)
            {
                result[i]++;
                result[i + 1]--;
            }
        }
    }
    
    for (int i : result)
    {
        if (i > 0)
        {
            answer++;
        }
    }
    return answer;
}