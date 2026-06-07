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
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,TreeNode*> mapp;
        unordered_set<int> childsAhh; //using to store if they are child of anyone ??


        for(vector<int> vec : descriptions){
            int parent = vec[0];
            int child  = vec[1];
            int left   = vec[2];

            if(mapp.find(parent) == mapp.end()){
                mapp[parent] = new TreeNode(parent);
            }
            if(mapp.find(child) == mapp.end()){
                mapp[child] = new TreeNode(child);
            }


            if(left == 1){
                mapp[parent]->left = mapp[child];
            }
            else{
                mapp[parent]->right = mapp[child];
            }

            childsAhh.insert(child);
        }

        for(vector<int>&vec : descriptions){
            int parent = vec[0];

            if(childsAhh.find(parent) == childsAhh.end()){
                return mapp[parent];
            }
        }

        return NULL; // we'll never reach here niggerrr
    }
};