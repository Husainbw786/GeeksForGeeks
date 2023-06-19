//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    int flo = INT_MAX;
    int cil = INT_MIN;
    int diff = INT_MAX;
    int diff2 = INT_MAX;
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i] <= x)
        {
            if(x - arr[i] < diff2)
            {
                diff2 = x - arr[i];
                flo = arr[i];
            }
        }
        if(arr[i] >= x)
        {
            if(diff > (arr[i] -x))
            {
                diff = arr[i] - x;
                cil = arr[i];
            }
        }
    }
    int a,b;
    if(flo == INT_MAX)
    {
        a = -1;
    }
    else
    {
        a = flo;
    }
    if(cil == INT_MIN)
    {
        b = -1;
    }
    else
    {
        b = cil;
    }
    pair<int,int>p;
    p.first = a;
    p.second = b;
    return p;
}