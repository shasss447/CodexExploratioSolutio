
/* BST Node
struct Node
{
	int key;
	struct Node *left, *right;
};
*/

// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively
void findPrede(Node* root, Node* &pre, int key)
{
 if(root == NULL) return;
    while(root)
    {
        if(root->key < key)
        {
            pre = root;
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }
}
void findSucc(Node* root, Node* &suc, int key)
{
    if(root == NULL) return;
    while(root)
    {
        if(root->key > key)
        {
            suc = root;
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
}
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    findPrede(root, pre, key);
    findSucc(root, suc, key);
}