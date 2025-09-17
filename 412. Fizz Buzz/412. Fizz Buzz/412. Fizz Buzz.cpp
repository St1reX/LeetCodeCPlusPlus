// 412. Fizz Buzz.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {

        vector<string> Answer;

        for (int i = 1; i < n+1; i++)
        {
            if (i % 3 == 0)
            {
                if (i % 5 == 0)
                {
                    Answer.push_back("FizzBuzz");
                }
                else
                {
                    Answer.push_back("Fizz");
                }
            }
            else if (i % 5 == 0)
            {
                Answer.push_back("Buzz");
            }
            else
            {
                Answer.push_back(to_string(i));
            }
        }
        return Answer;
    }
};

int main()
{

}
