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
O maior desafio é calcular o custo mínimo e atualizá-lo a cada mudança, para isso faremos uma função para calcular esse custo.
Percorremos apenas um quadrante dessa matriz, e usaremos relações nos índices para pegar a célula no respectivo quadrante refletido.
As relações são ( i , j ), (i, n - 1 - j ),( n - 1 - i, j ), ( n - 1 - i, n - 1 - j).
Na função precisamos apenas verificar se cada um desses índices são iguais a #, exemplo poderia ser . sem problema,
Com isso retornamos o mínimo entre a quantidade de # ou 4 - essa diferença, que representa a quantidade mínima de operações para chegar no outro caso.
Agora para as atualizações lemos r e c e verificamos em qual quadrante eles estão, e transformá-los para o quadrante em que estamos iterando, pois escolhemos algum,
no meu caso escolhi o quadrante superior esquerdo, logo ele recebe o min(r, n-1-r) e min(c, n-1-c).
Com isso, tiramos o custo atual desse quadrante do total, total  = total - custo(r, c), atualizamos a matriz com os updates e depois colocamos de volta o novo custo.

*/

int cost(int n, vector<string>& v, int r, int c) {

    int mn = 0;

    mn += (v[r][c] == '#');
    mn += (v[r][n-1-c] == '#');
    mn += (v[n-1-r][c] == '#');
    mn += (v[n-1-r][n-1-c] == '#');

    return min(mn, 4-mn);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    //freopen("cbarn.in", "r", stdin);
    //freopen("cbarn.out", "w", stdout);

    int n, u;
    cin>>n>>u;
    vector<string> v(n);
    for (auto&x:v)cin>>x;

    int total = 0;

    for (int i = 0; i < n/2; i++)
        for (int j = 0; j < n/2; j++)
            total += cost(n, v, i, j);

    cout<<total<<endl;

    for (int i = 0; i < u; i++) {
        int r, c; cin>>r>>c; r--; c--;

        int r2 = (r < n/2) ? r : n-1-r;
        int c2 = (c < n/2) ? c : n-1-c;

        total -= cost(n, v, r2, c2);

        if (v[r][c] == '#')
            v[r][c] = '.';
        else
            v[r][c] = '#';

        total += cost(n, v, r2, c2);

        cout<<total<<endl;
    }

    return 0;
}
