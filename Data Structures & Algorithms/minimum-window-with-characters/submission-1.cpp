class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        int m = t.length();

        unordered_map<char,int>mp;
        for(int i=0;i<m;i++){
            mp[t[i]]++;
        }
        int l=0,r=0;
        int minlen=INT_MAX;
        int i=-1;
        int cnt=0;
        while(r<n){
            if(mp[s[r]]>0) cnt++;
            mp[s[r]]--;
            while(cnt==m){
                if((r-l+1)<minlen){
                    minlen=r-l+1;
                    i=l;
                }
               
                mp[s[l]]++;
                if(mp[s[l]]>0) cnt--;
                l++;
            }
            r++;
        }
        return i==-1?"":s.substr(i,minlen);
    }
};
