# Express as sum of power of natural numbers



int ways(int n , int x , int sum,int start)
    {
        int res=pow(start,x);
        if(res==sum)
            return 1;
        if(res>sum)
            return 0;
            
        int m=ways(n,x,sum-res,start+1);//dont include the start element
        int y=ways(n,x,sum,start+1);//include the start element
        
        return m+y;
    }
    int numOfWays(int n, int x)
    {
        return ways(n,x,n,1);
        // code here
    }
