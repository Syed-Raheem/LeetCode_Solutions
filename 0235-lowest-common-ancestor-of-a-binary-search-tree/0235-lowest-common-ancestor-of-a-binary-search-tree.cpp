/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    vector<int> v;
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        if(root!=NULL && root->val > p->val && root->val > q->val)
        {
            v.push_back(root->val);
            if(root->left)
                lowestCommonAncestor(root->left,p,q);
        }
        else if(root!=NULL && root->val < p->val && root->val < q->val)
        {
            v.push_back(root->val);
            if(root->right)
                lowestCommonAncestor(root->right,p,q);
        }

        else if((root!=NULL) && (root->val >= p->val && root->val <= q->val) || (root->val <= p->val && root->val >= q->val) ||(root->val == p->val && root->val >= q->val) || (root->val== p->val && root->val <= q->val) || (root->val >= p->val && root->val == q->val) || (root->val <= p->val && root->val == q->val))
        {
            v.push_back(root->val);
            if(v.size()>0)
            {
                //sort(v.begin(),v.end());
                TreeNode* ans=new TreeNode(v[v.size()-1]);
                cout<<ans->val;
                return ans;
            }
            else
            {
                return root;
            }
        }
        TreeNode* a;
        if(v.size()>0)
        {
            //sort(v.begin(),v.end());
            a=new TreeNode(v[v.size()-1]);
        }
        cout<<a->val;
        return a;
    }
};