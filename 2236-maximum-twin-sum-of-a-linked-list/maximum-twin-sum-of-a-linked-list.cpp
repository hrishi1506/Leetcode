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
    ListNode* reverse(ListNode* head){
        if(head == NULL || head -> next == NULL){
            return head;
        } 
        ListNode* last = reverse(head->next);

        head -> next -> next = head;
        head -> next = NULL;

        return last;
    }
public:
    int pairSum(ListNode* head) {
        if(head == NULL) return 0;

        int maxi = INT_MIN;

        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev = head;

        while(fast != NULL && fast-> next != NULL){
            prev = slow;
            slow = slow -> next;
            fast = fast ->next ->next;
        }

        prev -> next = reverse(slow);

        ListNode* curr1 = head;
        ListNode* curr2 = prev->next;

        while(curr2 != NULL){
            int s = curr1 -> val + curr2 -> val;
            maxi = max(maxi , s);

            curr1 = curr1->next;
            curr2 = curr2->next;
        }

        return maxi;

    }
};