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

private:
    void preorder(TreeNode* node, int num){

        num = (2 * num + node->val) ;

        if(!node->left && !node->right){
            res = (res + num) ;
            return;
        }

        if(node->left) preorder(node->left, num);
        if(node->right) preorder(node->right, num);
    }
};