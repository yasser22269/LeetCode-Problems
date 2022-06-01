class Solution {
public:
    int count =0;
    bool fb =false;
    bool hasPathSum(TreeNode* root, int targetSum) {        
            return preorder(root,targetSum,count);
    }
    bool preorder(TreeNode *p, int targetSum,int count)
    {
        if(p != NULL)
        {
            count += p->val; 
            if(count == targetSum && p->left ==NULL &&  p->right ==NULL){
                     fb =true;
                     return true;
            } 
            preorder(p->left,targetSum,count);
            preorder(p->right,targetSum,count);
            
        }

        return fb;
    }
};