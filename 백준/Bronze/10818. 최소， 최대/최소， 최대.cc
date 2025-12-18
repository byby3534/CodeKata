/*
 * 문제: 백준 10818번 (최소, 최대)
 * 날짜: 2025-12-18
 * 풀이 시간: 10분
 * 시간 복잡도: O(N)
 * 공간 복잡도: O(1)
 * 핵심 포인트:
 * 1. N이 100만이라 입출력 최적화(ios_base::sync_with_stdio) 와 (cin.tie(false)) 필수.
 * 2. 음수 입력을 고려해 초기값을 INT_MIN, INT_MAX로 설정.
 * 3. 별도 배열 저장 없이 입력과 동시에 비교하여 공간 효율성 높임.
 * 4. min, max 함수를 사용하여 해도 가능하며 vector에 먼저 저장하고 풀기도함. 그럴 경우 공간 복잡도 O(N)으로 변경 됨
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // n개의 정수
    int N;
    int num;
    
    cin >> N;
    cin >> num;
    
    int my_max = num;
    int my_min = num;
    
    for (int i = 0; i < N - 1; ++i)
    {
        cin >> num;
        
        // 함수X
        /*if (my_max < num)
        {
            my_max = num;
        }
        
        if (my_min > num)
        {
            my_min = num;
        }*/
        
        // 함수O
        my_max = max(my_max, num);
        my_min = min(my_min, num);
    }
    
    cout << my_min << " " << my_max;

}
