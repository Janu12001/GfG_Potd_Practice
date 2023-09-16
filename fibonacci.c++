vector<long long> printFibb(int n)
{
    // code here
    if (n == 1)
        return {1};
    if (n == 2)
        return {1, 1};
    vector<long long> v(2, 1);
    for (int i = 2; i < n; i++)
        v.push_back(v[i - 1] + v[i - 2]);
    return v;
}