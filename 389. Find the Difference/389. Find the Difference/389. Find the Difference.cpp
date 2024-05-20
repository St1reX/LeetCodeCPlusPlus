// 389. Find the Difference.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cstring>

using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        for (int i = 0; i < t.length(); i++)
        {
            if (s.find(t[i]) == string::npos)
            {
                return t[i];
            }
            else
            {
                s[s.find(t[i])] = '0';
            }
        }
        return 0;
    }
};

int main()
{
    Solution s1;

    cout << s1.findTheDifference("a", "aa") << endl;
}

