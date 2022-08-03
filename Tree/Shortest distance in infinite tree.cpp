class Solution{
public:
      int distance(int X, int Y)
      {
          // code here
          int count = 0;
          while(X!= Y)
          {
              if(X>Y)
              {
                  X = X/2;
                  count++;
              }
              else
              {
                  Y = Y/2;
                  count++;
              }
          }
          return count;
      }
};
