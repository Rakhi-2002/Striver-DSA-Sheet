#include <bits/stdc++.h>
using namespace std;


struct meeting{
    int s, e, pos;
};

class Solution
{
    public:
    bool static comparator(struct meeting m1, meeting m2){
        if(m1.e < m2.e)
            return true;
        else if(m1.e > m2.e)
            return false;
        else if(m1.pos < m2.pos)
            return true;
        
        return false;
    }
    
    int maxMeetings(int start[], int end[], int n)
    {
        int count = 0;
        struct meeting meet[n];
        for(int i=0; i<n; i++){
            meet[i].s = start[i];
            meet[i].e = end[i];
            meet[i].pos = i+1;
        }
        
        sort(meet, meet+n, comparator);
        
        int limit = meet[0].e;
        count++;
        for(int i=1; i<n; i++)
        {   
            //end time is less than start time of next meet, i.e., the previous meet is completed 
            //and we can start next meeting, else move to another meeting
            if(meet[i].s>limit){
                limit = meet[i].e;
                count++;
            }
            
        }
        return count;
    }
};