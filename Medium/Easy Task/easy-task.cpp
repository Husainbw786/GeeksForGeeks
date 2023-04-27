//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

    char solve(int freq[], int k)
    {
        int count = 0;
        for(int i=25;i>=0;i--)
        {
            count += freq[i];
            if(count >= k)
            {
                return i + 'a';
            }
        }
        return '.';
    }
   
    vector<char> easyTask(int n,string s,int ql,vector<vector<string>> &q){
        // Code here
        int i;
        vector<char>v;
        for(i=0;i<ql;i++)
        {
            if(q[i][0] == "1")
            {
                int x = stoi(q[i][1]);
                string a = q[i][2];
                s[x] = a[0];
            }
            else
            {
                int left = stoi(q[i][1]);
                int right = stoi(q[i][2]);
                int k = stoi(q[i][3]);
                int freq[26] = {0};
                for(int j=left;j<=right;j++)
                {
                    int ele = s[j] - 'a';
                    freq[ele]++;
                }
                char ch = solve(freq,k);
                v.push_back(ch);
            }
        }
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int q;
        cin>>q;
        vector<vector<string>> queries(q);
        for(int i=0;i<q;i++){
            string x;
            cin>>x;
            if(x=="1"){
                string p,q;
                cin>>p>>q;
                queries[i]={"1",p,q};
            }
            else{
                string p,q,r;
                cin>>p>>q>>r;
                queries[i]={"2",p,q,r};
            }
        }
        Solution ob;
        vector<char> ans=ob.easyTask(n,s,q,queries);
        for(auto ch:ans){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

// } Driver Code Ends