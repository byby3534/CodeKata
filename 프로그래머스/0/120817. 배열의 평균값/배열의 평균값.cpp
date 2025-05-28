#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    int vecLength = numbers.size();
    for(int i = 0; i < vecLength; i++)
    {
        answer += numbers[i];
    }
    return answer / vecLength;
}