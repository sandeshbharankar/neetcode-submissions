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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)
        return list2;
        if(list2==NULL)
        return list1;

        ListNode* a = list1;
        ListNode* b =nullptr;
        while(a){
            b=a;

            a= a->next;
        }
        b->next = list2;
        //sorting list1
        if(list1==NULL)
          return list1;

          vector<int> v;
       ListNode* temp = list1;
          while(temp){
            v.push_back(temp->val);
            temp=temp->next;
          }
          sort(v.begin(),v.end());

         temp= list1;
         int i=0;
         while(temp){
            temp->val= v[i];
            i++;
            temp=temp->next;

         }
         return list1;

        
    }
};
