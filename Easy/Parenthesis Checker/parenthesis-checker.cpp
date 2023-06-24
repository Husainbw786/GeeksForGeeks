//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        // Your code here
        stack<char>st;
        int n = s.size();
        int i;
        for(i=0;i<n;i++)
        {
            if(s[i] == '{' || s[i] == '(' || s[i] == '[' )
            {
               st.push(s[i]); 
               continue;
            }
            else
            {
                if(st.size() == 0)
                {
                    return false;
                }
                char x = st.top();
                if((s[i] == '}' && x == '{') || (s[i] == ']' && x == '[') || (s[i] == ')' && x == '(') )
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
       
        if(st.size() != 0)
        {
            return false;
        }
        
        return true;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends