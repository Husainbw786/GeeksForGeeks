class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	   int maxRowOneValue = 0;
	   int maxRowValueIndex = 0;
	   
	   for(int i = 0; i < n; i++ ){
	       for(int j = 0; j < m; j++){
	           if(arr[i][j] == 1){
                    int totalOne = m - j;
                    if(maxRowOneValue < totalOne){
                        maxRowOneValue = totalOne;
                        maxRowValueIndex = i;         
                    }
                    break;
	           }
	       }
	   }
	   if(maxRowOneValue == 0)
	    return -1;
	   return maxRowValueIndex;
	}

};
