class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<int> adj[]) {
        // Code here
        vector<vector<int>> m;
        vector<int> a;
        for(int v=0; v<V; v++){
            a.push_back(v);
            for(auto x: adj[v]){
                a.push_back(x);
            }
            sort(a.begin()+1, a.end());
            m.push_back(a);
            a.clear();
        }
        return m;
    }
};
