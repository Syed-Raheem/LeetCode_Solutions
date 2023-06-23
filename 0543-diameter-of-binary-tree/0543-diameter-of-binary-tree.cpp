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
    int CheckHeight(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int h=CheckHeight(root->left);
        int n=CheckHeight(root->right);
        return max(h,n)+1;
    }
    int ma=0;
    int diameterOfBinaryTree(TreeNode* root) 
    {
        if(root==NULL)
        {
            return 0;
        }
        int ans=CheckHeight(root->left)+CheckHeight(root->right);
        ma=max(ma,ans);
        cout<<ma;
        int a=diameterOfBinaryTree(root->left);
        int b=diameterOfBinaryTree(root->right);
        return ma;
        
    }
};