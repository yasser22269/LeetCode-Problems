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
    bool fb;
    int count = 1;
    bool isSameTree(TreeNode* p, TreeNode* q) {
     
      // cout<< preTree(p,q) << " "<< fb<<endl;
        return preTree(p,q);
    }
    bool preTree(TreeNode* p, TreeNode* q){
        if(p == NULL && q  == NULL){
                return true;
        }
        if(p == NULL || q  == NULL){
                return false;
        }
         cout<<p->val << " "<< q->val<<endl;
            return (p->val == q->val)
            && preTree(p->left,q->left)
             && preTree(p->right,q->right);

          
    }
};