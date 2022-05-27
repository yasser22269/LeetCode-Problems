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
    vector<int>arr;
    vector<int> postorderTraversal(TreeNode* root) {
        return preorder(root);
    }
    vector<int> preorder(TreeNode *p)
    {
        if(p != NULL)
        {
            preorder(p->left);
            preorder(p->right);
            arr.push_back(p->val);
        }
    return arr;
    }
};