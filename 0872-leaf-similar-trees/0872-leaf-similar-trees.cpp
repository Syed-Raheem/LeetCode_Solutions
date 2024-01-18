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
    void leafs(TreeNode* root,vector<int> &val)
    {
        if(not root) return ;
        if(not root->left && not root->right) val.push_back(root->val) ;
        leafs(root->left,val);
        leafs(root->right,val);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> l,r ;
        leafs(root1,l) ;
        leafs(root2,r) ;
        return l==r ;
    }
};