long long solve(int ind, vector<long long> &dp)
{

    if (ind == 0)
        return 1;
    if (ind < 0)
        return 0;

    if (dp[ind] != -1)
        return dp[ind];

    return dp[ind] = (solve(ind - 1, dp) + solve(ind - 2, dp) + solve(ind - 3, dp)) % 1000000007;
}
// Function to count the number of ways in which frog can reach the top.
long long countWays(int n)
{

    // your code here
    vector<long long> dp(n + 1, -1);
    return solve(n, dp);
}
