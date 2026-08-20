class Solution {
public:
    bool hasCycle(ListNode* head) {
        unordered_set<ListNode*> visited;

        ListNode* current = head;

        while (current != nullptr) {
            if (visited.count(current))
                return true;

            visited.insert(current);
            current = current->next;
        }

        return false;
    }
};