int compare(Node *list1, Node *list2) 
{
     // Code Here
     Node* temp1 = list1;
     Node* temp2 = list2;
     string s1 = "";
     string s2 = "";
    while(temp1)
    {
        s1 += temp1->c;
        temp1 = temp1->next;
    }
       while(temp2)
    {
        s2 += temp2->c;
        temp2 = temp2->next;
    }
    if(s1==s2)
    {
        return 0;
    }
    else if(s1 > s2)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
