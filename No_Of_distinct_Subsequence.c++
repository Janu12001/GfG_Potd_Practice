int distinctSubsequences(string s)
{
    // Your code goes here

    int mod = 1000000007;
    int n = s.length();
    vector<int> dp(n + 1);
    dp[0] = 1;
    unordered_map<char, int> m;
    for (int i = 1; i <= n; i++)
    {
        char ch = s[i - 1];
        dp[i] = (2 * dp[i - 1]) % mod;
        if (m.find(ch) != m.end())
        {
            int index = m[ch];
            dp[i] = (dp[i] - dp[index - 1] + mod) % mod;
        }

        m[ch] = i;
    }
    return dp[n];
}