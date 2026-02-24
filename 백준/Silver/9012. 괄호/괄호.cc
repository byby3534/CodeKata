#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>

#define endl '\n';

using namespace std;

int t;
string s;
bool check(string s)
{
	stack<int> stk;

	for (char c : s)
	{
		if (c == '(')
		{
			stk.push(c);
		}
		else
		{
			if (stk.size())
			{
				stk.pop();
			}
			else
			{
				return false;
			}
		}
	}
	return stk.empty();
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> t;

	while (t--)
	{
		cin >> s;

		if (check(s))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}