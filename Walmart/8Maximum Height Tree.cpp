https://practice.geeksforgeeks.org/problems/maximum-height-tree4803/1/?page=2&company[]=Walmart&query=page2company[]Walmart#



int height(int N)
    {
        int d = 1+(8*N);
        int p = sqrt(d);
        //cout<<p<<endl;
        return (p-1)/2;
        // code here
    }
