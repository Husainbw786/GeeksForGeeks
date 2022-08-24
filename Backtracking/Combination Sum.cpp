class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    
void Solve (int i, int target, vector<int>& arr, vector<vector<int>>& ans, vector<int>& temp)
    {
        if( i == arr.size())
        {
            if(target == 0)
            {
                ans.push_back(temp);
            }
            return;
        }
        if( arr[i] <= target)
        {
            temp.push_back(arr[i]);
            Solve(i,target-arr[i],arr,ans,temp);
            temp.pop_back();
        }
        Solve(i+1,target,arr,ans,temp);
    }
    
    
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        vector<vector<int>>ans;
        //set<int>st;
        int i;
       set<int>st(A.begin(),A.end()); 
       A.assign(st.begin(),st.end()); 
        vector<int>temp;
        Solve(0,B,A,ans,temp);
        return ans;
    }
};
