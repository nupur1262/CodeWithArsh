https://practice.geeksforgeeks.org/problems/sorted-subsequence-of-size-3/1



vector<int> find3Numbers(vector<int> arr, int N) 
    {
        int smaller[N],larger[N];
        smaller[0]=-1;
        int min=0;
        for(int i=1;i<N;i++)
        {
            if(arr[i]<=arr[min])
            {
                min=i;
                smaller[i]=-1;
            }
            else
                smaller[i]=min;
        }
        
        larger[N-1]=-1;
        int max=N-1;
        for(int i=N-2;i>=0;i--)
        {
            if(arr[i]>=arr[max])
            {
                max=i;
                larger[i]=-1;
            }
            else
                larger[i]=max;
        }
        
        /*for(int i=1;i<N;i++)
            cout<<smaller[i]<<" "<<larger[i]<<endl;*/
        int element=-1;
        for(int i=1;i<N;i++)
        {
            if(smaller[i]!=-1&& larger[i]!=-1)
                element=i;
        }
        vector<int>v;
        //cout<<element<<" ";
        if(element==-1)
            return v;
        else
        {
            for(int i=0;i<element;i++)
            {
                if(arr[i]<arr[element])
                    {
                        v.push_back(arr[i]);
                        break;
                    }
            }
            v.push_back(arr[element]);
            for(int i=element+1;i<N;i++)
            {
                if(arr[i]>arr[element])
                {
                    v.push_back(arr[i]);
                    break;
                }
            }
            
            /*for(int i=0;i<3;i++)
                cout<<v[i]<<" ";*/
            return v;
        }
        // Your code here
    }
