// 1672. Richest Customer Wealth.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>> accounts) {
       
        int maxWealth = 0;

        for (int i = 0; i < accounts.size(); i++)
        {
            int wealth = 0;
            for (int j = 0; j < accounts[0].size(); j++)
            {
                wealth += accounts[i][j];
            }
            maxWealth = max(wealth, maxWealth);
        }

        return maxWealth;
    }
};

int main()
{
    vector<vector<int>> accounts1 = { {1,5}, {7,3}, {3,5} };
    Solution s1;
    cout << s1.maximumWealth(accounts1) << endl;
}
