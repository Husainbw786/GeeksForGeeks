class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
            // your code here
    map<int,int>mp;
    int i;
    for(i=0;i<size;i++)
    {
        mp[a[i]]++;
    }
    int ans = -1;
    for(auto x:mp)
    {
        if(x.second > size/2)
        {
            ans = x.first;
        }
    }
    return ans;
        
    }
};
