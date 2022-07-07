class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        deque<int>dq;
        vector<int>ans;
        
        int i;
        for(i=0;i<k;i++)
        {
            while(!dq.empty() && arr[i] >= arr[dq.back()])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        ans.push_back(arr[dq.front()]);
        for(i=k;i<n;i++)
        {
            if(dq.front() == i-k)
            {
                dq.pop_front();
            }
            while(!dq.empty() && arr[i] >= arr[dq.back()])
            {
                dq.pop_back();
            }
            dq.push_back(i);
            ans.push_back(arr[dq.front()]);
        }
        return ans;
    }
};
