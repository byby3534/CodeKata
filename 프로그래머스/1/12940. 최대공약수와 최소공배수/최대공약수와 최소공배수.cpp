#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int r;
    int a = m;
    int b = n;
    while (b != 0) // 작은수가 0이 될 때까지 반복
    {
        r = a % b;
        a = b;
        b = r;
    }
    answer.push_back(a);
    answer.push_back(n * m / a);
    return answer;
}