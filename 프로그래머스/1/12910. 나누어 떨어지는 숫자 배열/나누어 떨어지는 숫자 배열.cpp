#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    vector<int>::iterator itr;

    // 간단하게 배열을 순회할 경우 반복자 접근이 좋아보임
    for (itr = arr.begin(); itr < arr.end(); itr++)
    {
        if (*itr % divisor == 0)
        {
            answer.push_back(*itr);
        }
    }
    
    sort(answer.begin(), answer.end());
    
    if (!answer.capacity())
    {
        answer.push_back(-1);
    }
    
    return answer;
}