class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n= nums.size();
        vector<int> pnew;
        vector<int> nnew;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            if(nums[i] < 0){
                nnew.push_back(nums[i]);
            }
            else{
                pnew.push_back(nums[i]);
            }
        }
        
        int i=0;
        int j=0;int k=0;
        while(i<pnew.size() && j<nnew.size()){
            ans[k++]=pnew[i++];
            ans[k++]=nnew[j++];
        }
        return ans;
        
    }
};