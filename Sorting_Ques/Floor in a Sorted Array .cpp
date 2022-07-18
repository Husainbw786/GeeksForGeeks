   int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        int i ;
        int ans = -1;
        
        for(i=0;i<n;i++)
        {
            if(v[i] <= x)
            {
                ans = i;
            }
        }
        return ans;
        
    }
};
