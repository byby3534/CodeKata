#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    int xy[4] = {51,51,0,0};
    for(int i=0;i<wallpaper.size();i++)
    {
        for(int j=0;j<wallpaper[i].size();j++)
        {
            if(wallpaper[i][j] == '#')// 파일일때
            {
                xy[0] = min(xy[0], i);// lux
                xy[1] = min(xy[1], j);// luy
                xy[2] = max(xy[2], i+1);// rdx
                xy[3] = max(xy[3], j+1);// rdy
            }
        }
    }
    for(int i=0;i<4;i++) answer.push_back(xy[i]);
    return answer;
}