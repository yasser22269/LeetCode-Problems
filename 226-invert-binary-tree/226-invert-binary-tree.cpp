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
        TreeNode* tree = new TreeNode;
    TreeNode* invertTree(TreeNode* root) {
        
        return preorder(root);
    }
   TreeNode* preorder(TreeNode *p)
    {
        if(p != NULL)
        {
            TreeNode* r= p->left;
            p->left = p->right;
            p->right = r;
            preorder(p->left);
            preorder(p->right);
         }
            return p;
       
   }
    
  
    
};
