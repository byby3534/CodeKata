#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> rank;
    
    for (int i : score)
    {
        rank.push_back(i);
        sort(rank.begin(), rank.end(), greater<>());
        
        if (rank.size() > k)
        {
            rank.erase(rank.begin() + k, rank.end());
        }
        
        answer.push_back(rank[rank.size() - 1]);
    }
    
    return answer;
}