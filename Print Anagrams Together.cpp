class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) 
    {
        map<string,vector<string>>mp;
        for(int i=0;i<string_list.size();i++)
        {
            string s = string_list[i];
            sort(s.begin(),s.end());
            mp[s].push_back(string_list[i]);
        }
        vector<vector<string>>v;
        for(auto i:mp)
        {
            v.push_back(i.second);
        }
        return v;
        //code here
    }
};
