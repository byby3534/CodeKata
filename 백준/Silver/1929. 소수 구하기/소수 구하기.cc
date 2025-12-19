/*
문제: 백준 1929(소수 구하기)
시간 제한: 2초 (약 2억번 연산)
입력 범위: 1 <= M <= N <= 1000000
시간 복잡도: O(Nlog(logN))
공간 복잡도: O(N)
1. O(N(sqrt(M))) 일 경우 1000000 * 1000 = 1000000000 10억번으로 시간 초과남
2. 에라토스테네스의 체를 사용하여 O(N(log(logN))) 약 400만번의 연산을 한다.
3. 에라토스테네스의 체 계산 순서
4. 0과 1은 소수가 아니다.
5. i = 2부터 시작하게 되는데 2는 소수이므로 2의 배수들을 제거한다.
6. i++ 되면서 prime[i]가 소수라면 i의 배수들을 반복해서 false가 된다.
7. 바깥 반복문은의 경우 n의 제곱근 까지만 한다. 왜냐하면 2 * 4나 4 * 2나 똑같기 때문이다.
8. 내부 반복문 j의 초기값은 i * i 로 한다. 왜나하면 i * i 부터 시작해도 이전의 값들은 이미 이전 i 값에 의해서 false로 바뀌었기 떄문이다.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    
    cin >> m >> n;
    vector<bool> prime(n + 1, true);
    
    prime[0] = prime[1] = false;
    
    // 2부터 n 의 제곱근 까지 반복
    for (int i = 2; i * i <= n; ++i)
    {
        // 소수인 숫자의 배수들을 제거거
        if (prime[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
	
    for (int i = m; i <= n; ++i)
    {
        if (prime[i] == true)
        {
            cout << i << '\n';
        }
    }
}
