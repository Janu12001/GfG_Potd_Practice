
int f(int ind, int arr[], vector<int> &dp)
{

    if (ind == 0)
        return arr[0];

    if (ind < 0)
        return 0;

    // step 2
    if (dp[ind] != -1)
        return dp[ind];

    // only pick non adjacent elements
    int pick = arr[ind] + f(ind - 2, arr, dp);

    int notpick = 0 + f(ind - 1, arr, dp);

    // step 3
    dp[ind] = max(pick, notpick);
    return dp[ind];
}
int FindMaxSum(int arr[], int n)
{
    // Your code here

    vector<int> dp(n, -1);
    return f(n - 1, arr, dp);
}