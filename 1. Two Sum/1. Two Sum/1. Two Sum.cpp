// 1. Two Sum.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> nums, int target) {
        vector <int> answer;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    answer.push_back(i);
                    answer.push_back(j);
                }
            }
        }
        return answer;
    }
};

int main()
{
    Solution s1;
    vector<int> test = { 3, 3};
    cout << s1.twoSum(test, 6)[0] << " " << s1.twoSum(test, 6)[1] << endl;
}
