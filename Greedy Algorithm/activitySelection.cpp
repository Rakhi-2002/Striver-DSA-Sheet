//Only Change in this question is that overlapping of previous meet end time and next meet start time is allowed 

#include <bits/stdc++.h>
using namespace std;

struct meeting{
    int s, e, pos;
};

bool static comparator(struct meeting m1, meeting m2){
        
        if(m1.e < m2.e)
            return true;
        
        else if(m1.e > m2.e)
            return false;
        
        else if(m1.pos < m2.pos)
            return true;
        
        return false;
    }       

int maximumActivities(vector<int> &start, vector<int> &finish) {
    
    int n = start.size();
     int count = 0;
        struct meeting meet[n];
        for(int i=0; i<n; i++){
            meet[i].s = start[i];
            meet[i].e = finish[i];
            meet[i].pos = i+1;
        }
        
        sort(meet, meet+n, comparator);
        
        int limit = meet[0].e;
        count++;
        for(int i=1; i<n; i++)
        {   
            //Change at this line(overlapping of two successive meet is allowed)
            if(meet[i].s>=limit){
                limit = meet[i].e;
                count++;
            }
            
        }
        return count;
}