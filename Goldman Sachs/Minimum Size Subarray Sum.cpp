int minSubArrayLen(int target, vector<int>& nums) 
    {
        int sum=0;
        int start=0;
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            while(sum>=target)
            {
                ans=min(ans,i-start+1);
                sum=sum-nums[start];
                start++;
            }
        }
        return (ans==INT_MAX)?0:ans;
    }
