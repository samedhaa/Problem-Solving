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
    vector<string>ans;
void dfs(TreeNode *t, string s) {

    if(t->left == NULL && t->right == NULL) {
        ans.push_back(s + to_string(t->val));
        return;
    }

    if(t->left != NULL) {
        dfs(t->left, s + to_string(t->val) + "->");
    }
    
    if(t->right != NULL) {
        dfs(t->right, s + to_string(t->val) + "->");
    }
}
std::vector<std::string> binaryTreePaths(TreeNode* t) {
    
    if(t != NULL) {
        dfs(t,"");
    }
    return ans;
}

};
