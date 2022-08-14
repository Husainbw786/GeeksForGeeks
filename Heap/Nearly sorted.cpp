class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int num, int K){
        // Your code here
        priority_queue<int,vector<int>,greater<int>>pq;
        int i;
        vector<int>v;
        for(i=0;i<num;i++)
        {
            pq.push(arr[i]);
            if(pq.size()>K)
            {
                v.push_back(pq.top());
                pq.pop();
            }
        }
        while(K--)
        {
            v.push_back(pq.top());
            pq.pop();
        }
        return v;
    }
};
