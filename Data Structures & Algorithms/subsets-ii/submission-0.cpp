class Solution {
public:
int n;
vector<vector<int>>result;
void solve(vector<int>& nums,int idx,vector<int>&temp){
  
        result.push_back(temp);
       
    for(int i=idx;i<n;i++){
        if(i>idx && nums[i]==nums[i-1]) continue;
        temp.push_back(nums[i]);
        solve(nums,i+1,temp);
        temp.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         n =nums.size();
         sort(nums.begin(),nums.end());
        vector<int>temp;
        solve(nums,0,temp);
        return result;
    }
};
