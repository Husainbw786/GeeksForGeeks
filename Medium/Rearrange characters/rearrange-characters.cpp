//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;

// } Driver Code Ends
class Solution
{
    public:
    string rearrangeString(string str)
    {
        //code here
        unordered_map<char,int>mp;
        int i;
        int n = str.size();
        for(i=0;i<n;i++)
        {
            mp[str[i]]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto x : mp)
        {
            pq.push({x.second,x.first});
        }
        string ans = "";
        while(pq.size() > 1)
        {
            char a = pq.top().second;
            int s1 = pq.top().first;
            pq.pop();
            char b = pq.top().second;
            int s2 = pq.top().first;
            pq.pop();
            ans += a;
            ans += b;
            if(s1 > 1)
            {
                pq.push({s1-1,a});
            }
            if(s2 > 1)
            {
                pq.push({s2-1,b});
            }
        }
        if(pq.size() == 1)
        {
            if(pq.top().first == 1)
            {
                ans += pq.top().second;
                return ans;
            }
            else
            {
                return "-1";
            }
        }
        if(pq.size() == 0)
        {
            return ans;
        }
        return "-1";
    }
    
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution ob;
	    string str1=ob.rearrangeString(str);
	    int flag=1;
	    int c[26] = {0};
	    for(int i=0; i<str.length(); i++)
	        c[str[i]-'a']+=1;
	    int f = 0;
	    int x = (str.length()+1)/2;
	    for(int i=0; i<26; i++)
	    {
	        if(c[i]>x)
	            f = 1;
	    }
	    if(f)
	    {
	        if(str1=="-1")
	            cout<<0<<endl;
	        else
	            cout<<1<<endl;
	    }
	    else
	    {
    	    int a[26] = {0};
    	    int b[26] = {0};
    	    for(int i=0; i<str.length(); i++)
    	        a[str[i]-'a']+=1;
    	    for(int i=0; i<str1.length(); i++)
    	        b[str1[i]-'a']+=1;
    	        
    	    for(int i=0; i<26; i++)
    	        if(a[i]!=b[i])
    	            flag = 0;
    	    
    	    for(int i=0;i<str1.length();i++)
    	    {
    		    if(i>0)
    		        if(str1[i-1]==str1[i])
    			        flag=0;
    	    }
    	    if(flag==1)
    		    cout<<"1\n";
    	    else
    	        cout<<"0\n";
	    }
	}
    return 0;
}
// } Driver Code Ends