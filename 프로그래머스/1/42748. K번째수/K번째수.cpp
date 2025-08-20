#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> tmpArr;
    for (vector<int> command : commands)
    {
        tmpArr.clear();
        // 커맨드의 범위 기반으로 임시 배열에 삽입
        for (int i = command[0] - 1; i < command[1]; i++)
        {
            tmpArr.push_back(array[i]);
        }
        
        sort(tmpArr.begin(), tmpArr.end());
        answer.push_back(tmpArr[command[2] - 1]);
    }
    return answer;
}