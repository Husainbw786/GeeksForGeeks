//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       deque<int>dq;
       int i;
       vector<int>ans;
       int count = 1;
       for(i=0;i<n;i++)
       {
           if(dq.empty())
           {
               ans.push_back(1);
               dq.push_back(i);
               continue;
           }
           if(!dq.empty() && price[dq.back()] <= price[i])
           {
               int temp = 1;
               while(!dq.empty() && price[dq.back()] <= price[i])
               {
                   temp += ans[dq.back()];
                   dq.pop_back();
               }
               ans.push_back(temp);
               dq.push_back(i);
           }
           else if(!dq.empty() && price[dq.back()] > price[i])
           {
               ans.push_back(1);
               dq.push_back(i);
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
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends