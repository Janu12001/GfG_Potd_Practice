vector<int> ans(2);
int mn = INT_MAX;
int i = 0, j = m - 1;
while (i < n && j >= 0)
{
    int sum = arr[i] + brr[j];
    int diff = abs(sum - x);
    if (diff < mn)
    {
        mn = diff;
        ans[0] = arr[i];
        ans[1] = brr[j];
    }
    if (sum > x)
        j--;
    else
        i++;
}
return ans;