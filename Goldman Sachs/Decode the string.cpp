string decodedString(string s)
    {
        stack<string>st;
        string ans;
        for(int i=0;i<s.length();i++)
        {
            
            if(s[i]>='0'&&s[i]<='9')
            {
                string temp="";
                while(s[i]>='0'&&s[i]<='9')
                {
                    //cout<<s[i]<<endl;
                    temp=temp+s[i];
                    i++;
                }
                //cout<<temp<<endl;
                st.push((temp));
                //cout<<st.top();
                i--;
            }
            else if(s[i]>='a'&&s[i]<='z')
            {
                string temp="";
                while(s[i]>='a'&&s[i]<='z')
                {
                    temp=temp+s[i];
                    i++;
                }
                st.push(temp);
                i--;
            }
            else if(s[i]==']')
            {
                string temp="";
                while(st.size()>0&&st.top()!="[")
                {
                    temp=st.top()+temp;
                    st.pop();
                }
                //cout<<temp<<endl;
                if(st.top()=="[")
                {
                    ans="";
                    st.pop();
                    string tt=st.top();
                    st.pop();
                    for(int i=0;i<stoi(tt);i++)
                    {
                        ans=ans+temp;
                    }
                }
                st.push(ans);
            }
            else
            {
                string t="";
                t+=s[i];
                //cout<<t<<endl;
                st.push(t);
                //cout<<st.top();
            }
        }
        
        if(st.size()>0)
        {
            //cout<<st.size();
            return st.top();
        }
        //return "Nupur";
        // code here
    }
