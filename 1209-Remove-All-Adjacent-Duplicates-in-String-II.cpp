class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>stk;
        for(int i=0;i<s.size();i++)
        {
            if(stk.empty() || stk.top().first!=s[i])
            {
                stk.push({s[i],1});
            }
            else if(stk.top().first==s[i])
            {
                  stk.top().second++;
            }
            if(!stk.empty() && stk.top().second==k)
            {
                stk.pop();
            }
        }
        string ans;
        while(!stk.empty())
        {
            int i=0;
            while(i<stk.top().second)
            {
            ans.push_back(stk.top().first);
            i++;
            }
            i=0;
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};