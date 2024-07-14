#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> solve(int N, vector<int> &A)
    {
        vector<int> result(2);

        // Create a count array of size N initialized to 0
        int count[N] = {0};

        // Traverse the array A and fill the count array
        for (int i = 0; i < N; ++i)
        {
            count[A[i] - 1]++;
        }

        // Determine the repeating and missing numbers
        for (int i = 0; i < N; ++i)
        {
            if (count[i] == 2)
            {
                result[0] = i + 1; // Repeating number
            }
            else if (count[i] == 0)
            {
                result[1] = i + 1; // Missing number
            }
        }

        return result;
    }
};
