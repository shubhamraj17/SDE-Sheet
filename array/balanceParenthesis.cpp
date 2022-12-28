#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string s){
    
    stack<char> temp;
    
    for(int i=0;i<s.length();i++){
        if(temp.empty()){
            temp.push(s[i]);
        }
        
        else if((temp.top()=='(' && s[i]==')')
               ||temp.top()=='{' && s[i]=='}'
               || temp.top()=='[' && s[i]==']'){
            temp.pop();
        }
        else{
            temp.push(s[i]);
        }
    }
    
    if(temp.empty())
        return true;
    
    return false;
}

int main(){
    string s;
    cin>>s;
    if(isBalanced(s)){
        cout<<"true"<<endl;
    }
    else
        cout<<"false"<<endl;
}
