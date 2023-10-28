pair<bool, int> balancedfast(Node *root)
{

    if (root == NULL)
    {

        pair<bool, int> p = make_pair(true, 0);
        return p;
    }

    pair<bool, int> left = balancedfast(root->left);
    pair<bool, int> right = balancedfast(root->right);
    bool leftans = left.first;
    bool rightans = right.first;
    bool diff = abs(left.second - right.second) <= 1;
    pair<bool, int> ans;
    ans.second = max(left.second, right.second) + 1;
    if (leftans && rightans && diff)
    {
        ans.first = true;
    }

    else
    {
        ans.first = false;
    }
    return ans;
}
// Function to check whether a binary tree is balanced or not.
bool isBalanced(Node *root)
{
    //  Your Code here
    return balancedfast(root).first;
}
