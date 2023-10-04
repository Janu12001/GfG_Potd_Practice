int romanToDecimal(string &str)
{
    // code here
    map<char, int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;

    int sum = m[str.back()];
    for (int i = 0; i < str.size() - 1; i++)
    {

        if (m[str[i]] < m[str[i + 1]])
        {
            sum -= m[str[i]];
        }

        else
        {
            sum += m[str[i]];
        }
    }

    return sum;
}