#include<bits/stdc++.h>
using namespace std;

void twoSum(vector<int> nums,int n,int target){
    vector<int> res;
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        if(map.find(target-nums[i])!= map.end()){
            cout<<nums[i]<<" "<<target-nums[i]<<endl;
            res.push_back(i+1);
            res.push_back(map[target-nums[i]]+1);
        }
        map[nums[i]]=i;
    }
    
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    
}

int main(){
    
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;
    
    twoSum(nums,n,target);
}
