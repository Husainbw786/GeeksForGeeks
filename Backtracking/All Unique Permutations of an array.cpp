
class Solution {
  public:
  
  void Solve(int freq[],vector<int>&v,vector<int>arr,set<vector<int>>&st)
  {
      if(v.size() == arr.size())
      {
        
          st.insert(v);
          return;
      }
      for(int i=0;i<arr.size();i++)
      {
          if(!freq[i])
          {
              v.push_back(arr[i]);
              freq[i] = 1;
              Solve(freq,v,arr,st);
              freq[i] = 0;
              v.pop_back();
          }
      }
  }
  
    vector<vector<int>> uniquePerms(vector<int> arr ,int n) {
        // code here
        set<vector<int>>st;
        vector<int>v;
        int freq[n];
        int i;
        for(i=0;i<n;i++)
        {
            freq[i] = 0;
        }
        Solve(freq,v,arr,st);
        vector<vector<int>>ans;
        for(auto x : st)
        {
            ans.push_back(x);
        }
        return ans;
        
    }
};
