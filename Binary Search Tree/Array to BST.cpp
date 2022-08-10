class Solution {
public:
   void Solve(vector<int>nums,int start,int end,vector<int>&v)
   {
       if(start > end)
       {
           return;
       }
       int mid = (start+end)/2;
       v.push_back(nums[mid]);
       Solve(nums,start,mid-1,v);
       Solve(nums,mid+1,end,v);
   }

    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        int start;
        int end;
        vector<int>v;
        Solve(nums,0,nums.size()-1,v);
        return v;
    }
};
