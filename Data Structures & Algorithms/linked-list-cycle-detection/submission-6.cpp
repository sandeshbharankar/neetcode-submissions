class Solution {
public:
    bool hasCycle(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head;

        for (; fast != nullptr && fast->next != nullptr;
             fast = fast->next->next) {

            slow = slow->next;

            if (slow == fast)
                return true;
        }

        return false;
    }
};