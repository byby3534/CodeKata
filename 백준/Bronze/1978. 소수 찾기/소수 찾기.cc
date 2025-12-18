#include <iostream>

using namespace std;

int main()
{
	int n, x, count = 0;
	cin >> n;
	while (n--)
	{
		cin >> x;

		for (int i = 2; i < x; i++)
		{
			if (x % i == 0)
			{
				count--;
				break;
			}
		}
		if (x > 1)
			count++;
	}
	cout << count;
	return 0;
}