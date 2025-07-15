#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    vector<int> month = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    vector<string> day = { "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU" };
    int SumDay = b - 1;
    
    for (int i = 0; i < a - 1; i++)
    {
        SumDay += month[i];
    }
    
    return day[SumDay % 7];
}