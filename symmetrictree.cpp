class Solution {
public:
    bool checkforsym(TreeNode* leftsub,TreeNode* rightsub){
        if(leftsub==NULL&&rightsub==NULL)
        {
            return true;
        }
        if(leftsub==NULL&&rightsub!=NULL||rightsub==NULL&&leftsub!=NULL)
        {
            return false;
        }
         if(leftsub->val!=rightsub->val)
        {
            return false;
        }
        bool lef=checkforsym(leftsub->left,rightsub->right);
        bool righ=checkforsym(leftsub->right,rightsub->left);
           
       return lef&&righ;
    }
    bool isSymmetric(TreeNode* root) {
     if(root==NULL)
     {
         return true;
     }
      return checkforsym(root->left,root->right); 
    }
};
