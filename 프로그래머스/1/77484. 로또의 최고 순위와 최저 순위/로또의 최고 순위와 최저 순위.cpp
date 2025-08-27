#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int minCnt = 0;
    int maxCnt = 0;
    
    for (int i = 0; i < 6; i++)
    {
        if (lottos[i] == 0)
        {
            maxCnt++;    
        }
        
        for (int j = 0; j < 6; j++)
        {   
            if (lottos[i] == win_nums[j])
            {
                minCnt++;
            }
        }
    }
    maxCnt += minCnt;
    
    int maxRank = maxCnt > 1 ? 7 - maxCnt : 6;
    int minRank = minCnt > 1 ? 7 - minCnt : 6;
    
    answer.push_back(maxRank);
    answer.push_back(minRank);

    return answer;
}