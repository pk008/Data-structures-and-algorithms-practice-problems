
/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
// Convert a given tree to a tree where every node contains sum of values of
// nodes in left and right subtrees in the original tree

//helper function
int sum(Node* root)
{
    if(root==NULL)
    return 0;
    
    int l=sum(root->left);
    int r=sum(root->right);
    int s=root->data+l+r;
    root->data=l+r;
    return s;
}

// function to convert binry tree to sun tree
void toSumTree(Node* node)
{
    sum(node);
}

