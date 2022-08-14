
class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        vector<int>v;
          priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<n;i++)
        {
            pq.push(arr[i]);
            if(pq.size() > k)
            {
                pq.pop();
            }
        }
        while(! pq.empty())
        {
            v.push_back(pq.top());
            pq.pop();
        }
        reverse(v.begin(),v.end());
        return v;
        
    }
};
