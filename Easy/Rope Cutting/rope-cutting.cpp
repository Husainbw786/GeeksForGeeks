//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
        vector<int> RopeCutting(int arr[], int n)
    {
        // Complete the function
     //   1 2 2 5 5 6 6 8 9 11 11
       int i;
       sort(arr,arr+n);
       vector<int>ans;
       int last_idx = 0;
       for(i=0;i<n;i++)
       {
           while(i+1 < n && arr[i] == arr[i+1])
           {
               i++;
           }
           last_idx = i;
           if(i == n-1)
           {
               break;
           }
           ans.push_back(n-i-1);
       }
       
      return ans;   
    }
};

//{ Driver Code Starts.
int main()
{   
    int T;
    cin>> T;
    while(T--)
    {
       	int n;
       	cin>>n;
       	int arr[n+1];
       	for(int i=0;i<n;i++)
       	   cin>>arr[i];
        
        vector<int> v;
        Solution ob;
        v = ob.RopeCutting(arr, n);
        for(int i : v){
            cout << i << " ";
        }
        cout << endl;
        
        
    }
  return 0;
}
// } Driver Code Ends