#include <iostream>
#include <vector>
#include <queue>
#include "TreeNode.cpp"
using namespace std;
void printTree(TreeNode<int> *root){   //preorder 
    cout<<root->data<<": ";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
       printTree(root->children[i]);
    }
    
}
TreeNode<int>* takeInput(){ //input taking is kinda hard 
    cout<<"Enter root of tree"<<endl;
    int data;
    cin>>data;
    TreeNode<int> *root=new TreeNode<int>(data);
    int n;
    cout<<"Enter no of children of "<<root->data<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        TreeNode<int> *node=takeInput();
        root->children.push_back(node);
    }
    return root;
}
TreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter Data "<<endl;
    cin>>rootData;
    TreeNode<int> *root=new TreeNode<int>(rootData);
    queue<TreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        TreeNode<int> *front=pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter no of children of "<<front->data<<endl;
        int numChild;
        cin>>numChild;
        for(int i=0;i<numChild;i++){
            int childData;
            cout<<"Enter "<<i<<"th child of "<<front->data<<endl;
            cin>>childData;
            TreeNode<int> *child=new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
void printLevelWise(TreeNode<int> *root){
    queue<TreeNode<int>*> printingNodes;
    printingNodes.push(root);
    while(printingNodes.size()!=0){
        TreeNode<int> *front=printingNodes.front();
        printingNodes.pop();
        cout<<front->data<<": ";
        for(int i=0;i<front->children.size();i++){
            TreeNode<int> *child=front->children[i];
            cout<<child->data<<",";
            printingNodes.push(child);
        }
        cout<<endl;
    }
    
}
int countNodes(TreeNode<int> *root){
    int ans=1;
    for(int i=0;i<root->children.size();i++){
        ans+=countNodes(root->children[i]);
    }
    return ans;
}
int main()
{
    TreeNode<int> *root=takeInputLevelWise();
    printLevelWise(root);
    // printTree(root);
    cout<<countNodes(root);
}
