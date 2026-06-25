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
    ListNode* solve(ListNode* head){
        if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode* newHead = solve(head->next);

        head->next->next = head;
        head->next = NULL;

        return newHead;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL) return true;

        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev = NULL;

        while(fast != NULL && fast->next != NULL){
            prev = slow;
            fast = fast->next->next;
            slow = slow->next;
        }

        if(fast != NULL) {
            slow = slow->next;
        }

        slow = solve(slow);
        prev->next = slow;

        ListNode* curr = head;

        while(slow != NULL){
            if(curr->val != slow->val){
                return false;
            }
            slow = slow->next;
            curr = curr->next;
        }

        return true;

    }
};