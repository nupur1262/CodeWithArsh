https://practice.geeksforgeeks.org/problems/length-of-largest-region-of-1s-1587115620/1/



void ones(int row,int col , vector<vector<int>>& grid , vector<vector<int>>&visited , int&cnt,int R , int C)
    {
        if(visited[row][col])
            return;
        visited[row][col]=true;
        
        static int rowNbr[]={1 , -1 , 0 ,  0 , 1 , -1 , -1 ,  1};
        static int colNbr[]={0 ,  0 , 1 , -1 , 1 , -1 ,  1 , -1};
        
        
        for(int i=0;i<8;i++)
        {
            if(row+rowNbr[i]>=0 && row+rowNbr[i]<R && col+colNbr[i]>=0 && col+colNbr[i]<C && grid[row+rowNbr[i]][col+colNbr[i]]==1  && !visited[row+rowNbr[i]][col+colNbr[i]])
            {
                cnt++;
                ones(row+rowNbr[i] , col+colNbr[i],grid ,visited,cnt, R ,C);
            }
        }
    }
    //Function to find unit area of the largest region of 1s.
    int findMaxArea(vector<vector<int>>& grid) 
    {
        int m=grid[0].size();
        int n=grid.size();
        vector<vector<int>> visited(n,vector<int>(m,false));
        
        int cnt,res=INT_MIN;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]&&!visited[i][j])
                    {
                        cnt=1;
                        ones(i,j,grid,visited,cnt , n , m );
                        res=max(res,cnt);
                    }
            }
        }
        return res;
        // Code here
    }
