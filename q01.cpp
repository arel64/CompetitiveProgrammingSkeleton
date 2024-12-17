

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
const ll INF = 1e18;

/*void DFSUtil(int v, vector<bool>& visited, vector<vector<int>>& adj,vector<int>& currentComponet)
{
    visited[v] = true;
    currentComponet.push_back(v);
    for (auto i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited,adj,currentComponet);
}
void solve(vector<vector<int>>& g,int a,int b) {
    std::vector<bool> visited(g.size(), false);
    vector<int> currentComponet = vector<int>();
    visited[0] = true;
    ll count = 0;
    for (int v = 0; v < g.size(); v++) {
        if (visited[v] == false) {
            DFSUtil(v, visited,g,currentComponet);
            //solve
            if (currentComponet.size() < 3){
                continue;
            }
            
            std::vector<int> adjNumbers = vector<int>(currentComponet.size());
            for(int i = 0; i <currentComponet.size();i++)
            {
                adjNumbers[i] = g[currentComponet[i]].size();
            }
            sort(adjNumbers.begin(),adjNumbers.end());
            for(int i = 0; i < adjNumbers.size(); i++){
                int amin = adjNumbers[0];
                if( i == 0 )
                {
                    amin = adjNumbers[1];
                }
                int amax = adjNumbers[adjNumbers.size() - 1];
                if( i== adjNumbers.size()-1)
                {
                    amax = adjNumbers[adjNumbers.size()-2];
                }
                if(adjNumbers[i] > a*amin && adjNumbers[i] < b*amax){
                    count++;
                }
            }
            currentComponet.clear();
        }
    }
    cout << count << endl;
}
*/
/*
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int vertecies, edges, a, b;
    cin >> vertecies;
    cin >> edges;
    cin >> a;
    cin >> b;
    vector<vector<int>> g = vector<vector<int>>(vertecies + 1, vector<int>());;
    int t = edges;
    while (t--)
    {
        int s,e;
        cin >>  e;
        cin >>  s;
        g[s].push_back(e);
        g[e].push_back(s);  
    }
    solve(g,a,b);
    return 0; 
}
*/
bool comp(char a, char b) {
      return a>b;
}
void solve(long long a, long long b)
{
    std::string astr = std::to_string(a);
    std::string bstr = std::to_string(b);
    sort(astr.begin(),astr.end(),comp);
    if ( astr.size() < bstr.size())
    {
        cout << astr << endl;
        return;
    }
    int printedChars = 0;
    int i = 0;
    while(astr.size() > 0 && i < astr.size())
    {
        char c = astr[i];
        if( c< bstr[printedChars])
        {
            cout << c;
            astr.erase(i,1);
            break;
        }
        else
        if (c == bstr[printedChars])
        {
            cout << c;
            printedChars++;
            astr.erase(i,1);
            i = 0;
        }
        else{

            i++;
        }
    }

    cout << astr << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a,b;
    cin >> a;
    cin >> b;
    solve(a,b);
}