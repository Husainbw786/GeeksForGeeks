//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        // code here
        int five = 0;
        int ten  = 0;
        int twenty = 0;
        int i;
        for(i=0;i<N;i++)
        {
            if(bills[i] == 5)
            {
                five++;
                continue;
            }
            else if(bills[i] == 10)
            {
                if(five > 0)
                {
                    five--;
                    ten++;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                if((ten > 0 && five > 0))
                {
                    ten--;
                    five--;
                    twenty++;
                }
                else if(five >= 3)
                {
                    five = five - 3;
                    twenty++;
                }
                else
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
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends