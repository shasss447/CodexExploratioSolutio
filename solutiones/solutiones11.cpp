string removeConsecutiveCharacter(string S)
    {
        // code here.
        string s=S.substr(0,1);
        for(int i=0;i<S.length();i++)
        {
            if(s[s.length()-1]!=S[i])
            s=s+S[i];
        }
        return s;
    }