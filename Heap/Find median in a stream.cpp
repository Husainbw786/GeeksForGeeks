class Solution
{
    public:
    priority_queue<int>max_heap;
    priority_queue<int,vector<int>,greater<int>>min_heap;
    //Function to insert heap.
    void insertHeap(int &x)
    {
        if(max_heap.empty() || max_heap.top() > x)
        {
            max_heap.push(x);
        }
        else
        {
            min_heap.push(x);
        }
        
        if(max_heap.size() > min_heap.size() + 1)
        {
            min_heap.push(max_heap.top());
            max_heap.pop();
        }
        else if(min_heap.size() > max_heap.size() + 1)
        {
            max_heap.push(min_heap.top());
            min_heap.pop();
        }
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        
    }
    
    //Function to return Median.
    double getMedian()
    {
       if(min_heap.size() == max_heap.size())
       {
           double ans = (min_heap.top() + max_heap.top()) / 2.0;
           return ans;
       }
       else if(min_heap.size() > max_heap.size())
       {
           return min_heap.top();
       }
       else
       {
           return max_heap.top();
       }
    }
};
