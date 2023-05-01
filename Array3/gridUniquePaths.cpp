#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int uniquePaths(int m, int n) {
        //m - no. of rows, n - no. of columns
        
        int N = n + m - 2;
        int r = m - 1;
        double ans = 1;

        for(int i=1; i<=r; i++)
            ans = ans * (N - r + i)/i;
        
        return int(ans);
    }
};