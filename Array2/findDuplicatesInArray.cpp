#include <bits/stdc++.h>
using namespace std;

//Brute Force Approach
/*
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans = 0,i;
        sort(nums.begin(), nums.end());
        if(nums.size()==1)  
            return nums[0];

        for(i=0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
            ans^= nums[i];
            ans^=i;
        }
        return ans;
    }
*/
//2. Optimized Approach (Use of LinkedList Cycle Method)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       
         int s=nums[0],f=nums[0];
        do{
            s = nums[s];
            f = nums[nums[f]];
        }while(s!=f);

        f = nums[0];

        while(s!=f){
            s = nums[s];
            f = nums[f];
        }
        return f;
        }
};

