class Solution
{
    public:
    string rearrangeString(string str)
    {
        //code here
        priority_queue<pair<int,char>>pq;
        unordered_map<char,int>mp;
        string v;
        for(int i=0;i<str.size();i++)
        {
            mp[str[i]]++;
        }
        for(auto x:mp)
        {
            pq.push({x.second,x.first});
        }
        while(pq.size()>1)
        {
            auto x1 = pq.top();
            pq.pop();
            auto x2 = pq.top();
            pq.pop();
            v.push_back(x1.second);
            v.push_back(x2.second);
            if(x1.first - 1 > 0)
            {
                pq.push({x1.first-1,x1.second});
            }
            
            if(x2.first - 1 > 0)
            {
                pq.push({x2.first-1,x2.second});
            }
        }
        if(pq.size() == 1)
        {
            if(pq.top().first == 1)
            {
                v.push_back(pq.top().second);
                return v;
            }
             else
            {
                return "-1";
            }
        }
       
        if(pq.size() == 0)
        {
            return v;
        }
        return "-1";
    }
    
};
