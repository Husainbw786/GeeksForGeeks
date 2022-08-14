class Solution{
  public:
    int minOperations(int arr[], int n, int k) {
        // code here
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<n;i++)
        {
            pq.push(arr[i]);
        }
        int count = 0;
        while(! pq.empty())
        {
             if(pq.top() >= k)
            {
                break;
            }
            int temp1 = pq.top();
            pq.pop();
            if(pq.empty())
            {
                return -1;
            }
            int temp2 = pq.top();
            pq.pop();
            pq.push(temp1 + temp2);
            count++;
        }
        return count;
    }
};
