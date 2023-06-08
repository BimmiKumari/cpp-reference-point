class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)
        {
            return root;
        }
        if(root==p||root==q)
        {
            return root;
        }
        TreeNode* leftsubtree=lowestCommonAncestor(root->left,p,q);
        TreeNode* rightsubtree=lowestCommonAncestor(root->right,p,q);
        if(leftsubtree!=NULL&&rightsubtree!=NULL)
        {
            return root;
        }
       else if(leftsubtree==NULL&&rightsubtree!=NULL)
        {
            return rightsubtree;
        }
       else if(rightsubtree==NULL&&leftsubtree!=NULL)
        {
            return leftsubtree;
        }
        else
            return NULL;
        
    }
};

