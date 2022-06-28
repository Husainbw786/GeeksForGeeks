class Solution {
  public:
    bool areKAnagrams(string str1, string str2, int k) {
        // code here
        int n = str1.length();
        int m = str2.length();
        if(n != m )
        {
            return false;
        }
        unordered_map<char,int>mp;
        int i;
        for(i=0;i<n;i++)
        {
            mp[str1[i]]++;
        }
        for(i=0;i<m;i++)
        {
            if(mp[str2[i]])
            {
                mp[str2[i]]--;
            }
            else
            {
                if(k==0)
                {
                    return false;
                }
                k--;
            }
        }
        return true;
    }
};
