#include<bits/stdc++.h>
using namespace std;

int maxProfitinStock(int arr[],int n){
    
     int max_profit=0;
        int minPrice=INT_MAX;

        for(int i=0;i<n;i++){
            minPrice= min(minPrice,arr[i]);
            max_profit= max(max_profit,arr[i]-minPrice);
        }
        
        return max_profit;
}

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxProfitinStock(arr,n)<<endl;
}
