#include <cmath>
#include <bits/stdc++.h>

class Solution
{
public:
    typedef long long ll;

    ll nearestPerfectSquare(long long n)
    {
        ll sqrt_n = sqrt(n);
        if (sqrt_n * sqrt_n == n)
        {
            ll dist1 = abs(((sqrt_n - 1) * (sqrt_n - 1)) - n);
            ll dist2 = abs(((sqrt_n + 1) * (sqrt_n + 1)) - n);
            if (dist2 > dist1)
                return (sqrt_n - 1) * (sqrt_n - 1);
            else
                return (sqrt_n + 1) * (sqrt_n + 1);
        }

        // Nearest perfect squares
        ll near_low = sqrt_n * sqrt_n;
        ll near_high = (sqrt_n + 1) * (sqrt_n + 1);

        // Calculate distances to both squares
        ll dist_low = abs(n - near_low);
        ll dist_high = abs(n - near_high);

        // Return the nearest perfect square
        if (dist_low <= dist_high)
        {
            return near_low;
        }
        else
        {
            return near_high;
        }
    }
};