// 905. Sort Array By Parity.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int> nums) {
        vector <int> odd; 
        vector <int> even;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }

        even.insert(even.end(), odd.begin(), odd.end());
        return even;

    }
};

int main()
{
    Solution S1;
    
    vector <int> test = {};
}
