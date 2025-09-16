#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    map<int, string> m1;
    map<string, int> m2;
    
    for (int i = 0; i < players.size(); i++)
    {
        m1[i] = players[i];
        m2[players[i]] = i;
    }
    
    for (int i = 0; i < callings.size(); i++)
    {
        int call_index = m2[callings[i]];
        string front_player = m1[call_index - 1];
        m1[call_index - 1] = callings[i];
        m1[call_index] = front_player;
        m2[callings[i]] = call_index - 1;
        m2[front_player] = call_index;        
    }
    for (pair<int,string> player : m1)
    {
        answer.push_back(player.second);
    }
    
    return answer;
}