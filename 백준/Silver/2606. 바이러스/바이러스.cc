#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>

#define endl '\n';

using namespace std;

int n, m;
vector<int> v[104];
bool visited[104];

int cnt = 0;

void dfs(int here)
{
	visited[here] = true;

	for (int i : v[here])
	{
		if (!visited[i])
		{
			cnt++;
			dfs(i);
		}
	}
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

		v[A].push_back(B);
		v[B].push_back(A);
	}

	dfs(1);

	cout << cnt;
}