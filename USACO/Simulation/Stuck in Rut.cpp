#include <complex.h>
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

/*
O que é pedido: Temos que achar todas as colisões entre as coordenadas x e y, tal que x e y sempre são distintos entre duas coordenadas,
exemplo, x1 e x2 sempre são diferentes nunca são iguais, idem para y1 e y2. Usaremos um vetor para guardar a ordem em que aparece as
coordenadas, 2 vetores um para guardar as coordenadas na direção leste e uma para norte e um map de int int para guardar a resposta, em
que a chave será a posição x, ou y, já que são únicas para cada coordenada, com isso leremos as entradas guardamos em ordem[i] x e ans[x]
recebe -1, que é a distância entre as coordenadas, inicialmente é -1, se ele não se colide com nenhuma -1 representa o infinito, após isso
ordenamos o vetor N usando como parâmetro a coordenada x, e o vetor E usamos a coordenada y, pois é o que não se move, logo essa é a forma
de ordenar eles. Desse modo, fazemos dois laços de repetição para percorrer  cada coordenada e comparar se ela se colide com outra, e no caso
em que são iguais, i == j, apenas continuamos, e a condição de colisão é o x do vetor E ser menor que o do N e o y do vetor N ser menor que
o do vetor E. Daí se isso satisfazer e se x2-x1 > y1-y2 o vetor E para e colocamos em ans[x1] = x2-x1, senão ans[x2] = y1-y2.
Enfim, basta iterar o map na ordem de entrada.
*/

bool cond(ii x, ii y) {
    return x.ss < y.ss;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    //freopen("mowing.in", "r", stdin);
    //freopen("mowing.out", "w", stdout);

    int n; cin>>n;
    vi ordem(n);
    vector<ii> E, N;
    map<int, int> ans;

    for (int i=0; i<n; ++i) {
        string c;
        int x, y;
        cin>>c>>x>>y;
        ordem[i] = x;
        ans[x] = -1;

        if (c == "E")
            E.pb({x, y});
        else
            N.pb({x, y});
    }

    sort(all(E), cond);
    sort(all(N));

    for (auto i : E) {
        for (auto j : N) {
            if (ans[j.ff] != -1)
                continue;

            if (i.ff < j.ff && i.ss > j.ss) {
                if (j.ff - i.ff > i.ss-j.ss) {
                    ans[i.ff] = j.ff-i.ff;
                    break;
                }
                else if (i.ss-j.ss > j.ff - i.ff)
                    ans[j.ff] = i.ss-j.ss;
            }
        }
    }

    for (auto x : ordem) {
        if (ans[x] == -1)
            cout<<"Infinity"<<endl;
        else
            cout<<ans[x]<<endl;
    }

    return 0;
}
