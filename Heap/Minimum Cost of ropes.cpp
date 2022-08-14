class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        
        for(int i=0;i<n;i++)
        {
            pq.push(arr[i]);
        }
        if(pq.size() == 1)
        {
            return 0;
        }
        long long sum = 0;
        while(!pq.empty())
        {
            long long temp1 = pq.top();
            pq.pop();
            long long temp2 = pq.top();
            pq.pop();
            sum += temp1 + temp2;
            if(!pq.empty())
            {
                pq.push(temp1+temp2);
            }
        }
        return sum;
    }
};
