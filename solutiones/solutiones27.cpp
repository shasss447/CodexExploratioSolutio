long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here
  Node *temp1=l1;
  Node *temp2=l2;
  long s1=0,s2=0;
  long mod=1000000007;
  while(temp1!=NULL)
  {
      s1=(s1*10+temp1->data)%mod;
      temp1=temp1->next;
  }
  while(temp2!=NULL)
  {
      s2=(s2*10+temp2->data)%mod;
      temp2=temp2->next;
  }
  return (s1*s2)%mod;