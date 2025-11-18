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
O que é pedido: Temos um certo número inteiro positivo M, e com os 2 números dados X e Y temos que descobrir qual é
o maior número inteiro menor ou igual a M que conseguimos formar somando quantas vezes necessárias, inclusive nenhuma, os
números X e Y.

Solução: Para isso precisamos verificar todas as somas entre os múltiplos de X e Y, tais que menores que M.
Para isso basta usar o for, pois como i=0 temos todos os múltiplos até o limite dado ao fazer i*x, ai teremos:
0*x, 1*x, 2*x, 3*x etc, com isso usamos outro for para fixar um múltiplos de x e verificar a mesma coisa em y,
com isso, basta pegar o que mais se aproxima de M, essa é a resposta.

Truque aprendido: A ideia de usar o for para iterar sobre os múltiplos, com isso da pra fixar um certo múltiplo,
enquanto itero sobre outro.

*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);

    int x, y, m;
    cin>>x>>y>>m;

    int ans = 0;

    for (int i = 0; i*x <= m; i++) {
        for (int j = 0; j*y <= m; j++) {
            if (i*x + j*y <= m)
                ans = max(ans, i*x + j*y);
        }
    }

    cout<<ans<<endl;

    return 0;
}
