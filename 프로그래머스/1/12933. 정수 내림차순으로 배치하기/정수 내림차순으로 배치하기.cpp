#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    vector<int> v;
    long long num = n;
    
    while(num)
    {
        v.push_back(num % 10);
        num /= 10;
    }
    
    for(int i = 0; i < v.size() - 1; i++)
    {
        for(int j = 0; j < v.size() - i - 1; j++)
        {
            if(v[j] < v[j + 1])
            {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
    
    for(int i = 0; i < v.size(); i++)
    {
        answer = answer * 10 + v[i];
    }
    
    return answer;
}