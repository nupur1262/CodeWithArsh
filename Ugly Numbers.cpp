ull getNthUglyNo(int n) 
	{
	    set<long long int>s;
	    s.insert(1);
	    
	    for(int i=0;i<n-1;i++)
	    {
	        long long int x= *s.begin();
	        s.erase(s.begin());
	        
	        s.insert(x*2);
	        s.insert(x*3);
	        s.insert(x*5);
	        
	    }
	    
	    return *s.begin();
	    // code here
	}
