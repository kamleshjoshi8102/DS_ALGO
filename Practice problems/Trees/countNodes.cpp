int countNodes(TreeNode<int> *root){
    int ans=1; //root node count 
    for(int i=0;i<root->children.size();i++){
        ans+=countNodes(root->children[i]);  //recursion
    }
    return ans;
}
