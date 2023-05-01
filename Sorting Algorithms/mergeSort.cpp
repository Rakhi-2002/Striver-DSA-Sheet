#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        vector <int> temp;
        // int k=0;
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
        return;
        
    }
    void mergeSort(int arr[], int l, int r)
    {
        //base case
        if(l>=r)    
            return;
            
        int mid = l + (r-l)/2;
        mergeSort(arr, l, mid);     //left half
        mergeSort(arr, mid + 1, r);     //right half
        merge(arr, l, mid, r);      //merge sorted array
        return;
    }
};