#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    
    vector<vector<int>> ans;
    int a,b,c;
    sort(nums.begin(), nums.end());
    
    for(a=0; a<nums.size(); a++){
        if(a>0 && nums[a] == nums[a-1])     continue;

        b = a+1;
        c=nums.size() - 1;
    
            while(b<c){
                int sum = long(nums[a]) + long(nums[b]) + long(nums[c]);
                if(sum == 0){
                    
                    vector<int> temp = {nums[a], nums[b], nums[c]};
                    ans.push_back(temp);
                    b++;
                    c--;

                    while(b<c && nums[b] == nums[b-1])      b++;
                    while(b<c && nums[c] == nums[c+1])      c--;      
                }
                else if(sum<0)  b++;
                else    c--;
            }
        
        }
        return ans;
    }
};