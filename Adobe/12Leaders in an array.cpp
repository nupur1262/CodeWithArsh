https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1/



vector<int> leaders(int a[], int n)
    {
        vector<int>v;
        stack<int>st;
        st.push(a[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            if(!st.empty()&&a[i]>=st.top())
                st.push(a[i]);
        }
        while(!st.empty())
        {
            v.push_back(st.top());
            st.pop();
        }
        return v;
        // Code here
        
    }
