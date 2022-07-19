class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(int arr[],int n)
    {
        //Your code here
        map<int,int>mp;
        map<int,vector<int>>freq;
        int i;
        vector<int>ans;
        for(i=0;i<n;i++)
        {
           mp[arr[i]]++;
        }
      for(auto x : mp)
      {
          int val = x.second;
          while(val != 0)
          {
              freq[x.second].push_back(x.first);
                   val--;
          }
      }
      for(auto i = freq.rbegin(); i!=freq.rend();i++)
      {
          ans.insert(ans.end(),i->second.begin(), i->second.end());
      }
        return ans;
        
    }
};
