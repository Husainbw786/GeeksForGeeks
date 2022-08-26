class Solution
{
    public:
    long long countKdivPairs(int arr[], int n, int k)
    {
        //code here
        unordered_map<int,int>mp;
        long long count = 0;
        int i;
        for(i=0;i<n;i++)
        {
            int rem = arr[i] % k;
            arr[i] = rem;
        }
        for(i=0;i<n;i++)
        {
            if(mp.find(k-arr[i]) != mp.end())
            {
                count += mp[k-arr[i]];
            }
        
        if(arr[i] == 0)
        {
            mp[k-arr[i]] += 1;
        }
        else
        {
            mp[arr[i]]++;
        }
        }
        return count;
    }
};
