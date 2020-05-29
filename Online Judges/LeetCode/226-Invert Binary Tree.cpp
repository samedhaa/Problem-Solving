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
    
    TreeNode* dfs(TreeNode* t) {
        swap(t->left,t->right);
        if(t->left != NULL) {
            dfs(t->left);
        }
        if(t->right != NULL) {
            dfs(t->right);
        }
        return t;
    }
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL) {
            return root;
        }
        return dfs(root);
    }
};
