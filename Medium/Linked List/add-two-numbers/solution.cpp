// Add Two Numbers
// Difficulty: Medium  |  Topic: Linked List
// https://leetcode.com/problems/add-two-numbers/

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
        
        ListNode* copy = new ListNode();
        ListNode* dummy = copy;
        int carry = 0;
        int sum = 0;

        while(l1 && l2){
            sum = l1->val  + l2->val + carry;
            carry = 0;
            if(sum>9){
                carry = sum/10;
                sum = sum%10;
            }

            dummy->next = new ListNode(sum );
            dummy = dummy->next;

            l1 = l1->next;
            l2 = l2->next;
        }

        sum = 0;

        while(l1){
            sum = (carry>0)?(carry+l1->val) : (l1->val);
            carry = 0;
            if(sum>9){
                carry = sum/10;
                sum = sum%10;
            }
            dummy->next = new ListNode(sum);
            dummy = dummy->next;
            l1 = l1->next;
        }
        while(l2){
            sum = (carry>0)?(carry+l2->val) : (l2->val);
            carry = 0;
            if(sum>9){
                carry = sum/10;
                sum = sum%10;
            }
            dummy->next = new ListNode(sum);
            dummy = dummy->next;
            l2 = l2->next;
        }

        if(carry>0) dummy->next = new ListNode(carry);

        return copy->next;
              


    }
};