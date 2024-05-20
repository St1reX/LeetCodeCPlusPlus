// 3. Longest Substring Without Repeating Characters.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int x = 0; 
        int y = 0;
        vector<int> solution;

        for (int i = 0; i < s.length(); i++)
        {

            for (int j = y; j < i; j++)
            {

                if (s[j] == s[i])
                {
                    solution.push_back(x);
                    x = 0;
                    y = i;

                    break;
                }

            }
            x++;
        }
        
        solution.push_back(x);
        for (int i = 0; i < solution.size(); i++)
        {
            if (x < solution[i])
            {
                x = solution[i];
            }
        }

        return x;
    }
};

int main()
{
    Solution s1;
    cout << s1.lengthOfLongestSubstring("dvdf") << endl;
}

