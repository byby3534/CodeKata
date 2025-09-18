#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    int w = park[0].size();
    int h = park.size();
    int row, col;
    for (int i = 0; i < park.size(); i++)
    {
        for (int j = 0; j < park[i].size(); j++)
        {
            if (park[i][j] == 'S')
            {
                row = i;
                col = j;
                break;
            }
        }
    }
    
    for (int i = 0; i < routes.size(); i++)
    {
        bool flag = true;
        char op = routes[i][0];
        int n = routes[i][2] - '0';
        if (op == 'E')
        {
            if (col + n < w)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (park[row][col + j] == 'X')
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    col += n;   
                }
            }
        }
        else if (op == 'W')
        {
            if (col - n >= 0)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (park[row][col - j] == 'X')
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    col -= n;   
                }
            }
        }
        else if (op == 'S')
        {
            if (row + n < h)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (park[row + j][col] == 'X')
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    row += n;
                }
            }
        }
        else if (op == 'N')
        {
            if (row - n >= 0)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (park[row - j][col] == 'X')
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    row -= n;
                }
            }
        }
        else
        {
            break;
        }
    }
    
    answer.push_back(row);
    answer.push_back(col);
    return answer;
}