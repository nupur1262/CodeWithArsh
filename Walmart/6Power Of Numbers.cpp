https://practice.geeksforgeeks.org/problems/power-of-numbers-1587115620/1/?company[]=Walmart&company[]=Walmart&page=1&query=company[]Walmartpage1company[]Walmart#



long long power(int N,int R)
    {
        if(R==0)
            return 1;
        long long int m = 1000000007;
        long long int x = power(N,R/2);
        if(R%2==0)
        {
            return (x*x)%m;
        }
        else
        {
            return ((x*x)%m*N)%m;
        }
       //Your code here
        
    }
