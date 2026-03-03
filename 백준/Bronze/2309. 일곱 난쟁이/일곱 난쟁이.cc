#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>

#define endl '\n';

using namespace std;

int n = 9;
vector<int> v;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < n; i++)
	{
		int c;
		cin >> c;
		
		v.push_back(c);
	}

	sort(v.begin(), v.end()); // permutation 함수는 바뀔 인덱스 보다 크거나 작은 값이랑 교체 되기 때문에 정렬을 해줘야 완전탐색이 가능
	while (next_permutation(v.begin(), v.end()))
	{
		int sum = 0;
		for (int i = 0; i < 7; i++)
		{
			sum += v[i];
		}

		if (sum == 100)
		{
			break;
		}
	}

	vector<int> result;

	for (int i = 0; i < 7; i++)
	{
		result.push_back(v[i]);
	}

	sort(result.begin(), result.end());

	for (int i : result)
	{
		cout << i << endl;
	}
}