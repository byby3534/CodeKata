#include <string>
#include <vector>

using namespace std;

int my_max(int a, int b)
{
    return a > b ? a : b;
}

int my_min(int a, int b)
{
    return a < b ? a : b;
}

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int max_w = 0;
    int max_h = 0;

    for (int i = 0; i < sizes.size(); i++)
    {
        max_w = my_max(max_w, my_max(sizes[i][0], sizes[i][1]));
        max_h = my_max(max_h, my_min(sizes[i][0], sizes[i][1]));
    }
    answer = max_w * max_h;
    return answer;
}