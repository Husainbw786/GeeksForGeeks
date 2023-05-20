//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        // code here
        
        if(N % groupSize != 0)
        {
            return false;
        }
    
        map<int,int>mp;
        int i;
        for(i=0;i<N;i++)
        {
            mp[hand[i]]++;
        }
        int count = N / groupSize;
        while(count--)
        {
            int a = groupSize;
            vector<int>v;
            for(auto & x : mp)
            {
                if(a == 0)
                {
                    break;
                }
               // cout << x.first << " ";
                v.push_back(x.first);
                x.second--;
                if(x.second == 0)
                {
                    mp.erase(x.first);
                }
                a--;
            }
            if(v.size() != groupSize)
            {
                return false;
            }
            for(i=0;i<v.size()-1;i++)
            {
              if(v[i]+1 != v[i+1])
              {
                  return false;
              }
            }
    
        }
        return true;
     
    }
};

 


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends