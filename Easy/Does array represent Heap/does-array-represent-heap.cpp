//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    bool isMaxHeap(int arr[], int n)
    {
        // Your code goes here
        int count = 0;
        for(int i=0;i<n;i++)
        {
            int x = (2*count) + 1;
            int y = (2*count) + 2;
            if(x < n)
            {
                if(arr[i] < arr[x])
                {
                    return false;
                }
            }
            if(y < n)
            {
                if(arr[i] < arr[y])
                {
                    return false;
                }
            }
            count++;
        }
        return true;
    }
};

//{ Driver Code Starts.
int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
       int n;
       cin >> n;
       int a[4*n]={0};
       for(int i =0;i<n;i++){
           cin >> a[i];
       }
       Solution ob;
       cout<<ob.isMaxHeap(a, n)<<endl;
        
    }
    return 0;
}

// } Driver Code Ends