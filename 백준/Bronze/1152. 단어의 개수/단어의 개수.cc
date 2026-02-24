#include <iostream>
#include <cstring>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	char ch[1000001];
	cin.getline(ch, 1000001);

	int count = 1;
	for (int i = 0; i < strlen(ch); i++)
	{
		if (ch[i] == ' ')
			count++;
	}
	if (ch[0] == ' ') 
		count--;
	if (ch[strlen(ch) - 1] == ' ') 
		count--;

	cout << count;
    return 0;
}