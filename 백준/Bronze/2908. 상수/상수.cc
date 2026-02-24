#include <iostream>
#include <cstring>

using namespace std;


char* temp(char* num)
{
	int temp;
	temp = num[0];
	num[0] = num[2];
	num[2] = temp;
	return num;
};

int main() {
	char num1[4];
	char num2[4];
	cin >> num1 >> num2;

	for (int i = 2; i > -1; i--)
	{
		if (num1[i] == num2[i])
			continue;

		if (num1[i] > num2[i])
		{
			cout << temp(num1);
			break;
		}
		else
		{
			cout << temp(num2);
			break;
		}
	}
    return 0;
}