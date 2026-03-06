#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>

#define endl '\n';

using namespace std;

int n, m;

vector<int> v[10004];
bool visited[10004];
int ret[10004];
int mx = -987654321;

int dfs(int here)
{
	visited[here] = true;

	int token = 1;

	for (int i : v[here])
	{
		if (!visited[i])
		{
			token += dfs(i);
		}
	}

	return token;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		int A, B;
		cin >> A >> B;

		v[B].push_back(A);
	}

	for (int i = 1; i <= n; i++)
	{
		fill(&visited[0], &visited[0] + 10004, 0);
		ret[i] = dfs(i);
		mx = max(mx, ret[i]);
	}

	for (int i = 1; i <= n; i++)
	{
		if (ret[i] == mx)
		{
			cout << i << " ";
		}
	}
}