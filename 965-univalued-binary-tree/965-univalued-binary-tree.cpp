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
    int num =0;
    bool fb =true;
    bool isUnivalTree(TreeNode* root) {
        if(root != NULL)
        {
            num = root->val;
            if(root->left){
               fb= test(root->left);
            }
            if(fb == false)
                return false;
            if(root->right){
               fb= test(root->right);
            }
            if(fb == false)
                return false;
            
            
             return true;
        }
        return false;
    }
    bool test(TreeNode* root){
        if(root != NULL)
        {
            if(num != root->val){
                fb = false;
                 return false;
            }
               

            test(root->left);
            test(root->right);
        }
        return fb;
    }
};