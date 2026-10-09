class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        for(char c:s)
        {
            mp[c]++;
        }
        int ans=0;
        bool check=false;
        for(auto c:mp)
        {
            if(c.second>1)
            {
                ans+=(c.second/2)*2;

            
            }
           if(c.second%2!=0)
            {
                check=true;
            }
            
            
        }
        if(check)
            {
              ans+=1;
            }
        return ans;
    }
};