//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        // code here
        priority_queue<pair<int,int>>pq;
        int i;
        long long int count = 0;
        for(i=0;i<N;i++)
        {
            pq.push({A[i],i});
        }
        while(!pq.empty() && K--)
        {
            int top = pq.top().first;
            int idx = pq.top().second;
            pq.pop();
            count += top;
            top = top / 2;
            pq.push({top,idx});
           
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends