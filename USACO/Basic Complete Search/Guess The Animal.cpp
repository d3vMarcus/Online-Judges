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
    O que é pedido:  Dada uma lista de conjuntos, queremos encontrar o par de conjuntos com a maior interseção possível, 
    pois isso representa o cenário onde precisamos do máximo de "sim" para distinguir entre essas duas entidades.

    Guardamos todos os conjuntos de palavras em um vector de set<string> e em cada i guardamos as palavras necessárias para 
    saber aquele animal, com isso fixamos um idx do vetor e iteramos sobre cada elemento do outro comparando se existe aquela
    chave lá dentro, a interseccção se sim temp++, e a resposta é o max(temp) + 1.
    
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("guess.in", "r", stdin);
    freopen("guess.out", "w", stdout);

    int n; cin>>n;
    vector<set<string>> v(n);
    for (int i = 0; i < n; i++) {
        string x;
        int k;
        cin>>x>>k;

        for (int u = 0; u < k; u++) {
            string s; cin>>s;
            v[i].insert(s);
        }
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            int temp = 0;

            for (string s : v[j]) {
                if (v[i].count(s))
                    temp++;
            }

            ans = max(ans, temp);
        }
    }

    cout<<ans+1<<endl;

    return 0;
}
