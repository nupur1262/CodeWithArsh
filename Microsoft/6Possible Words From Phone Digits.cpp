https://practice.geeksforgeeks.org/problems/possible-words-from-phone-digits-1587115620/1/#



vector<string> possibleWords(int a[], int N)
    {
        vector<string> code = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>temp;
        int x=a[0];
        
        for(int i=0;i<code[x-2].length();i++)
        {
            temp.push_back(code[x-2].substr(i,1));
        }
        for(int i=1;i<N;i++)
        {
            vector<string>v=temp;
            temp.clear();
            for(int j=0;j<v.size();j++)
            {
                for(int k=0;k<code[a[i]-2].length();k++)
                {
                    temp.push_back(v[j]+code[a[i]-2].substr(k,1));
                }
            }
        }
        return temp;
        //Your code here
    }   
