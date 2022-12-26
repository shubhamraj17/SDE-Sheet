#include<bits/stdc++.h>
using namespace std;

void countFrequency(string s){
    unordered_map<char,int> map;
    for(int i=0;i<s.length();i++){
        map[s[i]]++;
    }

    for(auto i: map){
        cout<<i.first<<"->"<<i.second<<endl;
    }
}

vector<char> findDuplicateChar(string s){
     unordered_map<char,int> map;
    for(int i=0;i<s.length();i++){
        map[s[i]]++;
    }
    vector<char> res;
  
    for(auto i: map){
        if(i.second==2)
            res.push_back(i.first);
    }
return res;
}
int main(){
    
    string s;
    cin>>s;
    countFrequency(s);
    vector<char> res= findDuplicateChar(s);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    
}
