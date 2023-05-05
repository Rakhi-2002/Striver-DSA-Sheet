#include <bits/stdc++.h>
using namespace std;


struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};


class Solution 
{
    public:
    
     static bool comparison(Job a, Job b){
        return (a.profit > b.profit);
    }
    
    vector<int> JobScheduling(Job arr[], int n) 
    { 
       
        sort(arr, arr + n, comparison);
        
        int maxi = arr[0].dead;
        int countJob = 0, maxProfit = 0;
        
        for(int i=1; i<n; i++)
            maxi = max(maxi, arr[i].dead);
       
        vector<int> slot(maxi + 1, -1);
        
        for(int i=0; i<n; i++){
            for(int j = arr[i].dead; j>0; j--){
                if(slot[j] == -1)
                    {
                        slot[j] = i;
                        countJob++;
                        maxProfit += arr[i].profit;
                        break;
                    }
            }
        }
        
        return {countJob, maxProfit};
            
    } 
};