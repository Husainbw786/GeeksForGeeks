class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    unordered_map<int,int>mp;
	    int i;
	    mp.insert({0,-1});
	    int sum = 0;
	    int ans = 0;
	    for(i=0;i<n;i++)
	    {
	        sum = sum + arr[i];
	        int rem = sum % k;
	        if(rem < 0)
	        {
	            rem = rem + k;
	        }
	        if(mp.find(rem) == mp.end())
	        {
	            mp.insert({rem,i});
	        }
	        else
	        {
	            ans = max(ans,i-mp[rem]);
	        }
	    }
	    return ans;
	}
};
