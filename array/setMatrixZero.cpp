#include<bits/stdc++.h>
using namespace std;

void setMatrixZero(vector<vector<int>>& matrix){
    int rows= matrix.size();
    int cols= matrix[0].size();
    vector<int> dummy1(rows,-1);
    vector<int> dummy2(cols,-1);
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(matrix[i][j]==0){
                dummy1[i]=0;
                dummy2[j]=0;
            }
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(dummy1[i]==0 || dummy2[j]==0){
                matrix[i][j]=0;
            }
        }
    }
}

int main(){
    
    vector<vector<int>> matrix= {{1,1,1},{1,0,1},{1,1,1}};
  
    setMatrixZero(matrix);
    
     for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}
