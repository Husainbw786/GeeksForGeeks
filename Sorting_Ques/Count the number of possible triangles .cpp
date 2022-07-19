class Solution
{
    public:
    //Function to count the number of possible triangles.
    int findNumberOfTriangles(int arr[], int n)
    {
        // code here
        sort(arr,arr+n);
        int count = 0;
        int i,side_1,side_2;
        for(i=n-1;i>=2;i--)
        {
            int side_3 = arr[i];
            side_2 = i-1;
            side_1 = 0;
            while(side_1 < side_2)
            {
                if(arr[side_1] + arr[side_2] > side_3)
                {
                    count += (side_2 -side_1);
                    side_2--;
                }
                else
                {
                    side_1++;
                }
            }
        }
        return count;
    }
};
