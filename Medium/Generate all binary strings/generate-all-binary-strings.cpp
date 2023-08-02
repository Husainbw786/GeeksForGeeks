//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

    void solve(int i, string s, int num)
    {
        if(i == num)
        {
            cout<< s << " ";
            return;
        }
        
        s += '0';
        solve(i+1,s,num);
        s.pop_back();
        
        if(i == 0 || (i > 0 && s[i-1] != '1'))
        {
            s += '1';
            solve(i+1,s,num);
            s.pop_back();
        }
    }


    void generateBinaryStrings(int num){
        //Write your code
        string s = "";
        solve(0,s,num);
        
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