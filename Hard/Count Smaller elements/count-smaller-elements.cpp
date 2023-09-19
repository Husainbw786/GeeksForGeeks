//{ Driver Code Starts
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    
    void merge(vector<pair<int,int>>&v,vector<int>&count,int low, int mid, int high)
    {
        vector<pair<int,int>>temp(high-low+1);
        int i = low;
        int j = mid+1;
        int k = 0;
        while(i <= mid && j <= high)
        {
            if(v[i].first <= v[j].first)
            {
                temp[k] = v[j];
                k++;
                j++;
            }
            else
            {
                count[v[i].second] += high-j+1;
                temp[k] = v[i];
                i++;
                k++;
            }
        }
        while(i <= mid)
        {
            temp[k] = v[i];
            i++;
            k++;
        }
        while(j <= high)
        {
            temp[k] = v[j];
            j++;
            k++;
        }
        
        for(int i=low;i<=high;i++)
        {
            v[i] = temp[i-low];
        }
    }

    void mergeSort(vector<pair<int,int>>&v, vector<int>&count, int low, int high)
    {
        if(low >= high)
        {
            return;
        }
        int mid = low + (high-low)/2;
        mergeSort(v,count,low,mid);
        mergeSort(v,count,mid+1,high);
        
        merge(v,count,low,mid,high);
        
    }

	vector<int> constructLowerArray(int *arr, int n) {
	    // code here
	    vector<pair<int,int>>v;
	    for(int i=0;i<n;i++)
	    {
	        v.push_back({arr[i],i});
	    }
	    vector<int>count(n,0);
	    int low = 0;
	    int high = n-1;
	    mergeSort(v,count,low,high);
	    return count;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.constructLowerArray(arr, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends