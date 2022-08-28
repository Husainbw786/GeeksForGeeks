class Solution{
public:
    int toyCount(int n, int k, vector<int> arr)
    {
        // code here
        sort(arr.begin(),arr.end());
        int i = 0;
        int count = 0;
        int sum = 0;
       for(i=0;i<n;i++)
       {
           sum = sum + arr[i];
           if(sum <= k)
           {
               count++;
           }
           else
           {
               break;
           }
       }
        return count;
    }
};
