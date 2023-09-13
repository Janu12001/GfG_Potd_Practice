int f(int ind, int sum, int arr[], vector<vector<int>> &dp)
{

    if (ind == 0)
    {
        if (sum == 0 && arr[0] == 0)
            return 2;
        if (arr[0] == sum || sum == 0)
            return 1;
        return 0;
    }

    if (dp[ind][sum] != -1)
        return dp[ind][sum];

    int nottake = f(ind - 1, sum, arr, dp);

    int take = 0;

    if (arr[ind] <= sum)
        take = f(ind - 1, sum - arr[ind], arr, dp);

    return dp[ind][sum] = (nottake + take) % 1000000007;
}
int perfectSum(int arr[], int n, int sum)
{
    // Your code goes here

    vector<vector<int>> dp(n, vector<int>(sum + 1, -1));
    return f(n - 1, sum, arr, dp) % 1000000007;
}