
class Solution{
    public:
    vector<int> Kclosest(vector<int>arr, int n, int x, int k) 
    { 
        // Your code goes here 
        
        priority_queue<pair<int,int>>pq;
        int i;
        vector<int>v;
        for(i=0;i<n;i++)
        {
            pq.push({abs(arr[i]-x),arr[i]});
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        while(!pq.empty())
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
        sort(v.begin(),v.end());
        return v;
        
    }  
};
