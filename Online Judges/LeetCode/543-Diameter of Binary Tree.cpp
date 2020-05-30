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
    int mx = 0;
    int dfs(TreeNode* t) {
        if(t == NULL)return 0;
        int L = dfs(t->left);
        int R = dfs(t->right);
        
        mx = max(mx,L+R);
        
        return max(L,R)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return  mx;
    }
};
