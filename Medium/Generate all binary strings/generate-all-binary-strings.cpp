//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

    void solve(int i, string temp, int n)
    {
        if(i == n)
        {
            cout << temp << " ";
            return;
        }
        solve(i+1,temp + "0",n);
        if(temp.back() != '1')
        {
            solve(i+1,temp+'1',n);
        }
        
    }

    void generateBinaryStrings(int num){
        //Write your code
        
        solve(0,"",num);
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        obj.generateBinaryStrings(n);
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends