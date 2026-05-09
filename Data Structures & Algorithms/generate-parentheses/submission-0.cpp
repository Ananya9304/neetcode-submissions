class Solution {
public:
vector<string>result;
bool valid(string s){
    int cnt =0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(') cnt++;
        else cnt --;
        if(cnt<0) return false;
    }
    return cnt==0;
}
void gg(string &s, int n){
    if(s.length()==2*n){
        if(valid(s)) result.push_back(s);
        return;
    }
    s.push_back('(');
    gg(s,n);
    s.pop_back();
    s.push_back(')');
    gg(s,n);
    s.pop_back();
}
    vector<string> generateParenthesis(int n) {
        string s= "";
        gg(s,n);
        return result;
    }
};
