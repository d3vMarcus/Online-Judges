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
  O que é pedido: Verificar a quantidade de caracteres em strings do vetor 1 que não sejam iguais as strings do vetor 2 na mesma posição.
  Exemplo se temos: AAGT e ATGA resposta nesse caso é 2 devido as posicoes 2 e 4.

  Meu pensamento foi fixar um caractere no vetor 1 e verificar ele para todos os caracteres de mesma posição nas strings de vetor 2, se forem
  diferentes incremento em uma variável auxiliar. Daí, se essa variável for igual a n^2 incremento na variável de resposta, mas por que n^2?
  é devido quantidade de verificações. Cada caractere de cada string deve ser diferente n vezes, logo se todas forem diferentes irei somar o número n
  n vezes o que corresponde n^2.
  
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);

    int n, m;
    cin>>n>>m;

    vector<string> s1, s2;

    for (int i = 0; i < n; i++) {
        string x;
        cin>>x;
        s1.pb(x);
    }

    for (int i= 0; i < n; i++) {
        string x;
        cin>>x;
        s2.pb(x);
    }

    int ans = 0;

    for (int i = 0; i < m; i++) {
        int aux = 0;
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (s1[j][i] != s2[k][i]) {
                    aux++;
                }
            }
        }
        if (aux == n*n) {
            ans++;
        }
    }

    cout<<ans<<endl;

    return 0;
}
