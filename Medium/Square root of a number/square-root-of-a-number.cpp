//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        long long ans, left = 1 ,right = x ,mid;
        while(left <= right)
        {
            mid = left + (right-left)/2;
            
            if(mid*mid < x)
            {
                ans = mid;
                left = mid + 1;
            }
            else if(mid*mid == x)
            {
                ans = mid;
                break;
            }
            else if(mid*mid > x)
            {
                right = mid-1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends