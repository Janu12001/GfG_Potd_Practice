vector<int> rotate(int n, int d)
{
    // code here.
    int ans1 = n, ans2 = n;
    d %= 16;
    ans1 = (((n << d) | (n >> (16 - d))) & 65535);
    ans2 = (((n >> d) | (n << (16 - d))) & 65535);
    return {ans1, ans2};
}