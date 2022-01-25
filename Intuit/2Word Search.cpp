https://practice.geeksforgeeks.org/problems/word-search/1/



bool path(int row,int col,vector<vector<char>>&board,string word,int R,int C,int l,int x)
    {
        if(board[row][col]==' ')  
            return false;
            
        char temp=board[row][col];
        board[row][col]=' ';
        
        x++;
        if(x==l)
            return true;
        
        
        
        int r[4]={0,0,1,-1};
        int c[4]={1,-1,0,0};
        
        for(int i=0;i<4;i++)
        {
            if(row+r[i]>=0&&row+r[i]<R&&col+c[i]>=0&&col+c[i]<C&&
            board[row+r[i]][col+c[i]] == word[x])
                {
                    if(path(row+r[i],col+c[i],board,word,R,C,l,x))
                    return true;
                }
        }
        board[row][col]=temp;
        return false;
    }
    bool isWordExist(vector<vector<char>>& board, string word) 
    {
        int n=board.size();
        int m=board[0].size();
        int x=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==word[0] && path(i,j,board,word,n,m,word.length(),x))
                    return 1;
            }
        }
        return 0;
        // Code here
    }
