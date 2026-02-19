#include <iostream>
#include <map>

#define endl '\n';

using namespace std;

int n, m;
map<string, bool> mp;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string name, check;

		cin >> name >> check;

		if (check == "enter")
		{
			mp[name] = true;
		}
		else
		{
			mp[name] = false;
		}
	}

	for (auto iter = mp.rbegin(); iter != mp.rend(); iter++)
	{
		if (iter->second)
		{
			cout << iter->first << endl;
		}
	}
}