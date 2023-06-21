//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    
    bool is_possible(int A[],int n, int m, int mid)
    {
        int students = 1;
        int pages = 0;
        int i;
        for(i=0;i<n;i++)
        {
            if(A[i] > mid)
            {
                return false;
            }
            if(A[i] + pages > mid)
            {
                students++;
                pages = 0;
                pages = A[i];
            }
            else
            {
                pages += A[i]; 
            }
        }
        if(students > m)
        {
            return false;
        }
        return true;
    }
    
    
    int findPages(int A[], int N, int M) 
    {
        //code here
       // sort(A,A+N);
       if(M > N)
       {
           return -1;
       }
        int low = A[0];
        int high = 0;
        for(int i=0;i<N;i++)
        {
            high += A[i];
        }
        int ans = -1;
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            if(is_possible(A,N,M,mid))
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends