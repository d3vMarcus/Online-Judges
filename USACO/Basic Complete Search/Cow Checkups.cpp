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
  Truque:
  reverse causa uma simetria 
  -> em impares mid+1 troca com o mid-1
  -> em pares mid troca com mid+1
  em que mid é dado por N-1/2, em que N é a qtd total de elementos.
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    //freopen("balancing.in", "r", stdin);
    //freopen("balancing.out", "w", stdout);

    int n; cin>>n;
    vi a(n), b(n);
    for(auto&x:a)cin>>x;
    for(auto&x:b)cin>>x;

    int before{};
    vi ans(n+1);

    for(int i = 0; i < n; i++)
        if(a[i] == b[i])
            before++; //Caso base antes de qualquer mudança

  // A quantidade de matches depois de uma mudança é = before - y + x, em que y é quantidade de matches antes da mudança e x depois da mudança.

    auto lambda = [&](int l, int r){
        int temp = before; 

        for(; l >= 0 && r < n; l--, r++){
            temp += ((a[l] == b[r]) + (a[r] == b[l])) - ((a[l] == b[l]) + (a[r] == b[r])); // Tiramos a quantidade de matches l e r anterior e atualizamos para os novos.
            ans[temp]++;
        }
    };

    for(int mid = 0; mid < n; mid++){
        lambda(mid, mid); // Passamos por todos os centros de simetria possiveis
        lambda(mid, mid+1); // Idem
    }

    for(auto x : ans) cout<<x<<endl;

    return 0;
}
