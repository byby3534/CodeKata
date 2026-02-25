#include <iostream>

using namespace std;

int main()
{
	int n, m, maxSum = 0;
	int arr[101];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				int cardSum = arr[i] + arr[j] + arr[k];
				// 3장의 합이 m보다 작거나 같고 max 값보다 클경우만
				if (cardSum <= m && cardSum > maxSum)
				{
					maxSum = cardSum;
				}
			}
		}
	}
	cout << maxSum;
	return 0;
}