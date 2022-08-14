class Solution{
    public:
    int maxDistinctNum(int arr[], int n, int k)
    {
    	// Complete the function
    	priority_queue<pair<int,int>>pq;
    	unordered_map<int,int>mp;
    	int i;
    	for(i=0;i<n;i++)
    	{
    	    mp[arr[i]]++;
    	}
    	for(auto x:mp)
    	{
    	    pq.push({x.second,x.first});
    	}
    	while(k--)
    	{
    	    pair<int,int>temp = pq.top();
    	    pq.pop();
    	    if(temp.first > 1)
    	    {
    	        pq.push({temp.first-1,temp.second});
    	    }
    	}
    	return pq.size();
    }
};
