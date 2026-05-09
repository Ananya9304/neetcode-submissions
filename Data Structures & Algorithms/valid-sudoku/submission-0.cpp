class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        set<string>s;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='.') continue;
                string r="row"+to_string(i)+board[i][j];
                string c="col"+to_string(j)+board[i][j];
                string b="box"+to_string((i/3)*3+(j/3))+board[i][j];
                if(s.find(r)==s.end() && s.find(c)==s.end() && s.find(b)==s.end()){
                    s.insert(r);
                    s.insert(c);
                    s.insert(b);
                }else{
                    return false;
                }

            }
        }
        return true;
    }
};
