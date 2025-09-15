#include <string>
#include <vector>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    
    int todayYear = stoi(today.substr(0, 4));
    int todayMonth = stoi(today.substr(5, 2));
    int todayDay = stoi(today.substr(8));
    
    int term[20] = {};
    for (int i = 0; i < terms.size(); i++)
    {
        char term_ch = terms[i][0];
        int date = stoi(terms[i].substr(2));
        
        term[term_ch - 'A'] = date * 28;
    }
    
    long total = todayYear * 12 * 28 + todayMonth * 28 + todayDay;
    
    for(int i=0; i<privacies.size(); i++) {
        
        int tmpYear = stoi(privacies[i].substr(0, 4));
        int tmpMonth = stoi(privacies[i].substr(5, 2));
        int tmpDay = stoi(privacies[i].substr(8));
        
        char termChar = privacies[i][11];
        
        long tmpTotal = tmpYear * 12 * 28 + tmpMonth * 28 + tmpDay;
        
        long diff = total - tmpTotal;
        
        if(diff >= term[termChar-'A']) answer.push_back(i + 1);
        else continue; 
    }
    
    return answer;
}