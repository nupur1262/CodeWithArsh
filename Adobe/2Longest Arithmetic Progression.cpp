https://practice.geeksforgeeks.org/problems/longest-arithmetic-progression1019/1/



int lengthOfLongestAP(int A[], int n) 
    {
        if(n<=2)
            return n;
        
        int dp[n][n];//dp[i][j] will store llap for the sequence starting with ith index and jth element as sedond element
        
        int llap=2;
        
        for(int i=0;i<n;i++)
        {
            dp[i][n-1]=2;
        }
        
        for(int j=n-1;j>=1;j--)
        {
            int i=j-1;int k=j+1;
            while(i>=0&&k<=n-1)
            {
                if(A[i]+A[k]>2*A[j])
                {
                    dp[i][j]=2;
                    i--;
                }
                else if(A[i]+A[k]<2*A[j])
                {
                    k++;
                }
                else
                {
                    dp[i][j]=dp[j][k]+1;
                    llap=max(llap,dp[i][j]);
                    i--;
                    k++;
                }
            }
            while(i>=0)
            {
                dp[i][j]=2;
                i--;
            }
        }
        return llap;
        // code here
    }
