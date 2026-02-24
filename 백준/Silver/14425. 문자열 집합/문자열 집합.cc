#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <string>

#define endl '\n';

using namespace std;

int n, m;
unordered_map<string, int> mp;
int cnt;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	// NlogN 삽입 시
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		mp[s]++;
	}

	// MlogN 탐색 시
	for (int i = 0; i < m; i++)
	{
		string s;
		cin >> s;
		if (mp.count(s))
		{
			cnt++;
		}
	}

	cout << cnt;
}