class Solution
{
public:
    void getLeafNodesLevel(Node *root, int level, vector<int> &leaf)
    {
        if (!root)
        {
            return;
        }
        if (!root->left and !root->right)
        {
            leaf.push_back(level);
        }
        if (root->left)
        {
            getLeafNodesLevel(root->left, level + 1, leaf);
        }
        if (root->right)
        {
            getLeafNodesLevel(root->right, level + 1, leaf);
        }
    }

    int getCount(Node *root, int k)
    {
        vector<int> leaf;
        getLeafNodesLevel(root, 1, leaf);
        sort(leaf.begin(), leaf.end());
        int count = 0;
        int curr = 0;
        for (int i = 0; i < leaf.size(); i++)
        {
            if (curr + leaf[i] <= k)
            {
                count++;
                curr += leaf[i];
            }
            else
            {
                break;
            }
        }
        return count;
    }
};