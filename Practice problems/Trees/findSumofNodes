int SumNodes(TreeNode<int> *root){
    if (root==NULL){ //base case
        return 0;
    }
    int sum=root->data;
    for(int i=0;i<root->children.size();i++){
        sum+=SumNodes(root->children[i]);
    }
    return sum;
}
