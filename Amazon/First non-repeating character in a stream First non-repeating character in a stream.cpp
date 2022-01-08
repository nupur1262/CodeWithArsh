string FirstNonRepeating(string A)
		{
		    queue<char>q;
		    string ans="";
		    int count[10001];
		    for(int i=0;i<10001;i++)
		    {
		        count[i]=0;
		    }
		    int i=0;
		    while(i<A.length())
		    {
		        q.push(A[i]);
		        count[A[i]-'a']++;
		        
		        while(!q.empty())
		        {
		            if(count[q.front()-'a']>1)
		                q.pop();
		            else
		                {
		                    ans+=q.front();
		                    break;
		                }
		        }
		        if(q.empty())
		            ans+="#";
		        i++;
		    }
		    return ans;
		}
