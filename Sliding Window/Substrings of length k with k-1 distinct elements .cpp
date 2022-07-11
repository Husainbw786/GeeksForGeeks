
class Solution {
  public:
    int countOfSubstrings(string S, int k) {
        // code here
        int i = 0;
        int j = 0;
        int count = 0;
        unordered_map<char,int>mp;
        while(j<S.length())
        {
            mp[S[j]]++;
            if(j-i+1 == k)
            {
                if(mp.size() == k-1)
                {
                    count++;
                }
                    mp[S[i]]--;
                    if(mp[S[i]]==0)
                    {
                        mp.erase(S[i]);
                        
                    }
                    
                i++;
            }
            j++;
        }
        return count;
    }
};
