#include<bits/stdc++.h>
#define pb push_back
#define pf push_front
#define ff first
#define ss second
#define sz(x) (int)(x.size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define DEBUG(x...)x
#define WATCH(x) DEBUG(cout<< #x " = " << x << "\n")
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef unsigned long long ull;
const int M = 1e9 + 7;

int n, m;
vector<int> adj[8];
vector<bool> vis(8);
int ans = 0;

void dfs(int x, int cnt){
    if(cnt == n){
        ans++;
        return;
    }
    if(vis[x]) return;

    vis[x] = 1;

    for(int i : adj[x])
        if(!vis[i]){
            dfs(i, cnt+1);
            vis[i] = 0; // Backtracking para desmarcar e percorrer o caminho novamente
        }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n>>m;

    for(int i = 0; i < m; i++){
        int u, v;
        cin>>u>>v;
        u--; v--;
        
        adj[u].pb(v);
        adj[v].pb(u);
    }

    dfs(0, 1);

    cout<<ans<<endl;

    return 0;
}

