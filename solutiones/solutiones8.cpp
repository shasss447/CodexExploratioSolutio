class Solution {
public:

    bool isPalindrome(string s) {
      int begin =0,end=s.length()-1;
      while(begin<=end)
      {
          if(s[begin]>=48&&s[begin]<=57&&s[end]>=48&&s[end]<=57)
          {
              if(s[begin]!=s[end])
              return 0;
          }
          else if()
      }
};