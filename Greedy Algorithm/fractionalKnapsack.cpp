#include <bits/stdc++.h>
using namespace std;


struct Item{
    int value;
    int weight;
};

class Solution
{
    public:
    static bool compare(Item a, Item b){
        double r1 = (double)a.value/ (double)a.weight;
        double r2 = (double)b.value/ (double)b.weight;
        
        return r1 > r2;
    }
    
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr, arr + n, compare);
        
        int currWeight = 0;
        double maxProfit = 0.0;
        
        for(int i=0; i<n; i++){
            
            if(currWeight + arr[i].weight <= W){
                currWeight += arr[i].weight;
                maxProfit += arr[i].value;
                
            }
            
            else {
                int remainWeight = W - currWeight;
                maxProfit += ((double)arr[i].value / (double)arr[i].weight) * (double)remainWeight;
                break;
            }
        }
        return maxProfit;
    }
        
};