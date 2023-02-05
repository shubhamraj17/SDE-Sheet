#include<bits/stdc++.h>
using namespace std;

vector<int> collison(vector<int> &nums){
    int n=nums.size();
    stack<int> s;
    
    for(int i=0;i<n;i++){
        //positive asteroids
        if(nums[i]>0 or s.empty()){
            s.push(nums[i]);
        }
        
        //negative asteroid
        else{
            while(!s.empty() and s.top()>0 and s.top()< abs(nums[i])){
                s.pop();
            }
            if(!s.empty() and s.top()== abs(nums[i]))
                s.pop();
            else{
                if(s.empty() or s.top()<0)
                    s.push(nums[i]);
            }
        }
    }
    
     vector<int> res(s.size());
        for(int i = (int)s.size() - 1; i >= 0; i--) {
            res[i] = s.top();
            s.pop();
        }
        return res;
}

int main(){
    vector<int> nums={5,10,-5};
    vector<int> res= collison(nums);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}
