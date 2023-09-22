int equilibriumPoint(long long a[], int n)
{

    // Your code here
    int total = 0;
    for (int i = 0; i < n; i++)
        total += a[i];

    int left = 0;
    for (int i = 0; i < n; i++)
    {

        int right = total - left;
        if (left == right - a[i])
            return i + 1;
        left += a[i];
    }

    return -1;
}