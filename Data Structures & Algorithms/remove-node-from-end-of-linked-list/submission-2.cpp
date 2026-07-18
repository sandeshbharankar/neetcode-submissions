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
        if(head==NULL||head->next==NULL)
        return NULL;
       
        int count=0;
        ListNode* c= head;
        while(c){
            count++;
            c= c->next;
        }
        int m= count-n+1;
        c= head;
        ListNode* prev= NULL;
        ListNode* next= NULL;
        int p=1;
        while(c){
             next= c->next;
            if(p==m){
                if(p==1){
                    c->next=NULL;
                    return next;
                }else{
                c->next=NULL;
                prev->next= next;
                return head;
                }

            }else{
               
                prev= c;
                c=c->next;
                p++;

            }

        }
        return head;
        
    }
};
