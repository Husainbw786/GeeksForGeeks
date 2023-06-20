//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


int KthMissingElement(int a[], int n, int k);


int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        cout << KthMissingElement(a, n, k) << endl;
    
    }
    return 0;
}

// } Driver Code Ends


int KthMissingElement(int nums[], int n, int k)
{
    // Complete the function
    int i = 0;
    for(i=0;i<n-1;i++)
    {
        if(nums[i]+1 == nums[i+1])
        {
            continue;
        }
        else
        {
            while(nums[i]+1 != nums[i+1])
            {
               k--;
               if(k == 0)
               {
                   return nums[i] + 1;
               }
               nums[i] += 1;
            }
        }
    }
    
    return -1;
    
}