//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& s){
        // Write your code here.
        int i;
        if(m == 1 && n == 1 && s[0] == 0)
        {
            return true;
        }
        if(m > 1)
        {
            if(s[0] == 0 && s[1] == 0)
            {
                s[0] = 1;
                n--;
            }
        }
        for(i=1;i<m-1;i++)
        {
            if(s[i] == 0)
            {
                bool flag2 = false;
                bool flag1 = false;
                if(i-1 >= 0 && s[i-1] == 0)
                {
                    flag1 = true;
                }
                if(i+1 < m && s[i+1] == 0)
                {
                    flag2 = true;
                }
                if(flag1 && flag2)
                {
                    s[i] = 1;
                    n--;
                }
            }
        }
        if(m > 1 && s[m-1] == 0 && s[m-2] == 0)
        {
            n--;
        }
        if(n <= 0)
        {
            return true;
        }
        return false; 
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<int> seats(m);
        for (int i = 0; i < m; i++) {
            cin >> seats[i];
        }
        Solution obj;
        if (obj.is_possible_to_get_seats(n, m, seats)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}

// } Driver Code Ends