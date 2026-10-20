class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>check;
        int left=0;
        int right=0;
        int ans=0;
        while(right<s.size())
        {
              while(check.find(s[right])!=check.end())
              {
                 check.erase(s[left]);
                 left++;
              }
              check.insert(s[right]);
              ans=max(ans,right-left+1);
              right++;
        }
        return ans;
    }
};