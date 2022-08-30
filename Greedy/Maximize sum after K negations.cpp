class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
        int i=0;
        sort(a,a+n);
       while(i < k)
       {
           if(a[i] < 0)
           {
               a[i] = a[i] - 2*a[i];
           }
           else
           {
               break;
           }
           i++;
       }
       sort(a,a+n);
       while(i<k)
       {
           a[0] = a[0] - 2*a[0];
           i++;
       }
     
        long long sum = 0;
        for(i=0;i<n;i++)
        {
            sum = sum + a[i];
        }
        return sum;
    }
};
