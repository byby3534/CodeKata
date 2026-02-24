#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char a[26] = {};
	char s[101];
	cin >> s;
	for (int i = 0; i < strlen(s); i++)
	{
		if (a[s[i] - 'a'] == 0) a[s[i] - 'a'] = i + 1;
	}

	for (int i = 0; i < 26; i++)
	{
		if (a[i] == 0) cout << -1 << " ";
		else cout << a[i] - 1 << " ";
	}
}