/*
문제: 최대공약수와 최소공배수 (백준 2069)
시간제한: 1초
시간 복잡도: 단순 반복문 = O(N), 유클리드 호제법 O(logN)
공간 복잡도: gcd1, gcd2 -> O(1) / gcd3 -> O(logN)
1. gcd3에서 a와 b 대소 구분을 안해도 되는 이유는 a > b일 때 a % b = a이고 그러면 gcd3(b, a)가 되면서 대소 구분을 따로 안해도 됨
2. 재귀호출도 스택 메모리 공간에 쌓이므로 O(logN) 임
3. C++ 17부터 #include <numeric>을 선언하여 gcd(), lcm() 사용 가능
*/
#include <iostream>
#include <numeric>

using namespace std;

// 단순 반복문
int gcd1(int a, int b)
{
    int n = a > b ? b : a;
    
    for (int i = n; i > 0; --i)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }
    }
    return 0;
}

// 반복문 유클리드 호제법
int gcd2(int a, int b)
{
    while (b)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    
    return a;
}

// 재귀함수 유클리드 호제법
int gcd3(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd3(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b;
    cin >> a >> b;
    
    // 커스텀 함수
    // cout << gcd3(a, b) << '\n';
    // cout << (b / gcd3(a, b)) * a << '\n';
    
    // 표준 함수
    int gcd_val = gcd(a, b);
    int lcm_val = lcm(a, b);
    cout << gcd_val << '\n';
    cout << lcm_val;
    return 0;
}