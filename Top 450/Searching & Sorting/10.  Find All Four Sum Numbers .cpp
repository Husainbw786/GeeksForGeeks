class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        set<vector<int>>st;
        
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                int start = j+1;
                int end = n-1;
                while(start < end)
                {
            long long int sum = arr[i] + arr[j] + arr[start] + arr[end];
                   if(sum > k)
                   {
                       end--;
                   }
                   else if(sum < k)
                   {
                       start++;
                   }
                   else
                   {
                       st.insert({arr[i],arr[j],arr[start],arr[end]});
                       start++;
                       end--;
                   }
                    
                }
            }
        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};
