int countLeafNodes(TreeNode<int> *root){
    if(root==NULL){ //edge case
        return 0;
    }
    int ans=0;
    if(root->children.size()==0){
        return 1;
    }
    for(int i=0;i<root->children.size();i++){
        ans+=countLeafNodes(root->children[i]);
        
    }
    return ans;
    
}
