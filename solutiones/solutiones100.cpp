
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string st;
    for(int i=0;i<s.length();i++)
    {
        if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122))
        st=st+s[i];
    }
    cout<<st;
    return 0;
}

