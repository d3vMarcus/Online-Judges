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
Resumo do que está acontecendo: Todo mundo começa com um mesmo número e está empatado em um ranking, ao decorrer das atualizações temos que atualizar esse ranking, 
se as posições não mudarem, não fazemos nada, se mudar incrementamos 1 a resposta e atualizamos o ranking. Usaremos um vector de pair<int, pair<string, int>> pode usar um tuple também, 
prefiro pair, para guardar o dia, nome, atualização da quantidade de leite. Com isso, lemos a entrada, e ordenamos com base nos dias. Daí, criamos 3 variáveis 
com as quantidades de leite em que cada vaca irá produzir e inserimos 7 em cada uma, já que é o caso inicial, com isso iteramos por todas as vacas que guardamos acima no vector, e em uma 
variável auxiliar guardamos o max entre a produção de cada vaca e verificamos quem tem produção igual e colocamos em uma nova string auxiliar sendo o novo ranking, e comparamos com o ranking 
antigo, se for diferente incrementamos a resposta em 1 e atualizamos o novo ranking.
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("measurement.in", "r", stdin);
    freopen("measurement.out", "w", stdout);

    int n; cin>>n;
    vector<pair<int, pair<string, int>>> cows(n);
    string ranking = "BEM";

    for (int i = 0; i < n; i++) {
        int x, y;
        string name;

        cin>>x>>name>>y;

        cows[i].ff = x;
        cows[i].ss.ff = name;
        cows[i].ss.ss = y;
    }

    sort(all(cows));
    int b = 7, e = 7, m = 7;
    int ans{};

    for (int i = 0; i < n; i++) {
        if (cows[i].ss.ff == "Bessie")
            b += cows[i].ss.ss;
        if (cows[i].ss.ff == "Elsie")
            e += cows[i].ss.ss;
        if (cows[i].ss.ff == "Mildred")
            m += cows[i].ss.ss;

        string aux = "";

        int mx = max({b, e, m});

        if (mx == b)
            aux += 'B';
        if (mx == e)
            aux += 'E';
        if (mx == m)
            aux += 'M';

        if (ranking != aux) {
            ans++;
            ranking = aux;
        }
    }

    cout<<ans<<endl;

    return 0;
}
