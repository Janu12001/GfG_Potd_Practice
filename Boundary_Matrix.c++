vector<int> boundary_traversal(vector<vector<int>> matrix, int n, int m)
{
    // code here
    vector<int> result;
    if (n == 1)
    {
        for (int i = 0; i < m; i++)
            result.push_back(matrix[0][i]);
    }
    else if (m == 1)
    {
        for (int i = 0; i < n; i++)
            result.push_back(matrix[i][0]);
    }
    else
    {
        for (int i = 0; i < m; i++)
            result.push_back(matrix[0][i]);
        for (int j = 1; j < n; j++)
            result.push_back(matrix[j][m - 1]);
        for (int i = m - 2; i >= 0; i--)
            result.push_back(matrix[n - 1][i]);
        for (int i = n - 2; i > 0; i--)
            result.push_back(matrix[i][0]);
    }
    return result;
}
