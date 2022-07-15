
class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        //code here
        int count = 0;
        int sum = 0;
        unordered_map<int,int>mp;
        mp[0] = 1;
        int i;
        for(i=0;i<n;i++)
        {
            sum = sum + arr[i];
            if(mp.find(sum) != mp.end())
            {
                count = count + mp[sum];
                
                
            }
            mp[sum]++;
        }
        return count;
        
    }
