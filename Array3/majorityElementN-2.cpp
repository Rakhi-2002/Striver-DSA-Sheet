#include <bits/stdc++.h>
using namespace std;

//1. Brute Force Approach
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        int count,i,j;

        for(i=0; i<n; i++){
            count = 0;
            for(j=0; j<n; j++){
                if(nums[j] == nums[i])
                    count++;
            }
            if(count>(n/2))
                return nums[i];
        }
        return nums[i];
    }
};

//2. Using Hashing (use of map)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
     map<int,int> mpp;
     for(int i=0 ;i<nums.size(); i++){
         mpp[nums[i]]++;
     }   

     for(auto it: mpp){
         if(it.second>(n/2))
            return it.first;
     }
     return -1;
    }
};


//3. Optimal Solution: Moore's Voting Algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
    
    int count = 0, element;

    for(int i=0; i<nums.size(); i++){
        if(count == 0){
            element = nums[i];
            count = 1;
        }
        else if(nums[i] == element){
            count++;
        }
        else{
            count--;
        }
    }
    return element;
    }
};