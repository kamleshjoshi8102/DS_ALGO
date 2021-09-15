int countNodesX(TreeNode<int> *root,int x){
    int ans=0;
    if(root->data > x)
       ans++;
       
       for(int i=0;i<root->children.size();i++){
           ans += countNodesX(root->children[i],x);
    
    }
    return ans;
       
}
