#include<bits/stdc++.h>
//#include<numbers>
//#include<chrono>
#define pb push_back
#define pf push_front
#define ff first
#define ss second
#define sz(x) (int)(x.size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define DEBUG(x...)x
#define ww(x) DEBUG(cout<< #x " = " << x << "\n")
#define endl '\n'
#define vecin(name, len) vector<int> name(len); for (auto &x : name) cin >> x;
#define vecout(v) for (auto x : v) cout << x << " "; cout << endl;
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const int MOD = 1e9 + 7;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    //freopen("balancing.in", "r", stdin);
    //freopen("balancing.out", "w", stdout);

    int n, m; cin>>n>>m;
    vector<string> v1(n), v2(n);

    for(int i = 0; i < n; i++) cin>>v1[i];
    for(int i = 0; i < n; i++) cin>>v2[i];

    set<string> triple;

    int ans = 0;
    bool ok;

    for(int i = 0; i < m; i++){
        for(int j = i+1; j < m; j++){
            for(int k = j+1; k < m; k++){

                string aux(3, '#');
                triple.clear();
                ok = 1;

                for(int u = 0; u < n; u++){
                    aux[0] = v1[u][i];
                    aux[1] = v1[u][j];
                    aux[2] = v1[u][k];

                    triple.insert(aux);
                }

                for(int u = 0; u < n; u++){
                    aux[0] = v2[u][i];
                    aux[1] = v2[u][j];
                    aux[2] = v2[u][k];

                    if(triple.count(aux)){
                        ok = 0;
                        break;
                    }
                }

                if(ok)
                    ans++;
            }
        }
    }

    cout<<ans<<endl;

    return 0;
}
