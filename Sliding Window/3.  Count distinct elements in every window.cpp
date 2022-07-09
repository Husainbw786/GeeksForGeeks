class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        unordered_map<int,int>mp;
        vector<int>v;
        int i = 0;
        int j = 0;
        
        while(j<n)
        {
            mp[A[j]]++;
            
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                v.push_back(mp.size());
                mp[A[i]]--;
                if(mp[A[i]]==0)
                {
                    mp.erase(A[i]);
                    
                }
                i++;
                j++;
            }
        }
        return v;
    }
};
