class Solution {
public:
int n;
vector<vector<int>>result;
void gg(vector<int>& nums,int i){
    if(i==n){
        result.push_back(nums);
        return;
    }
    for(int j=i;j<n;j++){
      swap(nums[j],nums[i]);
      gg(nums,i+1);
      swap(nums[j],nums[i]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        n=nums.size();
        gg(nums,0);
        return result;
    }
};
