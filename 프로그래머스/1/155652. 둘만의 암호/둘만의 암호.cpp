#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    vector<char> alphabet;
    
    for (char i = 'a'; i <= 'z'; i++)
    {
        alphabet.push_back(i);
    }
    
    for (char ch : skip)
    {
        alphabet.erase(find(alphabet.begin(), alphabet.end(), ch));
    }
    
    for (int i = 0; i < s.size(); i++)
    {
        int charIndex = find(alphabet.begin(), alphabet.end(), s[i]) - alphabet.begin();
        int resultIndex = charIndex + index;
        
        if (alphabet.size() <= resultIndex)
        {
            resultIndex %= alphabet.size();
        }
        
        answer += alphabet[resultIndex];
    }
    return answer;
}