#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "0";
    for (int i = food.size() - 1; i > 0; i--)
    {
        for (int j = 0; j < food[i] / 2; j++)
        {
            answer.insert(answer.begin(), i + '0');
            answer += i + '0';
        }
    }
    return answer;
}