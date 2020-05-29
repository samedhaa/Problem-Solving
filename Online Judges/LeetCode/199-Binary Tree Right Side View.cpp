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
    vector<int> rightSideView(TreeNode* root) {
    
        vector<int> ans;
        queue<pair<TreeNode *,int> >children;

        if(root == NULL) {
            return ans;
        }

        int prevV = root->val;
        int prevD = 1;
        children.push({root,1});


        while(!children.empty()) {

            TreeNode* child = children.front().first;
            int degree = children.front().second;
            children.pop();
            if(degree > prevD) {
                ans.push_back(prevV);
            }
            prevV = child->val;
            prevD = degree;

            if(child->left != NULL)
            {
                children.push({child->left,degree+1});
            }

            if(child->right != NULL)
            {
                children.push({child->right,degree+1});
            }
        }

        ans.push_back(prevV);

        return ans;
    }
};
