class Solution {
public:
vector<vector<int>>result;
void gg(vector<int>& candidates,int i,int target,vector<int>&ans){
    if(target==0){
        result.push_back(ans);
        return;
    }
    if(target<0) return;
    if(i==candidates.size()) return;
    for(int j=i;j<candidates.size();j++){
        if(j>i && candidates[j]==candidates[j-1]) continue;
        ans.push_back(candidates[j]);
        gg(candidates,j+1,target-candidates[j],ans);
        ans.pop_back();
    }
    
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>ans;
        sort(candidates.begin(), candidates.end());
        gg(candidates,0,target,ans);
        return result;
    }
};
