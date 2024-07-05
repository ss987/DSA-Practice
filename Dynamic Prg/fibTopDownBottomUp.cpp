const int mod=1000000007;
    long long int topdown(int n, vector<long long int> &dp) {
    if (n <= 1) return n;
    if (dp[n] != -1) return dp[n];
    dp[n] = (topdown(n-1, dp) + topdown(n-2, dp))%mod;
    return dp[n];
    }
    
    long long int topDown(int n) {
        vector<long long int> dp(n + 1, -1);
        return topdown(n, dp);
    }

    long long int bottomUp(int n) {
    vector<long long int> dp(n + 1, -1);
    if (n <= 1) return n;
    for (int i = 0; i <= n; i++) {
        if (i <= 1) {
            dp[i] = i;
        } else {
            dp[i] =( dp[i-1] + dp[i-2])%mod;
        }
    }
    return dp[n];
