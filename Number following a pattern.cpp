string printMinNumberForPattern(string S)
    {
        int l=S.length();
        string s="";
        for(int i=0;i<=l;i++)
        {
            s=s+to_string(i+1);
        }
        int j,k;
        for(int i=0;i<l;i++)
        {
            if(S[i]!='D')
                continue;
            j=i;
            k=i;
            while(S[i]=='D')
            {
              j++;  
              i++;
            }
            reverse(s.begin()+k,s.begin()+j+1);
        }
        return s;
        // code here 
    }
