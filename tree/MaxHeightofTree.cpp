#include<bits/stdc++.h>
using namespace std;

struct Node{
    
    int val;
    struct Node *left, *right;
    Node(int data){
        val=data;
        left=right=NULL;
    }
};

void printInorderTraversal(struct Node* root){
    if(root==NULL)
        return;
    printInorderTraversal(root->left);
    cout<<root->val<<" ";
    printInorderTraversal(root->right);
    
}

void printPreOrderTraversal(struct Node* root){
    if(root==NULL)
        return;
    cout<<root->val<<" ";
    printPreOrderTraversal(root->left);
    printPreOrderTraversal(root->right);
    
}

int maxDepth(struct Node* root){
    if(root==NULL)
        return 0;
    int lh= maxDepth(root->left);
    int rh= maxDepth(root->right);
    
    return 1+ max(lh,rh);
}


int main(){
    
    struct Node* root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left= new Node(4);
    root->left->right= new Node(5);
    
    printInorderTraversal(root);cout<<endl;
    printPreOrderTraversal(root);cout<<endl;
    
    cout<<"max height of the tree -> "<< maxDepth(root)<<endl;
}
