int GetNth(struct node* head, int index){
  // Code here
   node *temp = head;
   int count = 1;
   while(count < index)
   {
       count++;
       temp = temp->next;
   }
   int ans = temp->data;
   return ans;
}
