class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
            sort(intervals.begin(),intervals.end());
        ans.push_back(intervals[0]);
        int currStart;
        int prevEnd;
        for(int i=1;i<intervals.size();i++)
        {
              prevEnd=ans.back()[1];
              currStart=intervals[i][0];
              if(prevEnd>=currStart)
              {
                 ans.back()[1]=max(intervals[i][1],ans.back()[1]);
              }
              else
              {
                ans.push_back(intervals[i]);
              }
        }
        return ans;
    }
};