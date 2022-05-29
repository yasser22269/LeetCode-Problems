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
    //const int MOD = 1e9 + 7;

public:
    int sumRootToLeaf(TreeNode* root) {

        dfs(root, 0);
        return res;
    }

private:
    void dfs(TreeNode* node, int num){

        num = (2 * num + node->val) ;

        if(!node->left && !node->right){
            res = (res + num) ;
            return;
        }

        if(node->left) dfs(node->left, num);
        if(node->right) dfs(node->right, num);
    }
};