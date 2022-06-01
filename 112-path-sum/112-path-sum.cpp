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
    int count =0;
    bool fb =false;
    bool hasPathSum(TreeNode* root, int targetSum) {
        if( root != NULL){
            // count = root->val;
            //  if(root->val ==targetSum &&( !root->left && !root->right))
            //      return true;
            //  if(root->val ==targetSum &&( !root->left || !root->right))
            //      return false;
            
        //if(root->left != NULL)
         //   return preorder(root->left,targetSum,count);
        // else if(root->right != NULL)
        //     return preorder(root->right,targetSum,count);
        // else
        //     return false;
            
        return preorder(root,targetSum,count);
        }else
                 return false;

    }
    bool preorder(TreeNode *p, int targetSum,int count)
    {
        if(p != NULL)
        {
            count += p->val; 
            if(count == targetSum && p->left ==NULL &&  p->right ==NULL){
                     fb =true;
                     return fb;
            } 
           // cout<< count <<endl;
            preorder(p->left,targetSum,count);
            preorder(p->right,targetSum,count);
            
        }

        return fb;
    }
};