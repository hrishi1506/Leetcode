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
    bool solve(TreeNode* root , int sum , int res){
        if(root == NULL){
            return false;
        }
        res += root->val;

        if(root -> left == NULL && root -> right == NULL){
            return res == sum;
        }

        

        return solve(root->left , sum , res) || solve(root->right,sum,res);
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return false;
        TreeNode* temp = root;
        return solve(temp,targetSum,0);
    }
};