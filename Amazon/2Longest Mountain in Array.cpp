int longestMountain(vector<int>& arr)
    {
        int i=0;
        int upper=0,lower=0;
        int ans=0;
        int n=arr.size();
           while(i+1<n)
           {
               lower=0,upper=0;
               while(i+1<n&&arr[i]==arr[i+1])
                   i++;
               while(i+1<n&&arr[i]<arr[i+1])
               {
                   i++;
                   upper++;
               }
               while(i+1<n&&arr[i]>arr[i+1])
               {
                   i++;
                   lower++;
               }
               if(upper&&lower)
               ans=max(ans,upper+lower+1);
           }
        return ans;
    }
