#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for(int i = 2; i < n; i++)
    {
        if(n % i == 1)
        {
            answer = i;
            return answer; // 최소 값이기 때문에 찾으면 반환하여 코드 종료
        }
    }
}