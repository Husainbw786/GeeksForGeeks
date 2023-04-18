//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool wifiRange(int N, string S, int X){
        // code here
        vector<bool>v(N,false);
        int i;
        for(i=0;i<N;i++)
        {
            if(S[i] == '1')
            {
                v[i] = true;
                int a = i-1;
                int k = X;
                while(a >= 0 && k--)
                {
                    if(v[a] == true)
                    {
                        break;
                    }
                    v[a] = true;
                    a--;
                }
                k = X;
                a = i+1;
                while(a < N && k--)
                {
                    v[a] = true;
                    a++;
                }
            }
        }
        for(i=0;i<N;i++)
        {
            if(v[i] == false)
            {
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends