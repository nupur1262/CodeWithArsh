https://practice.geeksforgeeks.org/problems/amend-the-sentence3235/1#



string amendSentence (string s)
    {
        string temp="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>=65 & s[i]<=90)
            {
                //string t=s.substr(i,1);
                //t=t-65+97;
                //s[i]=s[i]+32;
                if(temp.length()>0)
                {
                    temp=temp+" ";
                    temp+= s[i]-'A'+'a';
                }
                else
                {
                    temp+=(s[i]-'A'+'a');
                }
            }
            else
            {
                temp+= s[i];
            }
        }
        return temp;
}
