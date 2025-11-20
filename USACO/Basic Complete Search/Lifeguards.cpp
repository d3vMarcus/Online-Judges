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

/*
  Consideramos o tempo um vetor com o tamanho maior possivel, e a cada intervalo que cada salva vidas cobre
  incrementamos 1 no vetor de tempo, com isso basta testar tirar cada salva vidas e verificar o tamanho restante
  coberto, e manter o maior em uma variavel auxiliar.
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout);

    int n; cin>>n;
    vi time(1002);
    vector<ii> par;

    for (int i = 0; i < n; ++i) {
        int l, r;
        cin>>l>>r;
        par.pb({l, r});
        for (int j = l+1; j <= r; ++j)
            time[j]++;
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {

        vi aux = time;
        int temp{};

        for (int j = par[i].ff+1; j <= par[i].ss; j++)
            aux[j]--;

        for (auto x : aux)
            if (x != 0)
                temp++;

        ans = max(ans, temp);
    }

    cout<<ans<<endl;

    return 0;
}
