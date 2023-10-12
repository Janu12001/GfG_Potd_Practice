class Solution
{
public:
    unordered_map<string, int> mp;
    string check(Node *root, bool &flag)
    {
        if (root == NULL)
            return "#";
        string s = root->data + check(root->left, flag) + check(root->right, flag);
        mp[s]++;
        if (s.length() > 3 && mp[s] == 2)
            flag = true;
        return s;
    }
    int dupSub(Node *root)
    {
        bool flag = false;
        check(root, flag);
        return flag;
    }
};