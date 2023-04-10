//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string a, string b)
        {
            // code here
             int i;
            string str = "";
            int arr1[26] = {0};
            int arr2[26] = {0};
           
           for(i=0;i<a.length();i++)
           {
               arr1[(a[i] - 'a')]++;
           }
           
           for(i=0;i<b.length();i++)
           {
               arr2[(b[i] - 'a')]++;
           }
           
           for(i=0;i<26;i++)
           {
               if((arr1[i] && !arr2[i]) || (!arr1[i] && arr2[i]))
               {
                   str += (i + 'a');
               }
           }
           if(str== "")
           {
               return "-1";
           }
           else
           return str;

        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends