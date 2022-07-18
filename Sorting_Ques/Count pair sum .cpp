class Solution
{
  public:
    int countPairs(int arr1[], int arr2[],  int m, int n, int x) 
    { 
        //code here.
        int count = 0;
        int  i =0;
        int j = n-1;
        while(i<m && j >= 0)
        {
            if(arr1[i]+arr2[j] == x)
            {
                count++;
                j--;
            }
            else if(arr1[i]+arr2[j] < x)
            {
                i++;
            }
            else if(arr1[i]+arr2[j] > x)
            {
                j--;
            }
        }
        return count;
    } 
};
