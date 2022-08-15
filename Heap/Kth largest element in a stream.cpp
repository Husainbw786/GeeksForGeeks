class Solution {
  public:
    vector<int> kthLargest(int k, int arr[], int n) {
        // code here
        priority_queue<int,vector<int>,greater<int>>pq;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            pq.push(arr[i]);
            if(pq.size() < k)
            {
             v.push_back(-1);   
            }
            else if(pq.size() == k)
            {
                v.push_back(pq.top());
            
            }
            else
            {
                pq.pop();
                v.push_back(pq.top());
            }
        }
        return v;
    }
};
