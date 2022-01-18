https://practice.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/1/#



vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        vector<string>ans;
        //ans.push_back(arr[0]);
        //ans.push_back(arr[1]);
        
        map<string,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        int maxv=INT_MIN;
        string str;
        for(auto i:mp)
        {
            if(i.second>maxv)
            {
                str=i.first;
                maxv=i.second;
            }
        }
        //cout<<str<<" "<<maxv<<endl;
        //cout<<endl;
        
        
        ans.push_back(str);
        ans.push_back(to_string(maxv));
        return ans;
    }
