#include <bits/stdc++.h>
using namespace std;

/*
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };


 class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ptr = new ListNode();
        ptr->next = head;
        ListNode* slow = ptr;
        ListNode* fast = ptr;

        for(int i=1; i<=n; ++i){
            fast = fast->next;
        }

        while(fast->next != NULL){
            fast = fast->next;
            slow = slow->next;
        }

        slow->next = slow->next->next;

        return ptr->next;
    }
};
*/