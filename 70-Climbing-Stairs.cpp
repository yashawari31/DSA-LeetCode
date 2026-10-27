class Solution {
public:
    int climbStairs(int n) {
        if(n==1)
           return 1;

        if(n==2)
           return 2;   
        int i=1;
        int j=2;
        int next=0;
        for(int k=3;k<=n;k++)
        {
            next=i+j;
            i=j;
            j=next;
        }
        return next;
    }
};