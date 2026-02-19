#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m, count = 0;
	string s;
	vector<string> v;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		v.push_back(s);
	}

	sort(v.begin(), v.end());
	for (int i = 0; i < m; i++)
	{
		cin >> s;
		if (binary_search(v.begin(), v.end(), s))
		{
			count++;
		}
	}
	cout << count;
	return 0;
}