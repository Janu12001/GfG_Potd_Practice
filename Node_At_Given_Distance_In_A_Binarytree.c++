void mark_parent(Node *root, unordered_map<Node *, Node *> &parent_track)
{

    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {

        Node *curr = q.front();
        q.pop();

        if (curr->left)
        {
            parent_track[curr->left] = curr;
            q.push(curr->left);
        }

        if (curr->right)
        {
            parent_track[curr->right] = curr;
            q.push(curr->right);
        }
    }
}

public:
Node *findNode(Node *root, int target)
{

    if (root == NULL || root->data == target)
    {

        return root;
    }

    Node *left = findNode(root->left, target);
    Node *right = findNode(root->right, target);

    if (left != NULL)
        return left;
    if (right != NULL)
        return right;
}

vector<int> KDistanceNodes(Node *root, int target, int k)
{
    // return the sorted vector of all nodes at k dist
    // parent track

    Node *target_ref = findNode(root, target);
    unordered_map<Node *, Node *> parent_track;
    mark_parent(root, parent_track);

    // do bfs for target node to all nodes radially
    queue<Node *> queue;
    unordered_map<Node *, bool> visited;
    queue.push(target_ref);
    visited[target_ref] = true;
    int curr_level = 0;

    while (!queue.empty())
    {
        int size = queue.size();
        if (curr_level++ == k)
            break;

        for (int i = 0; i < size; i++)
        {
            Node *curr = queue.front();
            queue.pop();

            if (curr->left && !visited[curr->left])
            {

                queue.push(curr->left);
                visited[curr->left] = true;
            }

            if (curr->right && !visited[curr->right])
            {

                queue.push(curr->right);
                visited[curr->right] = true;
            }

            if (parent_track[curr] && !visited[parent_track[curr]])
            {

                queue.push(parent_track[curr]);
                visited[parent_track[curr]] = true;
            }
        }
    }

    vector<int> result;
    while (!queue.empty())
    {

        Node *curr = queue.front();
        queue.pop();
        result.push_back(curr->data);
    }

    sort(result.begin(), result.end());

    return result;
}