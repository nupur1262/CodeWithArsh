bool canPair(vector<int> nums, int k) 
    {
        if(nums.size()%2)
        return false;
        vector<int>v(nums.size());
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            v[i]=nums[i]%k;
            mp[v[i]]++;
            //cout<<v[i]<<" ";
            //cout<<v[i]<<"->"<<mp[v[i]]<<endl;
        }
        //cout<<mp[1]<<endl;
        if(mp[0]%2==1)
            return 0;
        for(int i=0;i<nums.size();i++)
        {
            if(v[i]==0&&mp[0]==0)
            {
                return 0;
            }
            else if(v[i]==0&&mp[0]!=0)
            {
                mp[0]--;
            }
            else if(mp[k-v[i]]==0)
                {
                    //cout<<i<<endl;
                    return false;
                }
            else
            {
                mp[k-v[i]]--;
                //mp[v[i]]--;
            }
        }
        return true;
        // Code here.
    }
