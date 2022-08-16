class Solution{
public:
    int kthLargest(vector<int> &Arr,int N,int K){
        priority_queue<pair<int,int>>pq;
        int i;
        int sum = 0;
        for(i=0;i<N;i++)
        {
            sum = 0;
            for(int j=i;j<N;j++)
            {
            sum = sum + Arr[j];
            pq.push({sum,Arr[i]});
           
            }
        }
        vector<int>v;
        while(K--)
        {
            v.push_back(pq.top().first);
            pq.pop();
        }
        int ans = v[v.size()-1];
        return ans;
        
    }
};
