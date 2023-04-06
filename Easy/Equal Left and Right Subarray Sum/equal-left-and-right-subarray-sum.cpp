//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }
 
    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int equalSum(int N, vector<int> &A) {
        // code here
        vector<int>pre;
        vector<int>suf;
        int n = A.size();
        int sum = 0;
        int i;
        for(i=0;i<n;i++)
        {
          sum += A[i];
          pre.push_back(sum);
        }
        sum = 0;
        for(i=n-1;i>=0;i--)
        {
            sum += A[i];
            suf.push_back(sum);
        }
        reverse(suf.begin(),suf.end());
        for(i=0;i<n;i++)
        {
            if(suf[i] == pre[i])
            {
                return i+1;
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N; 
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        int res = obj.equalSum(N, A);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends