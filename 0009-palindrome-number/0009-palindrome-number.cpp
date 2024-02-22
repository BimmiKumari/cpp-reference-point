class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        int temp=x;
        while(x>0)
        {
            int digit=x%10;
            rev=digit+int(rev*10);
            x=x/10;
        }
        if(rev==temp)
        {
            
            return true;
            
        }
        return false;
    }
};