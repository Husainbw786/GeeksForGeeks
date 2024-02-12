//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class MyHashMap {
public:
    vector<int> mp;
    MyHashMap() {
        mp.resize(10e5 , -1);
    }
    void put(int key, int value) {
        mp[key] = value;
    }
    int get(int key) {
        return mp[key] ;
    }
    void remove(int key) {
        mp[key] = -1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        MyHashMap obj;
        int q;
        cin >> q;
        while (q--) {
            string s;
            cin >> s;
            if (s == "put") {
                int key, val;
                cin >> key >> val;
                obj.put(key, val);
            }
            else if ( s == "remove") {
                int key;
                cin >> key;
                obj.remove(key);
            }
            else {
                int key;
                cin >> key;
                cout << obj.get(key) << endl;
            }
        }
}
    return 0;
}

// } Driver Code Ends