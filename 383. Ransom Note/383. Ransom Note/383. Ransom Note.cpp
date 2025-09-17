// 383. Ransom Note.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string.h>

using namespace std;

class Solution {
public:
   bool canConstruct(string ransomNote, string magazine) {
        bool check = true;
        double index = 0; 
        for (int i = 0; i < ransomNote.size(); i++)
        {
            if (magazine.find(ransomNote[i]) > 10000)
            {
                check = false;
                break;
            }
            else
            {
                index = magazine.find(ransomNote[i]);
                magazine[index] = 'X';
            }
        }
        return check;
    }
};

int main()
{
    Solution s1;
    string x = "aa";
    string y = "ab";
    cout << s1.canConstruct(x, y) << endl;
}
