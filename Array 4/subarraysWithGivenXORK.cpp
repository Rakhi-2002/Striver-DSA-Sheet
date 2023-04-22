#include <bits/stdc++.h>
using namespace std;

/*int Solution::solve(vector<int> &A, int B) {
    
    unordered_map<int, int> freq;
    int count = 0, xorr = 0;
    for(auto it: A){
        
        xorr ^= it;
        if(xorr == B)
            count++;
        
        if(freq.find(xorr^B) != freq.end())
            count += freq[xorr^B];
        
        freq[xorr] += 1;   
    }
    return count;
}
*/
