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
    bool isMirror(TreeNode *t, TreeNode *t2) {
        
        if(t == NULL && t2 == NULL) {
            return true;
        }
        
        if(t && t2 && t->val == t2->val) {
            return isMirror(t->left, t2->right) && isMirror(t->right, t2->left);
        }
        
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        
        return isMirror(root,root);
    }
};
