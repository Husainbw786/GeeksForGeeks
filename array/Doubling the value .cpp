class Solution
{
    public:
    long long solve(int n, long long a[], long long b)
    {
        //code here.
        int i;
        
        for(i=0;i<n;i++)
        {
            if(a[i] == b)
            {
                b = b*2;
            }
        }
        return b;
    }  
};
