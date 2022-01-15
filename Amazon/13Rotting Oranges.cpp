https://leetcode.com/problems/rotting-oranges/



int isvalid(int x,int y,int n,int m)
    {
        if(x<0||x>=n||y<0||y>=m)
            return 0;
        return 1;
    }
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m = grid[0].size();
        
        queue<pair<int,int>>q;
        
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                    grid[i][j]=0;
                }
            }
        }
        int count=0;
        int dx[]={0,0,1,-1};
        int dy[]={1,-1,0,0};
        
        while(!q.empty())
        {
            int s=q.size();
            int flag=0;
            while(s--)
            {
                int x=q.front().first;
                int y=q.front().second;
                
                q.pop();
                for(int i=0;i<4;i++)
                {
                    if(isvalid(x+dx[i],y+dy[i],n,m)&&grid[x+dx[i]][y+dy[i]]==1)
                    {
                        flag=1;
                        grid[x+dx[i]][y+dy[i]]=0;
                        q.push({x+dx[i],y+dy[i]});
                    }
                }
            }
            if(flag)
                    count++;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    return -1;
                }
            }
        }
        return count;
    }
