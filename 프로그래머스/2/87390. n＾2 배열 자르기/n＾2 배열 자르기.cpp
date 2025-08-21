#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    
    for (long long idx = left; idx <= right; idx++)
    {
        long long i = idx / n;
        long long j = idx % n;
        
        int value = max(i, j) + 1;
        answer.push_back(value);
    }
    return answer;
}