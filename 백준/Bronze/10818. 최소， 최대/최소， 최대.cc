#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // n개의 정수
    int N;
    int num;
    
    cin >> N;
    cin >> num;
    
    int my_max = num;
    int my_min = num;
    
    for (int i = 0; i < N - 1; ++i)
    {
        cin >> num;
        
        // 함수X
        /*if (my_max < num)
        {
            my_max = num;
        }
        
        if (my_min > num)
        {
            my_min = num;
        }*/
        
        // 함수O
        my_max = max(my_max, num);
        my_min = min(my_min, num);
    }
    
    cout << my_min << " " << my_max;
}