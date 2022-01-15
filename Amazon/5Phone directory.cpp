https://practice.geeksforgeeks.org/problems/phone-directory4628/1/#



vector<string> unique(vector<string>&s)
{
    vector<string>v;
    set<string>ss;
    for(auto i:s)
        ss.insert(i);
    for(auto i:ss)
        v.push_back(i);
    return v;
}
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        //cout<<s;
        vector<vector<string>>ans;
        int len=s.length();
        for(int i=1;i<=len;i++)
        {
            vector<string>v;
            for(int j=0;j<n;j++)
            {
                if(contact[j].find(s.substr(0,i))==0)
                {
                    v.push_back(contact[j]);
                }
            }
            if(v.size()==0)
            v.push_back("0");
            sort(v.begin(), v.end());
            vector<string>ss=unique(v);
            ans.push_back(ss);
        }
        return ans;
        // code here
    }
