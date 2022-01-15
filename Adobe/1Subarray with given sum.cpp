https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1#



vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int index=i;
            int sum=0;
            while(sum<s)
            {
                sum=sum+arr[index];
                index++;
            }
            if(sum==s)
            {
                v.push_back(i+1);
                v.push_back(index);
                return v;
            }
        }
        v.push_back(-1);
        return v;
        // Your code here
    }
