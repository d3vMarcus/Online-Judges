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
Lemos a quantidade de vacas por quarto e somamos cada quantidade e guardamos em uma variável 
auxiliar, com isso, basta simular a passagem, em cada caso começando por cada quarto e guardar 
a menor distância total, o maior aprendizado dessa questão é o loop que fazemos para o quarto voltar 
ao 0 depois de chegar no n-1, basta usar mod n no index do vetor.
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    //freopen("cbarn.in", "r", stdin);
    //freopen("cbarn.out", "w", stdout);

    int n, sum = 0; cin>>n;
    vi v(n);

    for (auto&x:v) {
        cin>>x;
        sum += x;
    }

    int ans = INT_MAX;

    for (int i = 0; i < n; i++) {
        int aux = 0;
        int sum2 = sum;

        for(int u = i; sum2 > 0; u++){
            sum2 -= v[u%n];
            aux += sum2;
        }

        ans = min(ans, aux);
        sum2 = sum;
    }

    cout<<ans<<endl;

    return 0;
}
