class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
       ListNode* cur=head;
        vector<int> arr;
        while(cur!=NULL)
        {
             arr.push_back(cur->val);
             cur=cur->next;
           
        }
        
        int last=arr.size()-1;
       for(int i=0;i<arr.size()/2;i++)
        {
            if(arr[i]!=arr[last--])
            {
                return false;
            }
            
        }
        return true;
    }
