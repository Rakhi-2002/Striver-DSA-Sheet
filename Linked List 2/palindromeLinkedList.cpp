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
    
    //to reverse the right half of linked list
    ListNode* reverseList(ListNode* head){
        ListNode* pre = NULL;
        ListNode* next = NULL;
        while(head != NULL){
            next = head -> next;
            head -> next = pre;
            pre = head;
            head = next;
        }
        return pre;
    }

    //given function
    bool isPalindrome(ListNode* head) {
        
        if(head == NULL || head -> next == NULL) 
        return true;

        ListNode* slow = head;
        ListNode* fast = head;

        //to get the middle of the linked list
        while(fast -> next != NULL && fast -> next -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        slow -> next = reverseList(slow -> next);
        slow = slow -> next;

        while(slow != NULL){
            if(head -> val != slow -> val)
                return false;
            head = head -> next;
            slow = slow -> next;
        }
        return true;
    }
};
*/