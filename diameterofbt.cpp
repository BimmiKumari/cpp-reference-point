class Solution {
public:
 
    int hieghtfinder(TreeNode* root)
    {
       if(root==NULL)
        {
            return 0;
        }
        int left=hieghtfinder(root->left);
        int right=hieghtfinder(root->right);
       
       return 1+ max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
    int lpart=diameterOfBinaryTree(root->left);
    int rpart=diameterOfBinaryTree(root->right);
    int cur= hieghtfinder(root->left)+ hieghtfinder(root->right);
    
    return max(cur,max(lpart,rpart));
        
    }
};
