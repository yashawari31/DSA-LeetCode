class Solution {
public:
    string addBinary(string a, string b) {
        int one=a.size()-1;
        int two=b.size()-1;
        int carry=0;
        string ans;
        while(one>=0 || two>=0 || carry)
        {
          int x=0;
          int y=0;
          if(one>=0)
          {
            x=a[one--]-'0';
          }
          if(two>=0)
          {
            y=b[two--]-'0';
          }
          int temp=x+y+carry;
          ans.push_back((temp%2)+'0');
          carry=temp/2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};