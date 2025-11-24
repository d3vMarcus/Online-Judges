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
  O que é pedido: é dado K sequências e queremos saber quantos pares não mudam de ordem,
  exemplo [4 1 2 3] e [4 1 3 2] os pares que não mudaram de ordem foram: (4, 1),
  (4, 2), (4, 3), (1, 2) e (1, 3), basicamente se um número vem primeiro que outro ele deve
  continuar assim, não muda a ordem entre eles, e queremos saber a quantidade desses pares
  que não mudam de ordem em K sequências dadas. Para isso, usamos iteramos por cada vetor
  guardando a frequência do par no map, já que o par é a chave do map, logo basta ver a
  quantidae de pares tem frequência igual a K que é a resposta.
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);

    int k, n;
    cin>>k>>n;
    int ans = 0;

    vector<vi> v(k, vi(n));
    for (int i = 0; i < k; i++)
        for (int j = 0; j < n; j++)
            cin>>v[i][j];

    map<ii, int> mp;

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n-1; j++) {
            for (int u = j+1; u < n; k++) {
                mp[{v[i][j], v[i][u]}]++;
            }
        }
    }

    for (auto x : mp) {
        if (x.ss == k)
            ans++;
    }

    cout<<ans<<endl;

    return 0;
}
