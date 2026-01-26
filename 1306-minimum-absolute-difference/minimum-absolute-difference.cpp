class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>>result;
        if(n==0 || n==1){
            return result;
        }
        sort(arr.begin(), arr.end());
        int ans =INT_MAX;
        for(int i=0;i <n-1;i++){
            ans= min(ans, arr[i+1]-arr[i]);
        }
        
        for(int i=0;i<n-1;i++){
            if((arr[i+1]-arr[i]) == ans){
                result.push_back({arr[i],arr[i+1]});

            }
        }
        return result;
    }
};