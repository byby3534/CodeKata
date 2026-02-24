#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m, num, result = 0;
	vector<int> v;
	cin >> n >> m;
	result += n + m;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		v.push_back(num);
	}
	
	sort(v.begin(), v.end());

	for (int i = 0; i < m; i++)
	{
		cin >> num;
		if (binary_search(v.begin(), v.end(), num))
		{
			result -= 2;
		}
	}

	cout << result;
	return 0;
}