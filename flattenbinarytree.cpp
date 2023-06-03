class Solution {
public:
    void flatten(TreeNode* root) {
        if(root==NULL){
         return;
        }
        while(root!=NULL){
            if(root->left!=NULL){
            
        TreeNode* left=root->left;
        TreeNode* curr=left;
                while(curr->right!=NULL) curr=curr->right;
                curr->right=root->right;
                root->left=NULL;
                root->right=left;
            }
            root=root->right;
        } 
    }
};
