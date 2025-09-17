// 1337. The K Weakest Rows in a Matrix.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>> mat, int k) {
        vector<vector<int>> sums(mat.size(), vector<int>(mat[0].size()));
        vector<int> indexes(k);
        for (int i = 0; i < mat.size(); i++)
        {
            for (int j = 0; j < mat[0].size(); j++)
            {
                sums[i][0] += mat[i][j];
            }
            sums[i][1] = i;
        }
        sort(sums.begin(), sums.end());
        for (int i = 0; i < k; i++)
        {
            indexes[i] = (sums[i][1]);
        }
        return indexes;
    }
};



int main()
{
    vector<vector<int>> matrix = {
        {1, 1, 0, 0, 0},
        {1, 1, 1, 1, 0},
        {1, 0, 0, 0, 0},
        {1, 1, 0, 0, 0},
        {1, 1, 1, 1, 1}
    };

    int num = 3;

    Solution s1; 
    s1.kWeakestRows(matrix, num);
}

