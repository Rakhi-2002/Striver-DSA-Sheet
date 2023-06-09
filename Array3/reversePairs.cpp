#include <bits/stdc++.h>
using namespace std;


class Solution {
public:

     int merge(vector<int>& arr, int l, int m, int r)
    {
        int count = 0;
        int j=m + 1;

        for(int i=l; i<=m; i++){
            while(j<=r && arr[i]>(2LL*arr[j])){
                j++;
            }
            count +=  (j - (m+1));
        }

        vector <int> temp;
        int left = l, right = m + 1;
        while(left<=m && right<=r){
            if(arr[left] <= arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                 temp.push_back(arr[right]);
                 right++;
            }
        }
        
        while(left<=m){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=r){
             temp.push_back(arr[right]);
             right++;
        }
        for(int i=l; i<=r; i++){
            arr[i] = temp[i-l];
        }
        return count;
        
    }
    int mergeSort(vector<int>& arr, int l, int r)
    {
        //base case
        if(l>=r)    
            return 0;
            
        int mid = l + (r-l)/2;
        int invpair;
        invpair = mergeSort(arr, l, mid);     //left half
        invpair += mergeSort(arr, mid + 1, r);     //right half
        invpair += merge(arr, l, mid, r);      //merge sorted array
        return invpair;
    }
    int reversePairs(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
       return mergeSort(nums, l, r);
    }
};