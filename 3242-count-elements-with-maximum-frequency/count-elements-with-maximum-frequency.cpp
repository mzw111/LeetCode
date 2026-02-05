class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int maxf=0;
        for(auto& i:m){
            maxf=max(maxf,i.second);
        }
        int ans=0;
        for(auto&i :m){
            if(i.second== maxf){
                ans=ans+i.second;
            }
        }
        
        return ans;
        
    }
};