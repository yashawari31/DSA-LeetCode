class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int>mp;
        for(char c: text)
        {
            mp[c]++;
        }
        if(mp['b'] >= 1 && mp['a'] >= 1 && mp['l'] >= 2 &&
              mp['o'] >= 2 && mp['n'] >= 1)
              {
               return min({mp['b'], mp['a'], mp['l']/2, mp['o']/2, mp['n']});
              }
      return 0;
   
    }
};