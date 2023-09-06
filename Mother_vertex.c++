
void dfs(vector<int> &vis, vector<int> adj[], int node, set<int> &st)
{

    vis[node] = 1;
    st.insert(node);
    for (auto it : adj[node])
    {

        if (st.find(it) == st.end())
        {
            dfs(vis, adj, it, st);
        }
    }
}
// Function to find a Mother Vertex in the Graph.
int findMotherVertex(int V, vector<int> adj[])
{
    // Code here
    vector<int> vis(V, 0);
    for (int i = 0; i < V; i++)
    {

        set<int> st;
        if (!vis[i])
            dfs(vis, adj, i, st);

        if (st.size() == V)
            return i;
    }

    return -1;
}
