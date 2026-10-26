class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool check=true;
        for(int k=0;k<digits.size();k++)
        {
            if(digits[k]!=9)
            {
                check=false;
            }
        }
        if(check)
        {
            for(int k=0;k<digits.size();k++)
            {
                digits[k]=0;
            }
            digits.insert(digits.begin(),1);
            return digits;
        }
       int i=digits.size()-1;
       while(i>=0)
       {
         if(digits[i]<9)
         {
             digits[i]+=1;
             break;
         }
         else
         {
            digits[i]=0;
            i--;
         }
       }
       
        return digits;
    }
};