#include<bits/stdc++.h>
using namespace std;

struct Node{
    
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
    
};

void preOrderTraversal(struct Node* curr){
    
    if(curr==NULL)
        return;
    cout<<curr->data<<" ";
    preOrderTraversal(curr->left);
    preOrderTraversal(curr->right);
}

void inOrderTraversal(struct Node* curr){
    
    if(curr==NULL)
        return;
    preOrderTraversal(curr->left);
    cout<<curr->data<<" ";
    preOrderTraversal(curr->right);
}

void postOrderTraversal(struct Node* curr){
    
    if(curr==NULL)
        return;
    preOrderTraversal(curr->left);
    preOrderTraversal(curr->right);
     cout<<curr->data<<" ";
}

vector<vector<int>> levelOrderTraversal(struct Node* root){
    
  vector<vector<int>> ans; 

        if(root == NULL) return ans; 

        queue<struct Node*> q; 
        q.push(root); 

        while(!q.empty()) {
            int size = q.size();
            vector<int> level; 
            for(int i = 0;i<size;i++) {
               struct Node* node = q.front(); 
                q.pop(); 
                if(node->left != NULL) q.push(node->left); 
                if(node->right != NULL) q.push(node->right); 
                level.push_back(node->data); 
            }

            ans.push_back(level); 
        }

        return ans; 
}

int main(){
    
    struct Node *root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->right= new Node(5); 
    preOrderTraversal(root);
    cout<<endl;
    inOrderTraversal(root);
    cout<<endl;
    postOrderTraversal(root);
    cout<<endl;
    vector<vector<int>> levelOrder= levelOrderTraversal(root);
    for(int i=0;i<levelOrder.size();i++){
        for(int j=0;j<levelOrder[0].size();i++){
            cout<<levelOrder[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
