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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        if(head == NULL|| head->next == NULL ||  head->next->next == NULL )
            return {-1,-1};

        int c = 1;
        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* front = head->next->next;
        vector<int>vec;

        while(front != NULL){
            if(curr -> val > prev->val && curr->val > front->val || curr->val < prev->val && curr->val < front->val){
                vec.push_back(c);
            }
            prev = curr;
            curr = front;
            front = front->next;
            c++;
        }
        if(vec.size() == 0 || vec.size() == 1) 
            return {-1,-1};

        int minV = INT_MAX;
        int maxV = -1;

        for(int i = 1 ; i < vec.size() ; i++)
            minV = min(minV , vec[i] - vec[i-1]);

        maxV = vec[vec.size()-1] - vec[0];
        
        if(minV == INT_MAX) minV = -1;
        return {minV,maxV};
    }
};