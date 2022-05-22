
int maxWidth(node *root)

{

     if(root==nullptr) return 0;
     if(root->left==nullptr &&root->right==nullptr) return  0;
    int count=0;
    queue<node*>q;
    q.push(root);
    while(q.empty()==false) {
            int cnt=q.size();
    for(int i=0;i<cnt;i++){
        node *curr=q.front();
        q.pop();

        if(curr->left!=nullptr) q.push(curr->left);
        if(curr->right!=nullptr) q.push(curr->right);}
        count=max(count,cnt);
    }
    return count;

}
