class Solution {
public:
    bool isHappy(int n) {
        int ans=n;
        set<int>st;
        while(st.count(ans)==0)
        {
            st.insert(ans);
            int curr=ans;
            int temp=0;
            while(curr>0)
            {
              temp+=(curr%10)*(curr%10);
              curr/=10;
            }
            ans=temp;
            if(ans==1)
            {
                return true;
            }
            
            
        }

        return false;
    }
};