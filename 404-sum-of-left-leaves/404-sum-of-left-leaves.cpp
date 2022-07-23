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
    int sum = 0;
    int sumOfLeftLeaves(TreeNode* p ) {
        return inorder(p,0);
    }
    
   int inorder(TreeNode *p, int type)
    {
        if(p != NULL)
        {
            inorder(p->left,1);
            if(p->left == NULL && p->right  == NULL && type == 1){
                 sum +=p->val;
               //  cout<<p->val<<" ";
            }
            inorder(p->right,0);
        }
               return sum;
    }
};