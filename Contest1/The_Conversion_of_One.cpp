#include <bits/stdc++.h>
using namespace std;

long long minOperations(long long n)
{
    if (n == 1)
    {
        return 0; // Base case: already at 1
    }

    // If even, dividing by 2 is always the better choice
    if (n % 2 == 0)
    {
        return 1 + minOperations(n / 2);
    }
    else
    {
        // For odd numbers, try both adding and subtracting 1
        // recursively and return the minimum
        return 1 + min(minOperations(n + 1), minOperations(n - 1));
    }
}

int main()
{
    long long n;
    cin >> n;
    cout << minOperations(n) << endl;
    return 0;
}
