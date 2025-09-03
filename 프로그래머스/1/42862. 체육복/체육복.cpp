#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> uniforms(n, 1);
    
    for (int l : lost) uniforms[l - 1]--;
    for (int r : reserve) uniforms[r - 1]++;
    
    for (int i = 0; i < uniforms.size(); i++)
    {
        if (!uniforms[i])
        {
            if (uniforms[i - 1] == 2 && 0 < i)
            {
                uniforms[i]++;
                uniforms[i - 1]--;
            }
            else if (uniforms[i + 1] == 2 && i < uniforms.size() - 1)
            {
                uniforms[i]++;
                uniforms[i + 1]--;
            }
        }
    }
    
    for (int i : uniforms)
    {
        if (0 < i)
        {
            answer++;
        }
    }
    return answer;
}