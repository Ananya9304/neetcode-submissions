class Solution {
public:
int oper(int a,int b,string token){
    if(token=="+") return a+b;
    else if(token=="*") return a*b;
    else if(token=="-") return b-a;
    else return b/a;
}
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            if(tokens[i]=="+" ||tokens[i]=="-" ||tokens[i]=="*" ||tokens[i]=="/"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int res = oper(a,b,tokens[i]);
                st.push(res);
            }else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};
