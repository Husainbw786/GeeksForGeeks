class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       vector<int>lis(n,1);
       
       int i,j;
       for(i=1;i<n;i++)
       {
           lis[i] = 1;
           for(j=0;j<i;j++)
           {
               if(a[i] > a[j] && lis[i] <= lis[j] )
               {
                   lis[i] = lis[j] + 1 ;
               }
           }
       }

       return *max_element(lis.begin(), lis.end());
    }
};
