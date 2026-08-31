/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:

    // creating new linked list with same values
    Node* NewLinkedList(Node* list) {

        if(list == NULL) {
            return NULL;
        }

        Node* ptr = list;

        Node* dummy = new Node(0);
        Node* head2 = dummy;
        Node* current = dummy;
        Node* prev = dummy;

        while(list != NULL) {

            current = new Node(ptr->val);

            current->next = NULL;
            current->random = NULL;

            prev->next = current;

            // MODIFICATION 1:
            // ptr++ and prev++ are WRONG for linked lists.
            // We must move using ->next.
            ptr = ptr->next;
            prev = prev->next;

            // MODIFICATION 2:
            // Move list as well, because your while condition
            // is based on list.
            list = list->next;
        }

        return head2->next;
    }


    // MODIFICATION 3:
    // Instead of returning random's VALUE,
    // we return the INDEX of the random node.
    int findrandom(Node* head, Node* originalHead) {

        // random can be NULL
        if(head->random == NULL) {
            return -1;
        }

        Node* ptr = originalHead;
        int index = 0;

        while(ptr != head->random) {
            ptr = ptr->next;
            index++;
        }

        return index;
    }


    // MODIFICATION 4:
    // Instead of searching by VALUE, search by INDEX.
    // This avoids the duplicate-value problem.
    Node* targetnode(Node* list, int target) {

        // random == NULL
        if(target == -1) {
            return NULL;
        }

        int index = 0;

        while(list != NULL) {

            if(index == target) {
                return list;
            }

            list = list->next;
            index++;
        }

        return NULL;
    }


    Node* copyRandomList(Node* head) {

        Node* head2 = NewLinkedList(head);

        // MODIFICATION 5:
        // Save the beginning of the copied list.
        // Otherwise head2 will move to NULL and we lose the answer.
        Node* answer = head2;

        // We need the original head to calculate random index.
        Node* originalHead = head;

        while(head != NULL) {

            // MODIFICATION 6:
            // Find the INDEX of head's random node.
            int target = findrandom(head, originalHead);

            // Find the corresponding node in the copied list.
            Node* r = targetnode(answer, target);

            // Set random pointer of copied node.
            head2->random = r;

            head = head->next;
            head2 = head2->next;
        }

        // MODIFICATION 7:
        // Return the saved beginning of the copied list,
        // not head2 because head2 is now NULL.
        return answer;
    }
};