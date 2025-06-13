#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    // 정수 배열과 부호 배열 인덱스 접근
    for (int i = 0; i < absolutes.size(); i++)
    {
        if (signs[i]) // 양수
        {
            answer += absolutes[i];
        }
        else // 음수
        {
            answer -= absolutes[i];
        }
    }
    return answer;
}