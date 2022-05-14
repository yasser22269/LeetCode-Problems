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
   int preorder(TreeNode *p, int low, int high)
    {
        int count = 0;
        if(p != NULL)
        {
            if(p->val>=low && p->val<=high)
             count += p->val ;
              count += preorder(p->left,low,high) ;
              count += preorder(p->right,low,high);
            
            //preorder(p->left,low,high);
           // preorder(p->right,low,high);
        }
        return count;
    }   
    int rangeSumBST(TreeNode* root, int low, int high) {
       return preorder(root,low,high);
    }
};