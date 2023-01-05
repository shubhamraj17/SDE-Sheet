#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> & mat){
    int n=mat.size();
    
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(mat[i].begin(),mat[i].end());
    }
}

int main(){
    
    int n,m;
    cin>>n>>m;
    vector<vector<int>> mat;
    mat= {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(mat);
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
