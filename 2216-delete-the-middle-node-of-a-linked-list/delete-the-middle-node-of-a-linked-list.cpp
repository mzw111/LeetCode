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
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) {
            return nullptr;
        }
        ListNode* current = head;
        int count = 0;
        while (current) {
            count++;
            current = current->next;
        }
        current = head;
        ListNode* newnode = head;
        for (int i = 0; i < count / 2 - 1; i++) {
            newnode = newnode->next;
        }
        newnode->next = newnode->next->next;
        return head;
    }

};