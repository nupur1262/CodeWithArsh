string encode(string src)
{
    string s="";
    stack<char>st;
    int cnt=0;
    for(int i=0;i<src.length();i++)
    {
        if(st.empty())
        {
            cnt++;
            st.push((src[i]));
        }
        else if(st.top()==src[i])
            cnt++;
        else
        {
            s=s+st.top()+to_string(cnt);
            cnt=0;
            st.pop();
            st.push(src[i]);
            cnt++;
        }
        if(i==src.length()-1)
        {
            if(!st.empty())
                s=s+st.top()+to_string(cnt);
            else
                s=s+src[i]+"1";
        }
    }
    return s;
  //Your code here 
}
