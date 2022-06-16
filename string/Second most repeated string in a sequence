class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        int max = INT_MIN;
        int sec_max = INT_MIN;
        unordered_map<string,int>mp;
        int i;
        string a = "";
        for(i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(auto x:mp)
        {
            if(x.second > max)
            {
                max = x.second;
            }
        }
        for(auto x:mp)
        {
            if(max > x.second && x.second > sec_max )
            {
                sec_max = x.second;
                a = x.first;
            }
        }
        return a;
    }
};
