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
     vector<int> arr,arr2;
    vector<vector<int>> t;
    int count =0;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

        if( root != NULL){ 
            preorder(root,targetSum,count,arr);
            return t;
        }else
                 return t;
    }
    
   
     vector<vector<int>> preorder(TreeNode *p, int targetSum,int count,vector<int> arr)
    {
        if(p != NULL)
        {
            count += p->val; 
            arr.push_back(p->val);
            //cout<<count<<endl;
            if(count == targetSum && p->left ==NULL &&  p->right ==NULL){     
                  t.push_back(arr);  
                   arr.empty();
                    return t;
            } 
            if(count != targetSum && p->left ==NULL &&  p->right ==NULL){
                 arr.empty();
            }
            preorder(p->left,targetSum,count,arr);
            preorder(p->right,targetSum,count,arr);
            
        }

        return t;
    }
};
