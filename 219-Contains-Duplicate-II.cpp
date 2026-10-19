class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int>check;
        if(k==0)
        {
            return false;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(check.find(nums[i])!=check.end())
            {
                return true;
            }
            if(check.size()==k)
            {
                check.erase(nums[i-k]);
            }
            check.insert(nums[i]);
        }
        return false;
    }
};