class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++)
        {
            int j=i+1;
            int temp=nums[j];
            int k=i;
            while(k>=0 && temp<nums[k])
            {
                nums[k+1]=nums[k];
                k--;
            }
            nums[k+1]=temp;
        }
    }
};