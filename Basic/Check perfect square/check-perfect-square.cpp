//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int checkPerfectSquare(int N){
        // code here 
        int x = sqrt(N);
        if(x*x == N)
        {
            return 1;
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.checkPerfectSquare(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends