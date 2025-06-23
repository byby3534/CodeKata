#include <string>

using namespace std;

bool solution(string s) {
    
    if (s.size() != 4 && s.size() != 6) return false;
    for (char c : s)
    {
        if (c < '0' || '9' < c)
        {
            return false;
        }
    }
    return true;
}