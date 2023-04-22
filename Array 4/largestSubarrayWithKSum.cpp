#include <bits/stdc++.h>
using namespace std;

//using Hashing(Use of unordered map Data structure) 
//Largest Subarray With Sum Zero

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int, int> mpp;
        int sum = 0, maxLength = 0;
        mpp[0] = -1;
        
        for(int i=0; i<n; i++){
            sum += A[i];
            
            if(mpp.find(sum) != mpp.end())
                maxLength = max(maxLength, i - mpp[sum]);
            else
                mpp[sum] = i;
          
        }
        
        return maxLength;
    }
};