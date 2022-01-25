https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1/



int minDifference(int arr[], int n)  
	{
	    //total sum of array
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	         sum+=arr[i];
	    }
	    //now s1+s2=sum
	    //s2=sum-s1
	    //s2-s1=(sum-2s1)
	    //range of s1=(0,sum/2)
	    
	    //creating the table for this
	    
	    bool t[n+1][sum + 1];
	    for(int i=0;i<=n;i++)
	    {
	        t[i][0] = true;
	    }
	    for(int i=1;i<=sum;i++)
	    {
	        t[0][i]=false;
	    }
	    
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=sum;j++)
	        {
	            if(arr[i-1]<=j)
	                t[i][j]=t[i-1][j]||t[i-1][j-arr[i-1]];
	            else
	                t[i][j]=t[i-1][j];
	        }
	    }
	    //only the last layer is useful , because we want to check in the whole array 
	    //if size == n and check if sum exists from (0,sum)
	    
	    //now we want sum of s1 only from (0,sum/2)
	    //hence storing the values for which s1 exists
	    
	    vector<int>v;
	    for(int i=0;i<=sum/2;i++)
	    {
	        if(t[n][i])
	            v.push_back(i);
	    }
	    vector<int>ans;
	    for(int i=0;i<v.size();i++)
	        ans.push_back(sum-2*v[i]);
	    sort(ans.begin(),ans.end());
	    return ans[0];
	    // Your code goes here
	}
