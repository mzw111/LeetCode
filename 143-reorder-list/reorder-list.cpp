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
    ListNode* left;
    bool done = false;
    void sol(ListNode* node) {
        if (node == nullptr) {
            return;
        }
        sol(node->next);
        if (done)
            return;
        if (left == node || left->next == node) {
            node->next = nullptr;
            done = true;
            return;
        }
        ListNode* temp = left->next;
        left->next = node;
        node->next = temp;

        left = temp;
    }
    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return;
        }
        left = head;
        done = false;
        sol(head);
    }
};