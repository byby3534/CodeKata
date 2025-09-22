#include <string>
#include <vector>
#include <map>
#include <set>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    map<string, int> report_cnt;
    map<string, set<string>> report_list;
    
    for (string id : report)
    {
        int blank_idx = id.find(' ');
        string from = id.substr(0, blank_idx);
        string to = id.substr(blank_idx);
        
        if (report_list[from].find(to) == report_list[from].end())
        {
            report_cnt[to]++;
            report_list[from].insert(to);
        }
    }
    
    for (string id : id_list)
    {
        int cnt = 0;
        for (string report_id : report_list[id])
        {
            if (report_cnt[report_id] >= k)
            {
                cnt++;
            }
        }
        answer.push_back(cnt);
    }
    
    return answer;
}