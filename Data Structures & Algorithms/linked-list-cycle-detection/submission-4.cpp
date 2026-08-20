class Solution {
public:
    bool hasCycle(ListNode* head) {

        unordered_map<ListNode*, bool> seen;

        while (head != nullptr) {

            if (seen[head])
                return true;

            seen[head] = true;
            head = head->next;
        }

        return false;
    }
};