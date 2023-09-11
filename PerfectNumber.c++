int isPerfectNumber(long long N)
{

    if (N == 1)
        return 0;
    long long sum = 0;
    for (long long int i = 2; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            sum += i;
            if (i != N / i)
                sum += N / i;
        }
    }
    sum++;

    return sum == N;
}