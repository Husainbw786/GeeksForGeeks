//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
     int i,j,k;
     int count = 0;
     int len = s.length();
     int len2 = x.length();
     int flag=false;
     for(i=0;i<=(len-len2);i++)
     {
       for(k=0;k<len2;k++)
       {
           if(s[i+k] == x[k] ){
               flag = true;
               continue;
           }
           flag = false;
           break;
       }
       if(flag)
        return i;
       
     }
     return -1;
     
}