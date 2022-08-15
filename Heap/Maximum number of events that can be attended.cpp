class Solution {
  public:
    int maxEvents(int start[], int end[], int N) {
        // code here
        unordered_set<int>s;
        priority_queue<pair<int,int>>pq;
        for (int i = 0; i<N; i++){
            pq.push({start[i],end[i]});
        }
        int ct = 0;
        while (pq.size()>0){
            auto v = pq.top();
            pq.pop();
            if (s.find(v.second)==s.end()){
                s.insert(v.second);
            }
            else{
                int ele = v.second;
                while(ele>=v.first){
                    if (s.find(ele)==s.end()){
                        s.insert(ele);
                        break;
                    }
                    ele--;
                }
            }
         }
        return s.size();
    }
    
};
