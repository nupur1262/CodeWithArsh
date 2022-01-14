https://practice.geeksforgeeks.org/problems/column-name-from-a-given-column-number4244/1/#

string colName (long long int n)
    {
        string ans="";
        while(n>0)
        {
            if(n%26==0)
            {
                ans.push_back('Z');
                n=n/26;
                n--;
                
            }
            else
            {
                char ch=((n%26)+65)-1;
                ans.push_back(ch);
                n=n/26;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
        // your code here
    }
