//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        vector<pair<double,int>>v;
        int i;
        for(i=0;i<n;i++)
        {
            double frac = (arr[i].value*1.0)/(arr[i].weight*1.0);
            v.push_back({frac,i});
        }
        sort(v.rbegin(),v.rend());
        int curr_weight = 0;
        double ans = 0;
        for(i=0;i<n;i++)
        {
            if(curr_weight + arr[v[i].second].weight <= W)
            {
                ans += arr[v[i].second].value;
                curr_weight += arr[v[i].second].weight;  
            }
            else
            {
                double remain = (W-curr_weight)*1.0;
                ans += (remain * v[i].first);
                break;
            }
        }
        
        return ans;
        
    }
        
};



//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(6)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends