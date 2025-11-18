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
O que é pedido: é dado N números, qual quantidade deles que sua diferença 2 a 2 não é maior que K.
Creio que ordenar o vetor é a melhor pedida para este caso, pois isso me garante ao iterar que o 
menor elemento será sempre o v[i], com isso basta comparar com o v[j] e abraço.
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);

    int n, k;
    cin>>n>>k;

    vecin(v, n);
    sort(all(v));

    int ans = 1;

    for (int i = 0; i < n-1; i++) {
        int aux = 1;
        for (int j = i+1; j < n; j++) {
            if (v[j]-v[i] > k)
                break;

            aux++;
        }
        ans = max(ans, aux);
    }

    cout<<ans<<endl;

    return 0;
}
