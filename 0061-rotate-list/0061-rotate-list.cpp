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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;
      ListNode* c  = head;
      int n = 0;
      ListNode* t = head;
      while (t) {
       n++;
       t = t->next;
    }
    k = k % n;
      for (int i = 0; i < k && c != NULL; i++) {
        ListNode* temp = head;
        while (temp->next->next != NULL) {
        temp = temp->next;
      }
      ListNode* last = temp->next;
      temp->next =NULL;
      last->next = head;
      head= last;
      }
      return head;
       }
};