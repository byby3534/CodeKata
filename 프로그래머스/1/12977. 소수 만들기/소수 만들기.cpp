#include <vector>
#include <cmath>
using namespace std;

int solution(vector<int> nums) 
{
    int PrimeCount = 0;
    bool IsPrime = true;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            for (int k = j + 1; k < nums.size(); k++)
            {
                int sum = nums[i] + nums[j] + nums[k];
                for (int n = 2; n <= sqrt(sum); n++)
                {
                    if (sum % n == 0)
                    {
                        IsPrime = false;
                        break;
                    }
                }
                
                if (IsPrime)
                {
                    PrimeCount++;
                }
                IsPrime = true;
            }
        }
    }
    return PrimeCount;
}