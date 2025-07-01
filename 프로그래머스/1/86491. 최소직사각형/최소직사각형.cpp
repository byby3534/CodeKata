#include <string>
#include <vector>

using namespace std;

int my_max(int a, int b)
{
    return a > b ? a : b;
}

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int max_w = 0;
    int max_y = 0;

for (int i = 0; i < sizes.size(); i++)
{
        if (sizes[i][0] > sizes[i][1])
        {
            max_w = my_max(max_w, sizes[i][0]);
            max_y = my_max(max_y, sizes[i][1]);
        }
        else
        {
            max_w = my_max(max_w, sizes[i][1]);
            max_y = my_max(max_y, sizes[i][0]);
        }
    }

    answer = max_w * max_y;
    return answer;
}