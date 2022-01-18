https://practice.geeksforgeeks.org/problems/prerequisite-tasks/1/



bool cycle(vector<bool>&visited,vector<bool>&curr, int x , vector<int>adj[])
    {
        if(!visited[x])
        {
            curr[x]=true;
            visited[x]=true;
            for(int i=0;i<adj[x].size();i++)
            {
                if(!visited[adj[x][i]])
                {
                    if(cycle(visited,curr,  adj[x][i] , adj))
                        return true;
                }
                else if(curr[adj[x][i]]==true)
                    return true;
            }
        }
        curr[x]=false;
        return false;
    }
	//Function to detect cycle in a directed graph.
	bool isCyclic(int V, vector<int> adj[]) 
	{
	    vector<bool>visited(V,false);
	    vector<bool>curr(V,false);
	    for(int i=0;i<V;i++)
	    {
	        if(!visited[i] && cycle(visited,curr,i,adj))
	            return true;
	    }
	    return false;
	   	// code here
	}
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) 
	{
	    vector<int> adj[N];
	    for(auto i:prerequisites)
	    {
	        adj[i.second].push_back(i.first);
	    }
	    return !isCyclic(N,adj);
	    // Code here
	}
