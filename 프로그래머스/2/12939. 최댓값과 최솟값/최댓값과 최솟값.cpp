#include <string>
#include <vector>
#include <limits.h>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    
    istringstream iss(s);
    int num;
    
    while (iss >> num) {  // 공백 기준으로 숫자 읽기
        if (num < minVal) minVal = num;
        if (num > maxVal) maxVal = num;
    }
    
    answer = to_string(minVal) + " " + to_string(maxVal);
    return answer;
}