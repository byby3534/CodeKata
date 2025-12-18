/*
 * 문제: 백준 1978 (소수 찾기)
 * 날짜: 2025-12-19
 * 풀이 시간: 10분
 * 시간 제한: 2초
 * 시간 복잡도: O(N(sqrt(M)))
 * 공간 복잡도: O(1)
 * 핵심 포인트:
 * 1. N이 100이하라 ios_base::sync_with_stdio(false), cin.tie(NULL)은 필요 없습니다. 그래도 매번 작성하는게 좋은 습관입니다.
 * 2. 2 ~ sqrt(M) 까지만 입렵된 정수를 비교하여 소수인지 판별할 때 시간 복잡도는 (N(sqrt(M))) 입니다.
 * 3. 이는 총 10억 번의 연산이 필요한데 1초에 1억 번정도 연산하기 때문에 최악의 경우 100 * 3.16 = 3160번으로 시간제한을 만족합니다.
 * 4. 그리고 만약 2 ~ sqrt(M) 까지가 아니라 2 ~ M 까지의 경우로 풀어도 100 * 1000 = 100,000번으로 시간제한을 만족합니다.
 */
 
#include <iostream>

using namespace std;

// 시간 복잡도 O(sqrt(M))
bool Prime(int num)
{
    if (num < 2) return false;
    
    // 만약 num의 크기가 
    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    int num;
    int cnt = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; ++i)
    {
        cin >> num;
        if (Prime(num))
        {
            cnt++;
        }
    }
    cout << cnt;
}
