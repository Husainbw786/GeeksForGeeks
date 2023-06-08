//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int arr[],int n){
        // code here
        int i = 0;
        int j = 0;
        while(j < n)
        {
            if(arr[i] == arr[j])
            {
                j++;
                continue;
            }
            else if(arr[i] != arr[j])
            {
                i++;
                swap(arr[i],arr[j]);
                j++;
            }
        }
        return i+1;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends