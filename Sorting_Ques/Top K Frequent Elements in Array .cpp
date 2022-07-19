class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
       vector<pair<int,int>>v;
       vector<int>ans;
       unordered_map<int,int>mp;
       for(int i=0;i<nums.size();i++){
           mp[nums[i]]++;
       }
       for(auto i:mp){
           v.push_back({i.second,i.first});
       }
       sort(v.begin(),v.end());
       reverse(v.begin(),v.end());
       int j=0;
       for(auto i:v){
           if(j<k){
               ans.push_back(i.second);
           }
           
           j++;
       }
       
       return ans;
    }
};
