class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> mp;
        for(int i=0;i<strs.size();i++){
            string d= strs[i];
            sort(d.begin(),d.end());
            mp[d].push_back(strs[i]);
        }
        vector<vector<string>>m;
            for(auto it : mp) {
                vector<string>d;
            for(string s : it.second) {
                d.push_back(s);
            }
            m.push_back(d);
        }
        return m;
    }
};
