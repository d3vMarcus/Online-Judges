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
  O que é pedido: Temos pares ordenados (x, y) e queremos equilibrar a quantidade de pares em cada quadrante ao 
  mudar de coordenada o eixo das abicissas e ordenadas, basicamente queremos o menor M, M é a maior quantidade de
  pares em um mesmo quadrante. os eixos são postos apenas em coordenadas pares e (x, y) são sempre ímpares.

  Ideia inicial: Iterar por todas os pares (x, y) e verificar a quantidade de pares em cada quadrante -> O((B^2/4)*N) -> TLE
  Ideia Que Resolve: Precisamos Iterar em coordenadas que alteram realmente a quantidade de pares nos quadrantes, que é: (x+1, y+1) 
  pois é diretamente depois de uma vaca, logo altera a quantidadede, e verificamos a quantidade de pontos nessa nova coordenada de eixo.
  
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("balancing.in", "r", stdin);
    freopen("balancing.out", "w", stdout);

    int n, b;
    cin>>n>>b;

    vector<int> px, py;
    vector<ii> coo;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin>>x>>y;
        px.pb(x);
        py.pb(y);
        coo.pb({x, y});
    }

    /*
    1Q -> x1 > x && y1 > y;
    2Q -> x1 < x && y1 > y;
    3Q -> X1 < X && Y1 < Y;
    4Q -> X1 > X && Y1 < Y;
    */

    int ans = INT_MAX;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x = px[i]+1;
            int y = py[j]+1;

            int q1 = 0, q2 = 0, q3 = 0, q4 = 0;

            for (auto u : coo) {
                if (u.ff > x && u.ss > y) q1++;
                if (u.ff < x && u.ss > y) q2++;
                if (u.ff < x && u.ss < y) q3++;
                if (u.ff > x && u.ss < y) q4++;
            }

            ans = min(ans, max({q1, q2, q3, q4}));

        }
    }

    cout<<ans<<endl;

    return 0;
}
