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
#define vecin(name, len) vector<ll> name(len); for (auto &x : name) cin >> x;
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

    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    int n, m;
    cin>>n>>m;

    vector<ii> road(n); for (auto&x:road)cin>>x.ff>>x.ss;
    vector<ii> cow(m); for (auto&x:cow)cin>>x.ff>>x.ss;

    int ans = 0;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            if (road[i].ff == 0 || cow[j].ff == 0)
                continue;

            if (cow[j].ss > road[i].ss)
                ans = max(ans, cow[j].ss - road[i].ss);

            int aux = road[i].ff;
            road[i].ff = max(0, aux-cow[j].ff);
            cow[j].ff = max(0, cow[j].ff-aux);

        }
    }

    cout<<ans<<endl;

    return 0;
}
