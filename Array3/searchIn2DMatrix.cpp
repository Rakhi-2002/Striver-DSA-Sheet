#include <bits/stdc++.h>
using namespace std;

/*
bool searchMatrix(int arr[n][m], int target, int n, int m) {

        // int n = arr[0].size();
        // int m = arr.size();
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                while(j<n){
                    if(arr[i][j] == target)
                        return true;
                    else if(arr[i][j] < target)
                        j++;
                    else
                        j--;
                }
            }
        }
        return false; 
    }

int main(){
    
    int row,col;
    int key;
    cout<<"enter no. of rows and cols ";
    cin>>row>>col;
    cout<<"enter key value ";
    cin>>key;

    int arr[row][col];
    // vector<vector<int>> matrix;
    
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    
    searchMatrix(arr, key, row, col);
    return 0;

} */

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        if(!matrix.size())      return false;

        int n = matrix[0].size();
        int m = matrix.size();
        int low = 0, high = (n*m) - 1, mid;
       
        while(low <= high){
            
            mid = low + (high - low)/2;
            if(matrix[mid/n][mid%n] == target)
                return true;
            else if(matrix[mid/n][mid%n] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return false;
    }
};