#include <iostream>

using namespace std;

bool arrNum[1000000];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	for (int i = 2; i <= m; i++)
	{
		arrNum[i] = true;
	}

	for (int i = 2; i * i <= m; i++)
	{
		if (arrNum[i])
		{
			for (int j = i * i; j <= m; j += i)
			{
				arrNum[j] = false;
			}
		}
	}

	for (int i = n; i <= m; i++)
	{
		if (arrNum[i])
		{
			cout << i << '\n';
		}
	}
	return 0;
}