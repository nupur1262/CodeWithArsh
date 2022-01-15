https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1



bool isSubsetSum(int N, int arr[], int sum)
    {
        bool subset[N+1][sum+1];
        
        for(int i=0;i<=N;i++)
        {
            subset[i][0]=true;
        }
        
        for(int i=1;i<=sum;i++)
        {
            subset[0][i]=false;
        }
        
        for(int i=1;i<=N;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(j<arr[i-1])
                    subset[i][j]=subset[i-1][j];
                if(j>=arr[i-1])
                    subset[i][j]=subset[i-1][j] || subset[i-1][j-arr[i-1]];
            }
        }
        return subset[N][sum];
        // code here 
    }
    int equalPartition(int N, int arr[])
    {
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        if(sum%2)
            return false;
        return isSubsetSum(N,arr,sum/2);
        // code here
    }
