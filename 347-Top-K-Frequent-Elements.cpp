class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int num:nums)
        {
            mp[num]++;
        }
        vector<pair<int,int>>freq;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            freq.push_back({it->first,it->second});
        }
        sort(freq.begin(),freq.end(),[](auto &a,auto &b)
        {
            return a.second>b.second;
        });
        for(int i=0;i<k;i++)
        {
            ans.push_back(freq[i].first);
        }
        return ans;
    }
};