void solve(Node *root, vector<int> &ans)
{

    if (root == NULL)

        return;

    solve(root->left, ans);

    ans.push_back(root->data);

    solve(root->right, ans);
}
int kthLargest(Node *root, int K)
{
    // Your code here
    vector<int> ans;
    solve(root, ans);
    int n = ans.size();
    return ans[n - K];
}