#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int trap(vector<int>& height) {

        int n = height.size();
        int leftptr = 0, rightptr = n-1, maxleft = 0, maxright = 0;
        int ans = 0;
        while(leftptr<rightptr){

            if(height[leftptr] <= height[rightptr]){
                
                if(height[leftptr] >= maxleft)
                    maxleft = height[leftptr];
                
                else
                    ans += maxleft - height[leftptr];
                
                leftptr++;

            }

            else{

                if(height[rightptr] >= maxright)
                    maxright = height[rightptr];
                
                else
                    ans += maxright - height[rightptr];
                
                rightptr--;
            }
        }
        return ans;
    }
};