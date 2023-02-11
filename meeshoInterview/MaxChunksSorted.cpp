class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int ans=0;
        vector<int> t=arr;
        sort(arr.begin(),arr.end());
        long long  sum1=0,sum2=0;
        for(int i=0;i<arr.size();i++){
            sum2+= t[i];
            sum1+= arr[i];
            if(sum1==sum2)
            ans++;
        }

        return ans;
    }
};
