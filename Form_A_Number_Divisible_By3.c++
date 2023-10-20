int isPossible(int N, int arr[])
{
    // code here
    long long int sum = 0;
    for (int i = 0; i < N; i++)
    {

        sum += arr[i];
    }

    return sum % 3 == 0;
}