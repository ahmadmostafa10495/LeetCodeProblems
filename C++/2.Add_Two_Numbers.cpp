/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode head;
    ListNode* l3 = &head;
    
    int sum = 0;
    
    while (l1 || l2 || sum) {
        
        if (l1) {
            sum += l1 -> val;
            l1 = l1 -> next;
        }
        
        if (l2) {
            sum += l2 -> val;
            l2 = l2 -> next;
        }
        
        l3 -> next = new ListNode(sum % 10);
        l3 = l3 -> next;
        sum /= 10;
    }
    return head.next;
    }
};
