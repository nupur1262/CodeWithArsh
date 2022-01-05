int findPosition(int N , int M , int K) 
    {
        if(N==1)
            return 1;
        int ans=M%N+K-1;
        return (ans==N)?ans:ans%N;
        // code here
    }
