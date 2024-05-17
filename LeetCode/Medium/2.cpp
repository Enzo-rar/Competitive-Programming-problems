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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode;
        ListNode* aux = ans;
        int offset = 0;
        while(l1 != NULL && l2 != NULL){
            int i = l1->val + l2->val + offset;
            offset = 0;
            if(i >= 10) {offset++; i -= 10;}
            aux->next = new ListNode(i);
            aux = aux->next;
            l1 = l1->next; l2 = l2->next;
        }
        while(l1 != NULL){
            int i = l1->val + offset;
            offset = 0;
            if(i == 10) {offset++; i -= 10;}
            aux->next = new ListNode(i);
            aux = aux->next;
            l1 = l1->next;
        }
        while(l2 != NULL){
            int i = l2->val + offset;
            offset = 0;
            if(i == 10) {offset++; i -= 10;}
            aux->next = new ListNode(i);
            aux = aux->next;
            l2 = l2->next;
        }
        if(offset > 0){
            aux->next = new ListNode(offset);
        }
        return ans->next;
    }
};