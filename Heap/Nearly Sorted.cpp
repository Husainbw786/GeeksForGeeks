vector < int > nearlySorted(vector < int > array, int n, int k) {
    // Write your code here.
    priority_queue<int,vector<int>,greater<int>>pq;
    int i;
    vector<int>v;
    for(i=0;i<n;i++)
    {
        pq.push(array[i]);
        if(pq.size()>k)
        {
            v.push_back(pq.top());
            pq.pop();
        }
    }
    while(!pq.empty())
    {
        v.push_back(pq.top());
        pq.pop();
    }
    return v;
}
