vector<pair<int,int>>ans;
        for(int i=0;i<n;i++){
            ans.push_back({price[i],i+1});
        }
        sort(ans.begin(),ans.end());
        
        int res=0;
        for(int i=0;i<n;i++){
            
            int price=ans[i].first;
            int stock=ans[i].second;
            if(price*stock <= k){
                res+=stock;
                k-=(price*stock);
            }
            else{
                res+=(k/price);
                k-=price*(k/price);
            }
            
        }
        
        
        return res;
