#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> Matrix1, vector<vector<int>> Matrix2) {
    vector<vector<int>> answer;
    for (int i = 0; i < Matrix1.size(); i++)
    {
        vector<int> arr;
        for (int j = 0; j < Matrix1[i].size(); j++)
        {
            arr.push_back(Matrix1[i][j] + Matrix2[i][j]);
        }
        answer.push_back(arr);
    }
    return answer;
}