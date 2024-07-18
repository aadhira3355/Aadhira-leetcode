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
    int countnode(TreeNode* root){
        if(root==NULL)
            return NULL;
        return 1+countnode(root->left)+countnode(root->right);
    }

    bool dfs(TreeNode* root, int i, int totalnode){
        if(root == NULL)
            return true;
        if(i>totalnode)
            return false;
        return dfs(root->left,2*i,totalnode) && dfs(root->right,2*i+1,totalnode);
    }
    bool isCompleteTree(TreeNode* root) {
        int totalnode = countnode(root);
        int index = 1;
        return dfs(root,index,totalnode);
    }
};