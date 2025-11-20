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
  Basta verificar as condições para ser um triângulo retângulo, que é 2 coordenadas de x e y tem que se coincidir nos triângulos,
  a e pegar a área max.
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("triangles.in", "r", stdin);
    freopen("triangles.out", "w", stdout);

    int n; cin>>n;
    vi x(n), y(n);
    for (int i = 0; i < n; i++) cin>>x[i]>>y[i];

    int ans = 0;

    for (int i = 0; i < n; i++) { //(x, y1)
        for (int j = 0; j < n; j++) { //(x, y)
            for (int k = 0; k < n; k++) { //(x1, y)
                if (x[i] == x[j] && y[k] == y[j]) {
                    int dx = abs(x[k]-x[j]);
                    int dy = abs(y[i]-y[j]);

                    ans = max(ans, dx*dy);
                }
            }
        }
    }

    cout<<ans<<endl;

    return 0;
}
