#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    vector<int> minPress(26, numeric_limits<int>::max());

    for (string key : keymap) {
        for (int i = 0; i < key.size(); i++) {
            int idx = key[i] - 'A';
            minPress[idx] = min(minPress[idx], i + 1);
        }
    }

    for (string target : targets) {
        int total = 0;
        bool possible = true;

        for (char c : target) {
            int idx = c - 'A';
            if (minPress[idx] == numeric_limits<int>::max()) {
                possible = false;
                break;
            }
            total += minPress[idx];
        }

        answer.push_back(possible ? total : -1);
    }

    return answer;
}