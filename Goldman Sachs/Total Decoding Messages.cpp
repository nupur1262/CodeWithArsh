long long int m=1000000007;
		int CountWays(string str)
		{
		    if(str[0]=='0')
		        return 0;
		    int dp[str.length()+1];
		    //dp[0]=0;
            dp[0] = 1;
            dp[1] = 1;
		    for(int i=2;i<=str.length();i++)
		    {
                dp[i] = 0;
                
                // If the last digit is not 0, 
                // then last digit must add to the number of words
                if (str[i-1] > '0')
                    dp[i] = dp[i-1]%m;
                
                // If second last digit is smaller 
                // than 2 and last digit is smaller than 7,
                // then last two digits form a valid character 
                if (str[i-2] == '1' || 
                (str[i-2] == '2' && str[i-1] < '7') )
                dp[i] = (dp[i]+dp[i-2]%m)%m;
		    }
		    for(int i=0;i<str.length();i++)
		    {
		        //cout<<dp[i]<<" ";
		    }
		    return dp[str.length()]%m;
		    // Code here
		}
