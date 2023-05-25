Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     map<int,int>mp;
     Node*temp=head;
     while(temp->next!=NULL)
     {
        mp[temp->data]++;
        if(mp[temp->data]>1)
        {
         temp->data=temp->next->data;
         temp->next=temp->next->next;
        }
        temp=temp->next;
     }
     if(mp[temp->data]>1)
     temp=NULL;
     
     return head;
    }