vector<vector<int>> fourSum(vector<int> &arr, int k)
{
    // Your code goes here
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    int n = arr.size();
    // loop for Ist pointer
    for (int i = 0; i < n - 3; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
        {
            continue;
        }

        // loop for 2nd pointer
        for (int j = i + 1; j < n - 2; j++)
        {
            if (j > i + 1 && arr[j] == arr[j - 1])
            {
                continue;
            }

            int sum = k - (arr[i] + arr[j]);

            int l = j + 1, h = n - 1;

            while (l < h)
            {

                if (arr[l] + arr[h] == sum)
                {
                    vector<int> oneans = {arr[i], arr[j], arr[l], arr[h]};
                    ans.push_back(oneans);

                    while (l < h && arr[l] == arr[l + 1])
                    {
                        l++;
                    }
                    while (l < h && arr[h] == arr[h - 1])
                    {
                        h--;
                    }
                    l++;
                    h--;
                }

                else if (arr[l] + arr[h] < sum)
                {
                    l++;
                }
                else
                {
                    h--;
                }
            }
        }
    }

    return ans;
}