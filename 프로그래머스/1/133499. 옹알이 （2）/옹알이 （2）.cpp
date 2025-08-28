#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    vector<string> sounds = {"aya", "ye", "woo", "ma"};
    string prevSound = "";
    
    // 들어온 babbling크기만 큼 반복
    for (string word : babbling)
    {   
        for (int i = 0; i < sounds.size(); i++)
        {
            if(word.substr(0, sounds[i].size()) == sounds[i] && prevSound != sounds[i])
            {
                word.erase(0, sounds[i].size());
                prevSound = sounds[i];
                i = -1;
            }
        }
        
        if(word.size() == 0) 
        {
            answer++;
        }
        prevSound = "";
    }
    
    return answer;
}