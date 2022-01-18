https://practice.geeksforgeeks.org/problems/implement-atoi/1/#



int atoi(string str) 
    {
        int ans=0;
        int i=0;
        int flag=1;
        if(str[0]=='-')
        {
            flag=0;
            i++;
        }
        while(i<str.length())
        {
            if(!(str[i]>='0' && str[i]<='9'))
                return -1;
            ans=ans*10+(str[i]-48);
            i++;
        }
        if(flag==0)
        {
            ans=ans-2*ans;
        }
        return ans;
        //Your code here
    }
