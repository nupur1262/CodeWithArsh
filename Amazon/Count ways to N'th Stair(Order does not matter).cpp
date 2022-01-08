long long countWays(int m)
    {
        if(m==0)
            return 0;
        if(m==1)
            return 1;
        long long int dp[m+1];
        dp[0]=0;
        dp[1]=1;   
            
            long long int j=2;long long int k=1;
            for(long long int i=2;i<m+1;i++)
            {
                if(k==1 || k==2)
                {
                    dp[i]=j;
                    k++;
                }
                else
                {
                    j++;
                    k=2;
                    dp[i]=j;
                }
                //cout<<dp[i]<<" ";
                
            }
            return dp[m];
        // your code here
    }
