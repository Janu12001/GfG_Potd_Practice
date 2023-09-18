unsigned int getFirstSetBit(int n)
{
    // Your code here
    int mark = 1;
    int counter = 1;
    while (n)
    {

        if (n & mark)
            return counter;
        n = n >> 1;
        counter += 1;
    }

    return 0;
}