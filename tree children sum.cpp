bool IsCSum(node root)
{
    if(root==nullptr) return true;
    if(root->left==nullptr && root->right==nullptr)
        return true;
        int sum=0;
    if(root->left!=nullptr)
        sum+=root->left->data;
    if(root->right!=nullptr)
        sum+=root->right->data;
        return root->data==sum && IsCSum(root->left)&& IsCSum(root->right);
}
// TC- O(n)    SC-O(h) for recursion call stack
