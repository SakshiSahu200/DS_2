bool IsBalanced(node root)
{ //this is naive approach and will take O(n2) time for traversing every node
   // and recursively calling the height func for left and right subtree
    if(root==nullptr) return  true;
    if(root->left==nullptr && root->right==nullptr) return true;
    int a= height(root->left);
    int b= height(root->right);
    return abs(a-b)<=1 && IsBalanced(root->left) && IsBalanced(root->right);
}

//efficient O(n) time
int IsBalanced(node root)
{
    if(root==nullptr) return 0;
    int lh= IsBalanced(root->left);  //check for left subtree also get the left height
    if(lh==-1) return -1;
    int rh=IsBalanced(root->right);   //check for right subtree also get the right height
    if(rh==-1) return -1;
    if(abs(lh,rh)>1) return -1;
    else
        return max(rh,lh)+1;
}
