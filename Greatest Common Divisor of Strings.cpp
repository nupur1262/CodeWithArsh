string gcdOfStrings(string str1, string str2) 
    {
        int m=str1.length();
        int n=str2.length();
        int gcd=__gcd(m,n);
        int j;
        
        string s="";
        for(int i=0;i<gcd;i++)
        {
            if(str1[i]!=str2[i])
                return "";
            else
               s=s+str1[i];
        }
        //return s;
        int l=s.length();
        
        int i=0;
        while(i<m)
        {
            j=0;
            while(j<l)
            {
                if(str1[i]!=s[j])
                {
                    //cout<<"11"<<endl;
                    return "";
                }
                else
                {
                    i++;
                    j++;
                }
            }
        }
        i=0;
        while(i<n)
        {
            j=0;
            while(j<l)
            {
                if(str2[i]!=s[j])
                {
                    //cout<<"22"<<endl;
                    return "";
                }
                else
                {
                    i++;
                    j++;
                }
            }
        }
               return s;
    }
