#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>> ans;       //stores all required pairs of element 
        sort(nums.begin(), nums.end());
        
        for(int a=0; a<nums.size(); a++){
            //to avoid duplicate pairs 
            if(a>0 && nums[a] == nums[a-1])     continue;   //if next a is same as previous a then skip
            for(int b = a+1; b<nums.size(); b++){
                //to avoid duplicate pairs 
                if(b > (a+1) && nums[b] == nums[b-1])     continue;    //if next b is same as last b then skip

                int c = b+1, d = nums.size()-1;
                while(c<d){
                    long long sum = nums[a];
                    sum += nums[b];
                    sum += nums[c];
                    sum += nums[d];

                    if(sum == target){
                        //storing pairs into 1d array
                        vector<int> temp = {nums[a], nums[b], nums[c], nums[d]};

                        //store into list of required pairs 
                        ans.push_back(temp);
                        c++,d--;
                    while(c<d && nums[c] == nums[c-1])  c++;    //to avoid duplicate quadruplets
                    while(c<d && nums[d] == nums[d+1])  d--;    //to avoid duplicate quadruplets
                    }

                    // if sum != target then, below two conditions runs
                    else if(sum<target)     c++;
                    else    d--;
                }
            }
        }
        return ans;
    }
};