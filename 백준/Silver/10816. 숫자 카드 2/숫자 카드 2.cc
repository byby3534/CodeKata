#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, num;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		cout << (upper_bound(v.begin(), v.end(), num) - v.begin()) - (lower_bound(v.begin(), v.end(), num) - v.begin()) << ' ';
	}
	return 0;
}