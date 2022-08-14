class Solution{
    public:
    vector<int> TopK(vector<int>& array, int k)
    {
        // code here
        
        priority_queue<pair<int,int>>pq;
        int i;
        unordered_map<int,int>mp;
        for(i=0;i<array.size();i++)
        {
            mp[array[i]]++;
        }
        for(auto x: mp)
        {
            pq.push({x.second,x.first});
        }
        vector<int>v;
        while(k--)
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
        
    }
};
