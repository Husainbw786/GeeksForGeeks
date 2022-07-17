class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        //code here.
        int flag = 1;
        int i;
        int ans = 0;
        for(i=0;i<n;i++)
        {
            if(arr[i] == arr[i+1])
            {
                flag++;
                
            }
            else
            {
                flag--;
            }
            if(flag==0)
            {
                ans = arr[i];
                break;
            }
        }
        return ans;
        
    }
};
