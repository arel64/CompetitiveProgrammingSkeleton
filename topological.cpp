int flag, v[..];
int od[..], p; // the final order
void dfs(int a) {
if(v[a]==1) flag = 1;
if(v[a]) return;
v[a] = 1; // gray
for each neighbor a -> i dfs(i);
v[a] = 2; // black
od[p] = a; p--;
}

for(i=0; i<n; i++) v[i]=0; //white

flag=0; p=n-1;

for(i=0; i<n; i++) 
    if(!v[i])
        dfs(i);

if(flag) say there is a cycle;





////
void Graph::topologicalSortUtil(int v, bool visited[],
                                stack<int>& Stack)
{
    // Mark the current node as visited.
    visited[v] = true;
 
    // Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            topologicalSortUtil(*i, visited, Stack);
 
    // Push current vertex to stack which stores result
    Stack.push(v);
}
 
// The function to do Topological Sort. It uses recursive
// topologicalSortUtil()
void Graph::topologicalSort()
{
    stack<int> Stack;
 
    // Mark all the vertices as not visited
    bool* visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
 
    // Call the recursive helper function to store Topological
    // Sort starting from all vertices one by one
    for (int i = 0; i < V; i++)
        if (visited[i] == false)
            topologicalSortUtil(i, visited, Stack);
 
    // Print contents of stack
    while (Stack.empty() == false) {
        cout << Stack.top() << " ";
        Stack.pop();
    }
}