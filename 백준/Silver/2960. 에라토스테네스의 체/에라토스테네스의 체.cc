#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    int cnt = 0;
    
    cin >> n >> k;
    vector<bool> prime(n + 1, true);
    
    prime[0] = prime[1] = false;
    
    for (int i = 2; i <= n; ++i)
    {
        if (prime[i] == true)
        {
            ++cnt;
            if (cnt == k) cout << i;
            for (int j = i * i; j <= n; j += i)
            {
                if (prime[j] == true)
                {
                    prime[j] = false;
                    ++cnt;
                    if (cnt == k) cout << j;
                }
            }
        }
    }
}