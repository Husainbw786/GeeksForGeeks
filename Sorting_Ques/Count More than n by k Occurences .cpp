
class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        unordered_map<int,int>mp;
        int i;
        for(i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        int occ = n/k;
        int count = 0;
        for(auto x : mp)
        {
            if(x.second > occ)
            {
                count++;
            }
        }
        return count;
    }
};
