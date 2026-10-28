class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        int index=0;
        vector<int>curr;
        solve(nums,0,curr,ans);

        return ans;
    }

    void solve(vector<int>& nums, int index,
           vector<int>& curr,
           vector<vector<int>>& ans)
           {
             if(nums.size()==index)
             {
                ans.push_back(curr);
                return;
             }
             
             curr.push_back(nums[index]);
             solve(nums,index+1,curr,ans);
             curr.pop_back();
             
            solve(nums,index+1,curr,ans);
           }
};

