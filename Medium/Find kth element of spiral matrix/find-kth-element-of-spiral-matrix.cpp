//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int matrix[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		 int i;
        //vector<int>v;
        int top = 0;
        int bottom = n-1;
        int right = m-1;
        int left = 0;
        while(top <= bottom && left <= right)
        {
            for(i=left;i<=right;i++)
            {
             //   v.push_back(matrix[top][i]);
                k--;
                if(k==0)
                {
                    return matrix[top][i];
                }
            }
            top++;
            
            for(i=top;i<=bottom;i++)
            {
              //  v.push_back(matrix[i][right]);
                k--;
                if(k==0)
                {
                    return matrix[i][right];
                }
            }
            right--;
            
            if(top <= bottom)
            {
                for(i=right;i>=left;i--)
                {
                //    v.push_back(matrix[bottom][i]);
                    k--;
                    if(k==0)
                    {
                        return matrix[bottom][i];
                    }
                }
                bottom--;
            }
            
            if(left <= right)
            {
                for(i=bottom;i>=top;i--)
                {
                 //   v.push_back(matrix[i][left]);
                    k--;
                    if(k==0)
                    {
                        return matrix[i][left];
                    }
                }
                left++;
            }
            
        }
        return 0;

    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends