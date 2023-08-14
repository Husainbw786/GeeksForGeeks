//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        sort(nums.begin(),nums.end());
        int i = 0;
        int n = nums.size();
        vector<int>v;
        while(i<n-1)
        {
            if(nums[i] == nums[i+1])
            {
                i += 2;
            }
            else
            {
                v.push_back(nums[i]);
                if(v.size() == 2)
                {
                    break;
                }
                i++;
            }
        }
        if(nums[n-2] != nums[n-1])
        {
            v.push_back(nums[n-1]);
        }
        return v;
    }
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends