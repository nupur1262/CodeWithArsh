class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k)
    {
        long long int ans=0;
        long long p=a[0];
        long long int start=0;
        /*if(p<k)
        {
            ans++;
        }
        else
        {
            start++;
            p=1;
        }*/
        long long int i=0;
        for(i=0;i<n;i++)
        {
            
            if(p<k && (i+1)<=n-1)
            {
                ans=ans+1+i-start;
                p=p*a[i+1];
            }
            else if((i+1)<=n-1)
            {
                /*if(p/a[start]==0)
                p=1;
                else
                p=p/a[start];*/
                p=p/a[start];
                start++;
                i--;
            }
        }
        i--;
        while(start!=i+1)
        {
            if(p<k)
            {
                ans=ans+1+i-start;
                break;
            }
            p=p/a[start];
            start++;
        }
        return ans;
    }
};
