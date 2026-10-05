class Solution {
public:
    void reorderList(ListNode* head) {

        if( head== NULL || head->next == NULL){
            return;
        }
        ListNode* slow= head;
        ListNode* fast= head;
        while( fast!= NULL && fast->next != NULL){
            slow= slow->next ;
            fast= fast->next->next;
        }

        //reverse the second halve list 

        ListNode* cur= slow;
        ListNode* prev= NULL;

        while( cur!= NULL){
            ListNode* next_node= cur->next;
            cur->next = prev;
            prev=cur;
            cur=next_node;
        }

        ListNode* first= head;
        ListNode* second = prev;
        while(  second->next!= NULL){
            ListNode* first_next= first ->next;;
            ListNode* second_next= second->next;

            first->next = second;
            second->next = first_next;
            
            first = first_next;
            second= second_next;
        }

    }
};