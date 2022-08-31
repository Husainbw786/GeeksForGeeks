class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // code here
        vector<long long int>v(n+1,0);
        long long int mod = 1e9+7;
        if(n == 0)
        {
            return 0;
        }
        v[1] = 1;
        v[2] = 1;
        int i;
        for(i=2;i<=n;i++)
        {
            v[i] =  ((v[i-1]) % mod ) + ((v[i-2]) % mod );
        }
        return v[n] % mod;
    }
};
