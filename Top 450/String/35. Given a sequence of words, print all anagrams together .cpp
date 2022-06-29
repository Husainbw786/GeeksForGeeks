
class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& str) {
        //code here
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>m;
        int i;
        for(i=0;i<str.size();i++)
        {
            string s = str[i];
            sort(str[i].begin(),str[i].end());
            m[str[i]].push_back(s);
            
        }
        for(auto x:m)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};
