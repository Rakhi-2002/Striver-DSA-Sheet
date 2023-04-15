#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n = matrix.size();      //3
    
        for(int i=0; i<n-1; i++)    //0 1 
        {
            for(int j=i+1; j<n; j++)    // i=0, j= 1 2; i=1, j=2
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};