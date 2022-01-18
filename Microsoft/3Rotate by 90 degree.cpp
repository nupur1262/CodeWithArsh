https://practice.geeksforgeeks.org/problems/rotate-by-90-degree0356/1/#



void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
/* matrix : given input matrix, you are require 
 to change it in place without using extra space */
void rotate(vector<vector<int> >& matrix)
{
    int n=matrix.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            swap(&matrix[i][j],&matrix[j][i]);
        }
    }
    /*for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";    
        }
        cout<<endl;
    }
    
    cout<<endl;
    cout<<endl;*/
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<n/2;i++)
        {
            swap(&matrix[i][j],&matrix[n-i-1][j]);
        }
    }
    // Your code goes here
}
