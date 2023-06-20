//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int sumcount(vector<int>& nums, int mid){
      int sum=0;
      for(int i=0; i<nums.size(); i++){
          sum+=nums[i]/mid+((nums[i]%mid)!=0);
      }
      return sum;
  }
  
    int smallestDivisor(vector<int>& nums, int k) {

        int s=1,e=*max_element(nums.begin(), nums.end()), ans=0;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(sumcount(nums, mid)<=k){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];

        Solution obj;
        cout << obj.smallestDivisor(vec, k) << endl;
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends