#include <iostream>

using namespace std;

int main()
{
    unsigned int a, b, c;
	cin >> a >> b >> c;
	if (a + b <= c)
	{
		c = a + b - 1;
	}
	else if (a + c <= b)
	{
		b = a + c - 1;
	}
	else if (b + c <= a)
	{
		a = b + c - 1;
	}

	cout << a + b + c;
    return 0;
}