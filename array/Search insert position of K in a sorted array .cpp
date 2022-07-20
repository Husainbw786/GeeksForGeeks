class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        // code here
        int i;
        int ans = 0;
        
        for(i=0;i<N;i++)
        {
            if(Arr[i] == k)
            {
                ans = i;
            }
            else if(Arr[i] < k )
            {
                ans = i+1;
            }
        }
        return ans;
    }
};
