https://practice.geeksforgeeks.org/problems/nuts-and-bolts-problem0431/1#

void matchPairs(char nuts[], char bolts[], int n)
	{
	    set<char>nut;
	    set<char>bolt;
	    
	    for(int i=0;i<n;i++)
	    {
	        nut.insert(nuts[i]);
	    }
	    for(int i=0;i<n;i++)
	    {
	        bolt.insert(bolts[i]);
	    }
	    
	    /*for(auto i:nut)
	    {
	        cout<<i<<" ";
	    }*/
	    char arr[9]={'!' ,'#' ,'$' ,'%' ,'&' ,'*', '@' ,'^' ,'~'};
	    
	    int j=0;
	    for(int i=0;i<9;i++)
	    {
	        if(j<n)
	        {
    	        if(nut.find(arr[i])!=nut.end() and bolt.find(arr[i])!=bolt.end());
    	        {
    	            //cout<<*nut.find(arr[i])<<"  "<<*bolt.find(arr[i])<<endl;
    	            //cout<<i<<"  "<<j<<endl;
    	            nuts[j]=arr[i];
    	            bolts[j]=arr[i];
    	            j++;
    	             if(j == n)
                        break;
    	            //cout<<endl;
    	        }
    	        
    	        /*if(nut.find(arr[i])!=nut.end())
    	        {
    	            if(bolt.find(arr[i])!=bolt.end())
    	            {
    	                //cout<<arr[i]<<endl;
    	                nuts[j]=arr[i];
    	                bolts[j]=arr[i];
    	                j++;
    	            }
    	        }*/
	        }
	    }
	    // code here
	}
