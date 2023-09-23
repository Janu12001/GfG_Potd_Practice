vector<int> duplicates(int arr[], int n)
{
    // code here

    vector<int> ans;
    unordered_map<int, int> temp;

    for (int i = 0; i < n; i++)
        temp[arr[i]]++;

    for (int i = 0; i < n; i++)
        if (temp[i] > 1)
            ans.push_back(i);

    if (ans.empty())
        ans.push_back(-1);

    return ans;
}