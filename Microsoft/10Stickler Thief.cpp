https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1/



int FindMaxSum(int arr[], int n)
    {
        //t[] at each point will store maximum value before this point
        int t[n+1];
        t[0]=0;
        t[1]=arr[0];
        t[2]=arr[0]>arr[1]?arr[0]:arr[1];
        
        for(int i=3;i<=n;i++)
        {
            //either dont take the previous value or take it and add max value before it
            t[i]=max(t[i-1],arr[i-1]+t[i-2]);
        }
        return t[n];
        // Your code here
    }
