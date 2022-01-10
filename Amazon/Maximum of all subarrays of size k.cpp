vector < int> max_of_subarrays(int *arr, int n, int k)
    {
        vector<int>v;
        deque<ll int>q(k);
        for(int i=0;i<k;i++)
        {
            while(!q.empty()&&arr[q.back()]<=arr[i])
                q.pop_back();
            q.push_back(i);
        }
        
        for(int i=k;i<n;i++)
        {
            v.push_back(arr[q.front()]);
            while(!q.empty()&&q.front()<=(i-k))
                q.pop_front();
            while(!q.empty()&&arr[i]>arr[q.back()])
                q.pop_back();
            q.push_back(i);
        }
        v.push_back(arr[q.front()]);
        return v;
        // your code here
    }
