class Solution
{
    public:
    //Function to find the largest number after k swaps.
    
    void Solve(string & max, string str,int k , int idx)
    {
        if( k == 0)
        {
            return;
        }
        int n = str.length();
        char maxc = str[idx];
        for(int i = idx+1;i<n;i++)
        {
            if(maxc < str[i])
            {
                maxc = str[i];
            }
        }
        if( maxc != str[idx])
        {
            k--;
        }
        for(int i = idx;i<n;i++)
        {
            if(str[i] == maxc)
            {
                swap(str[i],str[idx]);
                if(str.compare(max) > 0)
                {
                    max = str;
                }
                Solve(max,str,k,idx+1);
                swap(str[i],str[idx]);
            }
        }
    }
    
    string findMaximumNum(string str, int k)
    {
       // code here.
       string max = str;
       Solve(max,str,k,0);
       return max;
    }
};
