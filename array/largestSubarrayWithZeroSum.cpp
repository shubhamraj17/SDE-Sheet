#include<bits/stdc++.h>
using namespace std;

int longest_subarray(vector<int> &arr){
    unordered_map<int,int> map;
    int sum=0;
    int maxi=0;
    for(int i=0;i<arr.size();i++){
        sum+= arr[i];
        if(sum==0){
            maxi=i+1;
        }else{
            if(map.find(sum)!= map.end()){
                maxi= max(maxi,i-map[sum]);
            }else{
                map[sum]=i;
            }
        }
    }
    return maxi;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<longest_subarray(arr);
}
