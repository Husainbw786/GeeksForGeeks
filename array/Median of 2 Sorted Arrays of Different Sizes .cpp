
class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        
      int i;
      double median = 0;
         
      vector<double>v;
      for(i=0;i<array1.size();i++)
      {
          v.push_back(array1[i]);
      }
      for(i=0;i<array2.size();i++)
      {
          v.push_back(array2[i]);
      }
      sort(v.begin(),v.end());
      int k = v.size();
      int half = k/2;
      if(k%2 != 0)
      {
          median = v[half]; 
      }
      else if(k%2 == 0)
      {
          median = (v[half-1] + v[half])/2;
      }
      return median;
    
    }
};
