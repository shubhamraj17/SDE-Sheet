#include<bits/stdc++.h>
using namespace std;

int maxWaterTrapped(vector<int> &height){
    
    int n=height.size();
    int waterTrapped=0;
    
    for(int i=0;i<n;i++){
        int leftMax=0,rightMax=0;
        int j=i;
        while(j>=0){
            leftMax= max(leftMax,height[j]);
            j--;
        }
       j=i;
        while(j<n){
            rightMax= max(rightMax,height[j]);
            j++;
        }
        waterTrapped+= min(leftMax,rightMax)-height[i];
    }
    
    return waterTrapped;
}

int waterTrappedOptimized(vector<int> &height){
    int n=height.size();
    int waterTrapped=0;
    int left=0,right=n-1;
    int leftMax=0,rightMax=0;
    
    while(left<=right){
        if(height[left]<=height[right]){
            if(height[left]>leftMax)
                leftMax=height[left];
            else
                waterTrapped+= leftMax-height[left];
            left++;
        }else{
            if(height[right]>rightMax)
                rightMax= height[right];
            else
                waterTrapped+= rightMax-height[right];
            right--;
        }
    }
    
    return waterTrapped;
    
}

int main(){
    
    vector<int> height={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<maxWaterTrapped(height)<<endl;
    cout<<waterTrappedOptimized(height)<<endl;
}
