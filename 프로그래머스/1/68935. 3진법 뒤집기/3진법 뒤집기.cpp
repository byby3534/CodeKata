#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> trit;
    while (0 < n)
    {
        trit.push_back(n % 3);
        n /= 3;
    }
    
    for (int i = 0; i < trit.size(); i++)
    {
        int pow = 1;
        for (int j = i + 1; j < trit.size(); j++)
        {
            pow *= 3;
        }
        answer += trit[i] * pow;
    }
    return answer;
}