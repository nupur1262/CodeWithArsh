https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1/#



vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int>v;
        
        int k=0,l=0;//k - starting row index l-starting column index
    
        while(k<r && l<c)
        {
            for(int i=l;i<c;i++)
            {
                v.push_back(matrix[k][i]);        
            }
            k++;
            for(int i=k;i<r;i++)
            {
                v.push_back(matrix[i][c-1]);
            }
            c--;
            if(k<r)
            {
                for(int i=c-1;i>=l;i--)
                {
                    v.push_back(matrix[r-1][i]);
                }
                r--;
            }
            if(l<c)
            {
                for(int i=r-1;i>=k;i--)
                {
                    v.push_back(matrix[i][l]);
                }
                l++;
            }
        }
        return v;
        // code here 
    }
