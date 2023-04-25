#include <bits/stdc++.h>
using namespace std;

/*
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        //if either of lists is null then, we can't have any intersection node
        if(headA == NULL || headB == NULL)
            return NULL;

        ListNode *d1 = headA;
        ListNode *d2 = headB;

        //running the loop until we get intersection node or get null ptr
        while(d1 != d2){
            d1 = d1 == NULL? headB : d1->next;
            d2 = d2 == NULL? headA : d2->next;
        }
        return d1;
    }
};
*/