class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0,r=k-1;
        vector<int>ans;
        while(r<n){
            int d = *max_element(nums.begin()+l,nums.begin()+r+1);
            ans.push_back(d);
            l++;
            r++;
        }
        return ans;
    }
};
