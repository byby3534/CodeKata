#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>

#define endl '\n';

using namespace std;

string s;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (true)
	{
		getline(cin, s);

		if (s[0] == '.' && s.size() == 1)
		{
			break;
		}

		stack<char> stk;
		bool flag = true;

		for (char c : s)
		{
			if (c == ']')
			{
				if (stk.size() == 0 || stk.top() == '(')
				{
					flag = false;
					break;
				}
				else
				{
					stk.pop();
				}
			}

			if (c == ')')
			{
				if (stk.size() == 0 || stk.top() == '[')
				{
					flag = false;
					break;
				}
				else
				{
					stk.pop();
				}
			}

			if (c == '(' || c == '[')
			{
				stk.push(c);
			}
		}

		if (flag == true && stk.size() == 0)
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}
}