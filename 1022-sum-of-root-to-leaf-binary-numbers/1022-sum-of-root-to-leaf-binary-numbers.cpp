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
private:
    int res = 0;
public:
    int sumRootToLeaf(TreeNode* root) {
        preorder(root, 0);
        return res;
    }
   void preorder(TreeNode* p , int num){
       num = (2 * num + p->val);
       if(!p->left && !p->right){
          res += num;
           return;
       }
       if(p->left)
       preorder(p->left ,num);
    if(p->right)
      preorder(p->right ,num);
   } 
};