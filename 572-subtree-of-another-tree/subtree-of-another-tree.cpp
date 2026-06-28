/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    bool solve(TreeNode* root , TreeNode* root1){
        if(root == NULL && root1 == NULL){
            return true;
        }
        if(root == NULL || root1 == NULL) return false;

        return root->val == root1->val &&
         solve(root->left , root1->left) && 
         solve(root->right , root1->right);
    }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL) return false;

        return solve(root,subRoot) || 
        isSubtree(root->left,subRoot) || 
        isSubtree(root->right , subRoot);
    }
};