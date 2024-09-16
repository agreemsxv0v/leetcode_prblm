class Solution {
public:
    int tribonacci(int n) {
        // if(n==0)
        //     return 0;
        // if(n==1)
        //     return 1;
        // if(n==2)
        //     return 1;
        
        // int ans=tribonacci(n-1)+ tribonacci(n-2) + tribonacci(n-3);

        // return ans;




        if(n < 2)
            return n;

        vector<int> dp={0,1,1};

        for(int i=3;i<=n;i++)
        {
            int next=dp[0]+dp[1]+dp[2];
            dp[0]=dp[1];
            dp[1]=dp[2];
            dp[2]=next;

        }
        return dp[2];
    }
};