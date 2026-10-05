/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* dummy = new ListNode(0);
       dummy->next = head;

       ListNode* slow= dummy;
       ListNode* fast= dummy;
       //move fast pointer to n+1 th position 

       for(int i=0;i<=n;i++){
        fast= fast->next;
       }
       //move both pointer till fast meets NULL
       while( fast!= NULL){
        fast=fast->next;
        slow=slow->next;
       }
       ListNode* to_be_deleted= slow->next;
       slow->next= slow->next->next;

       delete to_be_deleted;
       return dummy->next;


       
    }
    
};
