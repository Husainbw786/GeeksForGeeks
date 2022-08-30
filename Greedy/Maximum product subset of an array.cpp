class Solution{
    public:
    long long int findMaxProduct(vector<int>&a, int n){
        //Write your code here  
        int zero_c = 0;
        int neg_c = 0;
        int max_neg = INT_MIN;
        long long int pro = 1;
        long long int mod = 1000000007;
        if(n==1)return a[0];

        for(int i=0;i<n;i++)
        {
            if(a[i] == 0)
            {
                zero_c++;
                continue;
            }
            if(a[i] < 0)
            {
                neg_c++;
                max_neg = max(a[i],max_neg);
            }
            pro = pro * a[i];
            pro = pro % mod;
        }
        if(zero_c == n)
        {
            return 0;
        }
        if(neg_c == 1 && zero_c + neg_c == n)
        {
            return 0;
        }
        if(neg_c % 2 != 0)
        {
            pro = (pro / max_neg) % mod;
        }
        return pro % mod;
    }
};
