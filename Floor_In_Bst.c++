int floor(Node *root, int x)
{
    // Code here
    int ans = -1;
    while (root != NULL)
    {
        if (root->data <= x)
        {
            ans = max(ans, root->data);
            root = root->right;
        }

        else
            root = root->left;
    }

    return ans;
}