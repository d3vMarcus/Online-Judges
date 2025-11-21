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
O que é pedido: quantos pares de intervalos a e b se intersectam, das seguintes formas:
A: |---|
B:    |---|

ou

B: |---|
A:    |---|

com isso, guardamos os index da primeira aparição e da segunda em vetores diferentes e iteramos
por S e verificamos se atende as condições do intervalo.

*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("circlecross.in", "r", stdin);
    freopen("circlecross.out", "w", stdout);

    string s; cin>>s;

    vi fi(26, -1), se(26, -1);
    for (int i = 0; i < 52; i++) {
        int u = s[i] - 'A';
        if (fi[u] == -1)
            fi[u] = i;
        else
            se[u] = i;
    }

    int ans =  0;

    for (int i = 0; i < 26; i++) {
        for (int j = i+1; j < 26; j++) {
            int x1 = fi[i], y1 = fi[j];
            int x2 = se[i], y2 = se[j];

            if ((y1 > x1 && x2 > y1 && y2 > x2) || (x1 > y1 && y1 > x2 && x2 > y2))
                ans++;
        }
    }

    cout<<ans<<endl;

    return 0;
}
