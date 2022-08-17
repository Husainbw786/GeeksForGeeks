class Solution {
public:
   void dfs(Node* node,Node* copy,vector<Node*>&vis)
   {
       vis[copy->val] = copy;
       for(auto x : node->neighbors)
       {
           if(vis[x->val] == NULL)
           {
               Node* temp = new Node(x->val);
               (copy->neighbors).push_back(temp);
               dfs(x,temp,vis);
           }
           else
           {
                (copy->neighbors).push_back(vis[x->val]);
           }
       }
   }

    Node* cloneGraph(Node* node) {
     
     if(node == NULL)
     {
         return NULL;
     }
     vector<Node*>vis(1000,NULL);
     Node* copy = new Node(node->val);
     dfs(node,copy,vis);
     return copy;
        
    }
};
