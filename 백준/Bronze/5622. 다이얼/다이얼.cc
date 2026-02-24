#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int sum = 0;
	char ch[16];
	cin >> ch;
	for (int i = 0; i < strlen(ch); i++)
	{
		sum += ((int)ch[i] - 'A') / 3 + 3;
		if (ch[i] == 'S' || ch[i] == 'V' || ch[i] == 'Y' || ch[i] == 'Z')
			sum--;
	}
	cout << sum;
    return 0;
}