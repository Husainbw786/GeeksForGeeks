class Solution{
    public:
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        // Your code goes here
        priority_queue<int>pq;
        long long ans = 0;
        for(int i=0;i<N;i++)
        {
            pq.push(A[i]);
        }
        while(pq.size() >= K2)
        {
            pq.pop();
        }
        while(pq.size() > K1)
        {
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};
