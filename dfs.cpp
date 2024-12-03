vector<vector<int>> g;
vector<bool> visible;
void dfs(int cur) {
    visibles[cur] = true;
    for(int s : g[cur]) {
        if(visible[s]) continue;
        dfs(s);
    }
}