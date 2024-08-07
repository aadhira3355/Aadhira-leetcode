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
    void preorder(TreeNode* root, int lvl, vector<int>&result){
        if(root==NULL)
            return;
        if(result.size() < lvl){
            result.push_back(root->val);
        }
        preorder(root->right, lvl+1 , result);
        preorder(root->left, lvl+1, result);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>result;
        preorder(root,1,result);
        return  result;
    }
};