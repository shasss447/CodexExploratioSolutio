Node* insert(Node* root, int Key) {
    // Your code here
    Node*head=root;
Node*prev=NULL;
while(head!=NULL)
{
    prev=head;
    if(head->data==Key)
    return head;
    else if(Key>head->data)
    head=head->right;
    else if(Key<head->data)
    head=head->left;
}
Node* n= new Node(Key);
if(Key<prev->data)
prev->left=n;
else
prev->right=n;
return root;
}