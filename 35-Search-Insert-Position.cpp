class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        if(target<nums[low])
        {
            return 0;
        }
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(target>nums[mid])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        int ans;
        for(int i=0;i<nums.size()-1;i++)
        {
             if(nums[i]<target && nums[i+1]>target)
             {
                ans=i+1;
             }
        }
        if(target>nums[nums.size()-1])
        {
            return nums.size();
        }
        return ans;
    }
};