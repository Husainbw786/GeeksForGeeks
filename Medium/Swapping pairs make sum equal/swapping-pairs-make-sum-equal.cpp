//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        // Your code goes here
        
        
        int i;
        int sum1 = 0;
        int sum2 = 0;
        sort(A,A+n);
        sort(B,B+m);
        for(i=0;i<n;i++)
        {
            sum1 += A[i];
        }
        for(i=0;i<m;i++)
        {
            sum2 += B[i];
        }
        int diff = abs(sum1 - sum2);
        if(diff == 0)
        {
            return 1;
        }
        i = 0;
        int j = 0;
        while(i < n && j < m)
        {
            int temp1 = sum1 - A[i] + B[j];
            int temp2 = sum2 - B[j] + A[i];
            if(temp1 == temp2)
            {
                return 1;
            }
            else if(temp2 < temp1)
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        return -1;
	}
 

};

//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}






// } Driver Code Ends