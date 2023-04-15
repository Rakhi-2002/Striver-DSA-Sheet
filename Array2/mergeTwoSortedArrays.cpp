#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i,j;
        for(i=0,j=0; i<nums1.size(),j<nums2.size(); i++){
            if(nums1[i]==0)     //1 2 3 0 0 0
            {
                nums1[i] = nums2[j];    //at nums1=0 put, nums1[i] = 2 5 6
                j++; 
            }
        }
        sort(nums1.begin(), nums1.end());
    }
};