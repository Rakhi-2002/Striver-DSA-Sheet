#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 0)    return 0;   //if array is empty, size is 0
        int longest = 1, count = 0;
        unordered_set<int> s;
        
        //inserting elements into the set
        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
        }
        int x;  //to store the element

        //iterate over the set to get the longest consecutive sequence
        for(auto it : s){

            //if for an element 'it' its previous is not found, start sequence from itself
            if(s.find(it - 1) == s.end()){
                count = 1;
                x = it;
            }

            //if next consecutive element is found for current element then, 
            //increment count value and the sequence 
            while(s.find(x+1) != s.end()){
                count++;
                x++;
            }
            longest = max(count, longest);
        }
    return longest;
    }
};