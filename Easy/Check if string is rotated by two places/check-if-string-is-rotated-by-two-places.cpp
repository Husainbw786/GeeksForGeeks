//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        string a = str2;
        string b = str2;
        reverse(a.begin(),a.end());
        reverse(a.begin(),a.begin()+2);
        reverse(a.begin()+2,a.end());
         
         if(a == str1)
         {
             return 1;
         }
         
         
         
         reverse(b.begin(),b.end());
        reverse(b.begin(),b.end()-2);
        reverse(b.end()-2,b.end());
        if(b == str1)
        {
            return 1;
        }
        return 0;
    }

};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends