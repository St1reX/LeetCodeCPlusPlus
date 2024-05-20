// 1342. Number of Steps to Reduce a Number to Zero.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.


#include <iostream>

class Solution {
public:
    int number;
    int numberOfSteps(int num) {
        for (number = 0; num > 0; number++)
        {
            if (num % 2 == 0)
            {
                num /= 2;
            }
            else 
            {
                num--;
            }
        }
        return number;
    }
};

using namespace std;

int main()
{
    Solution s1;
    cout << s1.numberOfSteps(123);
}
