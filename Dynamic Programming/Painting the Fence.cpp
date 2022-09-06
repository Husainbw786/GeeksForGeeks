class Solution{
    public:
    long long countWays(int n, int k){
        // code here
        long long mod = 1000000007;
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return k;
        }
        long long same = k % mod;
        long long diff = (k*(k-1)) % mod;
        int i;
        for(long long i=3;i<=n;i++)
        {
            long long prev = diff % mod;
            diff = ((same+diff)*(k-1)) % mod;
            same = prev % mod;
        }
        return (same + diff) % mod;
    }
};
