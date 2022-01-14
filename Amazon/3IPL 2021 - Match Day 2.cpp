https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1/

vector<int> max_of_subarrays(vector<int> arr, int n, int k) 
    {
        vector<int>ans;
        //creating a dequeue so that i am able to add and remove elements from front as well as back
        deque<int>dq;
        int i;
        
        //inserting first k elements in decending order.
        //for every element the previous smaller elements are useless so removing them
        for(i=0;i<k;i++)
        {
            while(!dq.empty()&&arr[i]>arr[dq.back()])
                dq.pop_back();
            dq.push_back(i);
        }
        
        for(;i<n;i++)
        {
            ans.push_back(arr[dq.front()]);
            
            //removing the elements not required
            while(!dq.empty()&&dq.front()<=i-k)
            {
                dq.pop_front();
            }
            
            //removing elements smaller than the current element
            while(!dq.empty()&&arr[dq.back()]<=arr[i])
            {
                dq.pop_back();
            }
            
            //adding the current element
            dq.push_back(i);
        }
        ans.push_back(arr[dq.front()]);
        return ans;
        // your code here
    }
