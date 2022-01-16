https://practice.geeksforgeeks.org/problems/generate-binary-numbers-1587115620/1/#



vector<string> generate(int N)
{
    vector<string>v;
    v.push_back("1");
    
    for(int i=1;i<N;i++)
    {
        string temp=v[i-1];
        int len=temp.length();
        int j=len-1;
        while(j>=0)
        {
            if(temp[j]=='1')
                {
                    //cout<<"value of j is "<<j<<endl;
                    temp[j]='0';
                    //cout<<temp[j]<<endl;
                }
            else
            {
                temp[j]='1';
                break;
            }
            j--;
        }
        if(j<=0)
            temp="1"+temp;
        v.push_back(temp);
    }
    return v;
	// Your code here
}
