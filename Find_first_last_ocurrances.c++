int first = -1, last = -1;
for (int i = 0; i < n; i++)
{
    if (arr[i] == x && first == -1)
    {
        first = i;
        last = i;
    }
    else if (arr[i] == x)
    {
        last = i;
    }
}
return {first, last};