TreeNode<int>* largeNode(TreeNode<int> *root){
    TreeNode<int> *max=root;
    for(int i=0;i<root->children.size();i++){
        TreeNode<int> *child=largeNode(root->children[i]);
        if(max->data<child->data){
            max=child;
        }
    }
    return max;
}
