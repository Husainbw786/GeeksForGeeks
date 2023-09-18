//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long ans = 0;
    
    void merge(long long arr[], int low, int mid, int high)
    {
        int i = low;
        int j = mid+1;
        vector<long long int>temp;
        while(i <= mid && j <= high)
        {
            if(arr[i] <= arr[j])
            {
                temp.push_back(arr[i]);
                i++;
            }
            else
            {
                temp.push_back(arr[j]);
                j++;
                ans += mid-i+1;
            }
        }
         while(i <= mid)
        {
          temp.push_back(arr[i]);
          i++;  
        }
        while(j <= high)
        {
             temp.push_back(arr[j]);
             j++;
        }
           
        for(i=low;i<=high;i++)
        {
            arr[i] = temp[i-low];
        }
    }
    
    void merge_sort(long long arr[], long long N, int low, int high)
    {
        if(low >= high)
        {
            return;
        }
        int mid = low + (high - low)/2;
        merge_sort(arr,N,low,mid);
        merge_sort(arr,N,mid+1,high);
        
        merge(arr,low,mid,high);
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        int low = 0;
        int high = N-1;
        merge_sort(arr,N,low,high);
        return ans;
        
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends