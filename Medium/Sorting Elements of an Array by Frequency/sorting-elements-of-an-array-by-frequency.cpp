#include <bits/stdc++.h>
using namespace std;
 
int main() {
//code
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>ans;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    priority_queue<pair<int,int>>pq;
    for(auto it:mp){
        pq.push({-it.second,it.first});
    }
    while(!pq.empty()){
        int count=pq.top().first;
        int element=pq.top().second;
        for(int i=1;i<=abs(count);i++){
            ans.push_back(element);
        }
        
        pq.pop();
    }
    reverse(ans.begin(),ans.end());
     for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
}
return 0;
}