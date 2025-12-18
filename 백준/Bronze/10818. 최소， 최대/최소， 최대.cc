#include <iostream>

using namespace std;

int main() {
	int N, v, max, min;
	int i = 0;
	while (cin >> N)
	{
		int* arr = new int[N];
		for (int i = 0; i < N; i++)
		{
			cin >> v;
			arr[i] = v;
		}

		max = arr[0];
		min = arr[0];
		for (int i = 1; i < N; i++)
		{
			if (max < arr[i])
				max = arr[i];

			if (min > arr[i])
				min = arr[i];
		}
		cout << min << " ";
		cout << max << "\n";

		delete[]arr;
	}
	return 0;
}