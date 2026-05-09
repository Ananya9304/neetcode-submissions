class Solution {
public:
int square(int n){
     int sum=0;
        while(n>0){
            int x = n%10;
            sum+=(x*x);
            n=n/10;
        }
        return sum;
}
    bool isHappy(int n) {
        unordered_set<int>seen;
        while(n!=1 && seen.find(n)==seen.end()){
            seen.insert(n);
            n=square(n);
        }
        return n==1;
    }
};
