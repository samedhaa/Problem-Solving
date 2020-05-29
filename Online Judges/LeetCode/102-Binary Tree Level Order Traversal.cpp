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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int> >ans;
        vector<TreeNode*>children;

        if(root != NULL) {
            children.push_back(root);
        }

        while(!children.empty())
        {
            vector<int>temp;
            vector<TreeNode*>newChildren;

            for(auto child : children) {
                temp.push_back(child->val);
                
                if(child->left != NULL) {
                    newChildren.push_back(child->left);
                }
                if(child->right != NULL) {
                    newChildren.push_back(child->right);
                } 
            }
            children = newChildren;
            ans.push_back(temp);
        }

        return ans;
    }
};
