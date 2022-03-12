class Solution {
    int dp[50];
public:
    int recursive(int n){
        if(n<0){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        if(n==0){
            return 1;
        }
        return dp[n]=climbStairs(n-1)+climbStairs(n-2);
    }
    int iterative(int n){
        if(n==1) return 1;
        if(n==2) return 2;
        int t[n];
        t[0]=1;
        t[1]=2;
        for(int i=2;i<n;i++){
            t[i]=t[i-1]+t[i-2];
        }
        return t[n-1];
    }
    int climbStairs(int n) {
        memset(dp,-1,sizeof(dp));
        return iterative(n);
    }
};