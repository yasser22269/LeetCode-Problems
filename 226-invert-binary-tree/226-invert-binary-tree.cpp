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
        TreeNode* tree;
    TreeNode* invertTree(TreeNode* root) {
        
        return preorder(root);
    }
   TreeNode* preorder(TreeNode *root)
    {
        if(root != NULL){
            swap(root->left, root->right);
             invertTree(root->left);
             invertTree(root->right);
        }
        return root;
       
   }
    
  
    
};
