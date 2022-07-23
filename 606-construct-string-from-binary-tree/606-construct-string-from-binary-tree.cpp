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
    string title;
    string tree2str(TreeNode* p) {
            if(p != NULL)
            {
               title += to_string( p->val);
                if(p->left != NULL && p->left != nullptr){
                    title += "(";
                    tree2str(p->left);
                    title += ")";
                }else  if(p->left == nullptr && p->right != nullptr){
                     title += "()"; 
                }
                if(p->right != NULL && p->right != nullptr){
                    title += "(";
                    tree2str(p->right);
                     title += ")";
                }else  if(p->left == nullptr && p->right != nullptr){
                     title += "()"; 
                }
            }
        return title;
    }
};