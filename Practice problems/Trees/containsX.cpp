bool containX(TreeNode<int> *root,int x){   
    if(root->data==x){   //base case
        return true;  
    }                                            
    
    for(int i=0;i<root->children.size();i++){  
        
        if(containX(root->children[i],x)) //recursion
         return true;
    }
    return false;
}
