//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string s){
        //code
        int n = s.size();
        int maxi = INT_MIN;
        int i = 0;
        int j = 0;
        int arr[26] = {0};
        while(j < n)
        {
            arr[s[j] - 'a']++;
            while(i < n && arr[s[j] - 'a'] != 1)
            {
                arr[s[i] - 'a']--;
                i++;
            }
            maxi = max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends