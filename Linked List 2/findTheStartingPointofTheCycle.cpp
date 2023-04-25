#include <bits/stdc++.h>
using namespace std;

/*
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };


//1. Brute Force Approach - Using Hashset

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*>s;
        ListNode* currnode=head;
        while(currnode!=NULL){
            if(s.find(currnode)!=s.end()){
                return currnode;
            }else{
                s.insert(currnode);
                currnode=currnode->next;
            }
        }
        return NULL;   
    }
};



//2. Optimized Solution - Use of slow and fast pointers

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        if(head == NULL || head->next == NULL)
            return NULL; 

        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *entry = head;

        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                while(slow != entry){
                    slow = slow->next;
                    entry = entry->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};
*/