class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(int num: nums)
        {
            mp[num]++;
        }
        int ans;
        for(auto p: mp)
        {
             if(p.second>nums.size()/2)
             {
                ans=p.first;
             }
             

        }
        return ans;
    }
};