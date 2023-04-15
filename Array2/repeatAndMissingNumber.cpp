#include <bits/stdc++.h>
using namespace std;

//using Count Sort(CodeStudio Code)

/*
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	
	pair<int, int> ans;
	vector<int> freqArray(n+1, 0);

	for(int i=0; i<arr.size(); i++){
		freqArray[arr[i]]++;
	}

	for(int i=1; i<=arr.size(); i++){
		if(freqArray[i] == 0){
			ans.first = i;
		}
		else if(freqArray[i]>1){
			ans.second = i;
		}
	}
	
	return ans;
}
*/


//Optimized Solution using XOR property
/*
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    
    int xor1;      //stores missing and repeating elements
    int setBit;
    
    int i,x=0,y=0, n = A.size();
    xor1 = A[0];
    
    for( i=1; i<n; i++)
    {
        xor1 = xor1 ^ A[i];
    }
    
    for( i=1; i<=n; i++)
    {
        xor1 = xor1 ^ i;
    }
    
    setBit = xor1 & ~(xor1 - 1);    //gives rightmost set bit
    
    //to separate missing and repeating element
    for(i=0; i<n; i++){
        
        if(A[i] & setBit)
            x = x ^ A[i];
        
        else
            y = y ^ A[i];
    }
    
    //doing XOR to get final answer
    for(i=1; i<=n; i++){
        
        if(i & setBit)
            x = x ^ i;
        
        else
            y = y ^ i;
    }
    
    int xcount = 0;
    for(i=0; i<n; i++){
        if(A[i]==x)
            xcount++;
    }
    
    if(xcount == 0)
        return {y,x};
    
    return {x,y};
} */
