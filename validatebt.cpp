https://leetcode.com/Bimmikumari
      class Solution {

bool isPossible(TreeNode* root, long long minval, long long maxval){
    if(root == nullptr)  return true;
    if(root->val < maxval and root->val > minval)
        return isPossible(root->left, minval, root->val)&&isPossible(root->right, root->val, maxval);
    else return false;
}

public:
    bool isValidBST(TreeNode* root) {
        long long int min = -1000000000000, max = 1000000000000;
        return isPossible(root, min, max);
    }
};
