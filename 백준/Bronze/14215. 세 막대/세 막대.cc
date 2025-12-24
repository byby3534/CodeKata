/*
문제: 백준 14215
시간 제한: 2초
입력 조건: 1 <= a, b, c <= 100
시간 복잡도: O(1)
공간 복잡도: O(1)
1. 가장 큰 수와 나머지 숫자를 구분한다.
2. 나머지 두 수를 더한 값보다 작은지 확인한다.
3. 조건이 성립하면 모든 숫자를 더한 값을 출력한다.
4. 조건이 성립하지 않으면 c = a + b - 1 해주고 다 더하기 때문에 2(a + b) - 1를 출력한다.
5. 이 로직보다 더 적은 메모리 공간을 사용하고 싶다면 max()함수를 사용해서 최대값을 구하는 방식을 사용하면 된다.
6. sort의 경우 배열의 크기가 a, b, c 총 3개로 고정 되기 때문에 sort()함수가 O(logN)이라고 해도 O(1)가 된다.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    vector<int> sides;
    
    for(int i = 0; i < 3; ++i)
    {
        cin >> num;
        sides.push_back(num);
    }
    
    sort(sides.begin(), sides.end());
    
    if (sides[0] + sides[1] > sides[2])
    {
        cout << sides[0] + sides[1] + sides[2];
    }
    else
    {
        cout << (sides[0] + sides[1]) * 2 - 1;
    }
}
