#include<bits/stdc++.h>
using namespace std;

int secondHighestSalary(int arr[],int n){
    int first=0,second=-1;
    
    for(int i=1;i<n;i++){
        if(arr[i]>arr[first]){
            second=first;
            first=i;
        }
        else if(arr[i]< arr[first]){
            if(second==-1 || arr[second]<arr[i])
                second=i;
        }
    }
    
    return arr[second];
}

int secondLowestSalary(int arr[],int n){
    int first=INT_MAX;
    int second=INT_MAX;
    
    for(int i=0;i<n;i++){
        if(arr[i]<first){
            second=first;
            first=arr[i];
        }
        else if(arr[i]<second && arr[i]!=first){
            second=arr[i];
        }
    }
    return arr[second];
}

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<secondHighestSalary(arr,n)<<endl;
    cout<<secondLowestSalary(arr,n)<<endl;
}
