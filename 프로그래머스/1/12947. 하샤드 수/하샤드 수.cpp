#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = false;
    int sum = 0;
    int n = x;
    while(n)
    {
        sum += n % 10;
        n /= 10;
    }
    
    if(x % sum == 0)
    {
        answer = true;
    }
    
    return answer;
}