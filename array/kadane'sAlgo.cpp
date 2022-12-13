#include<bits/stdc++.h>
using namespace std;

int findLongestSubarraySum(int arr[],int n){
    int msf=INT_MIN;
    int meh=0;

    for(int i=0;i<n;i++){
        meh+= arr[i];
        if(msf<meh)
        msf=meh;

        if(meh<0)
        meh=0;
    }

    return msf;

}

void findLongestSubsequenceSubaaray(int arr[],int n){

     int msf=INT_MIN;
    int meh=0;
    int end=0,start=0,s=0;

    for(int i=0;i<n;i++){
        meh+= arr[i];
        if(msf<meh){
        msf=meh;
        start=s;
        end=i;
        }

        if(meh<0){
        meh=0;
        s=i+1;
        }
    }

    cout<<start<<" "<<end<<endl;

    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<findLongestSubarraySum(arr,n)<<endl;

    findLongestSubsequenceSubaaray(arr,n);cout<<endl;
}
