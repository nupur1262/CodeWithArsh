https://practice.geeksforgeeks.org/problems/generate-all-possible-parentheses/1/



void function(int n , int open , int close , string s , vector<string>&v)
    {
        if(open==n && close==n)
        {
            v.push_back(s);
            return;
        }
        if(open<n)
        {
            function(n,open+1,close,s+"(",v);
        }
        if(close<open)
        {
            function(n, open,close+1,s+")",v);
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        vector<string>v;
        function(n,0,0,"",v);
        return v;
        
        // Your code goes here 
    }
