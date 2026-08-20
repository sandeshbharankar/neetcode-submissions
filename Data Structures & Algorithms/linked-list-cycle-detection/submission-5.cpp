class Solution {
public:
    bool hasCycle(ListNode* head) {

        set<ListNode*> nodes;

        while (head != nullptr) {

            if (nodes.find(head) != nodes.end())
                return true;

            nodes.insert(head);
            head = head->next;
        }

        return false;
    }
};