#include<bits/stdc++.h>
using namespace std;
string reverseWord(String str);
int main()
{
    int t;
    cin>>t;
    while(t--)
    { 
      string s;
      cin>>s;
      cout<<reverseWord(s)<<endl;
    }
     return 0;
}
string reverseWord(string str){
    
  //Your code here
  string st;
  for(int i=str.length()-1;i>=0;i--)
  {
      st=st+str[i];
  }
  return st;
}

