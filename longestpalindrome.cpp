class Solution {
public:
    int longestPalindrome(string s) {
       unordered_map<char,int> map;
        int oddfreq=0;
        for(char ch: s )
        {
            map[ch]++;
            if(map[ch]%2==1)
            {
                oddfreq++;
            }
            else
            {
                oddfreq--;
            }
        }
        if(oddfreq>0)
        {
            return s.length()-oddfreq+1;
        }
        return s.length();
    }
};
