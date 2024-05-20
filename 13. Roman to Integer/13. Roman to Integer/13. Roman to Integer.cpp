// 13. Roman to Integer.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <map>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int result = 0;

        map<char, int> Roman;
        Roman['I'] = 1;
        Roman['V'] = 5;
        Roman['X'] = 10;
        Roman['L'] = 50;
        Roman['C'] = 100;
        Roman['D'] = 500;
        Roman['M'] = 1000;

        for (int i = 0; i < s.size(); i++)
        {
            if (Roman[s[i]] < Roman[s[i + 1]])
            {
                result += (Roman[s[i + 1]] - Roman[s[i]]);
                i++;
            }
            else
            {
                result += Roman[s[i]];
            }
        }
        return result;
    }
};

int main()
{
    Solution s1;
    cout << s1.romanToInt("XXXIX") << endl;

}

