
// Inorder function
void Inorder(Node *root, vector<int> &ans, int &i)
{

    if (!root)
        return;

    inorder(root->left, ans, i);
    root->data = ans[i];
    i++;
    inorder(root->right, ans, i);
}

// get the data in the vector
void solve(Node *root, vector<int> &ans)
{

    if (root == NULL)
        return;
    solve(root->left, ans);
    ans.push_back(root->data);
    solve(root->right, ans);
}
// The given root is the root of the Binary Tree
// Return the root of the generated BST
Node *binaryTreeToBST(Node *root)
{
    // Your code goes here
    vector<int> ans;
    solve(root, ans);
    sort(ans.begin(), ans.end());
    int i = 0;
    inorder(root, ans, i);
    return root;
}
