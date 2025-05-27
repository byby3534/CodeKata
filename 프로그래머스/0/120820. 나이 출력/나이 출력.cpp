#include <string>
#include <vector>

using namespace std;

int solution(int age) {
    int answer = 0;
    int curYear = 2022;
    answer = curYear - age + 1;
    return answer;
}