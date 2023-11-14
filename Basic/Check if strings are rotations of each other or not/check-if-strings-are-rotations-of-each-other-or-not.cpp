//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        if(s1==s2) return 1;
        int n = s1.size();
        int m = s2.size();
        queue<char> q1,q2;
        string s="";


        for(int i=0;i<m;i++)
           q1.push(s2[i]);
           
        for(int i=0;i<n;i++)
            q2.push(s1[i]);
            
        for(int i=0;i<m;i++){
            char c=q1.front();
            q1.pop();
            q1.push(c);
            if(q1==q2) return 1;
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
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends