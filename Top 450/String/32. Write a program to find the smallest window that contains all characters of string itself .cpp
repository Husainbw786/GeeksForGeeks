class Solution{
    public:
    int findSubString(string str)
    {
        // Your code goes here   
        set<char>s;
        int i;
        for(i=0;i<str.size();i++)
        {
            s.insert(str[i]);
        }
        int j = 0;
        int mini = INT_MAX;
        unordered_map<char,int>mp;
        for(i=0;i<str.size();i++)
        {
            mp[str[i]]++;
            
            while(j<=i && mp.size() == s.size())
            {
                mini = min(mini,i-j+1);
                mp[str[j]]--;
                if(mp[str[j]] == 0)
                {
                    mp.erase(str[j]);
                }
                j++;
            }
        }
        return mini;
    }
};
