#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,m=l,h=nums.size() - 1;
        while(m<=h){
            switch(nums[m]){
                case 0:
                    swap(nums[l], nums[m]);
                    l++,m++;
                    break;
            
                case 1:
                    m++;
                    break;

                case 2:
                    swap(nums[m], nums[h]);
                    h--;
                    break;
            }
        } 
    }
};