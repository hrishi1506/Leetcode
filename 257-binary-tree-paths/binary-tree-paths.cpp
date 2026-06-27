class Solution {
    void solve(TreeNode* root  , vector<string>& ans , string path){
            if(root == NULL){
                return ;
            }

            path += to_string(root->val);

            if(root -> left == NULL && root -> right == NULL){
                ans.push_back(path);
                return;
            }

            path += "->";

            solve(root->left , ans, path);
            solve(root->right , ans , path);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        if(root == NULL) return ans;
        solve(root,ans,"");

        return ans;
    }
};