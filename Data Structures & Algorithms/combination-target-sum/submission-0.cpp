class Solution {
public:
vector<vector<int>>result;
void gg(vector<int>& nums,int i,int target,vector<int>&ans){
    if(target==0){
        result.push_back(ans);
        return;
    }
    if(target<0) return;
    if(i==nums.size()) return;
    ans.push_back(nums[i]);
    gg(nums,i,target-nums[i],ans);
    ans.pop_back();
     gg(nums,i+1,target,ans);

}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>ans;
        gg(nums,0,target,ans);
        return result;
    }
};
