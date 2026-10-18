class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=0;
        int fast=0;
        do
        {
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);

        int temp=0;
        while(temp!=slow)
        {
            temp=nums[temp];
            slow=nums[slow];
        }
       return slow;
    }
};