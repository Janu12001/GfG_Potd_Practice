class Solution
{
public:
    void inorder(Node *root, vector<int> &v)
    {
        if (root != nullptr)
        {
            inorder(root->left, v);
            v.push_back(root->data);
            inorder(root->right, v);
        }
    }
    // Function to find the nodes that are common in both BST.
    vector<int> findCommon(Node *root1, Node *root2)
    {
        // Your code here
        vector<int> v1;
        vector<int> v2;
        inorder(root1, v1);
        inorder(root2, v2);
        vector<int> v3;
        int n = v1.size();
        int m = v2.size();
        unordered_set<int> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(v1[i]);
        }
        for (int i = 0; i < m; i++)
        {
            if (s.find(v2[i]) != s.end())
                v3.push_back(v2[i]);
        }
        return v3;
    }
};
