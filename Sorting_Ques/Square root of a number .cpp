class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        long long ans, left = 1 ,right = x ,mid;
        while(left <= right)
        {
            mid = left + (right-left)/2;
            
            if(mid*mid < x)
            {
                ans = mid;
                left = mid + 1;
            }
            else if(mid*mid == x)
            {
                ans = mid;
                break;
            }
            else if(mid*mid > x)
            {
                right = mid-1;
            }
        }
        return ans;
    }
};
