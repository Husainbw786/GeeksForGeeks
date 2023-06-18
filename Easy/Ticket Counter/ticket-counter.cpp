//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int k) {
        // code here
        deque<int>dq;
        int i;
        for(int i=1;i<=N;i++)
        {
            dq.push_back(i);
        }
        int count = 0;
        while(dq.size() != 1)
        {
            if(count % 2 == 0)
            {
                int x = k;
                while(dq.size() != 1 && x--)
                {
                    dq.pop_front();
                }
                if(dq.size() == 1)
                {
                    return dq.front();
                }
            }
            else
            {
                int x = k;
                while(dq.size() != 1 && x--)
                {
                    dq.pop_back();
                }
                if(dq.size() == 1)
                {
                    return dq.front();
                }
            }
            count++;
        }
        return dq.front();
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends