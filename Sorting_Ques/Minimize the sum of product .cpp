class Solution{
    public:
    long long int minValue(int a[], int b[], int n)
    {
        // Your code goes here
        sort(a,a+n);
        int i;
       sort(b,b+n,greater<int>());
        
        long long int sum = 0;
        for(i=0;i<n;i++)
        {
            sum += a[i]*b[i];
        }
        return sum;
        
    }
};
