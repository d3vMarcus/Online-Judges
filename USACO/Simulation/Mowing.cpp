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
    Usamos um map para guardar o tempo da última vez que passamos naquela coordenada, 
    e basicamente a resposta é a menor diferença de tempo entre duas frequências em uma mesma coordenada, 
    caso não exista essa ocorrência, imprimimos -1, caso contrário esse tempo mínimo.
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("mowing.in", "r", stdin);
    freopen("mowing.out", "w", stdout);

    int n;
    cin>>n;
    map<ii, int> ultima_vez;
    int resp = INT_MAX, x = 0, y = 0, tempo = 0;
    ultima_vez[{x, y}] = tempo;

    for (int i = 0 ; i < n; i++) {
        char c;
        int num;
        cin>>c>>num;

        for (int j = 0; j < num; j++) {
            tempo++;

            if (c == 'W') x++;
            if (c == 'E') x--;
            if (c == 'N') y++;
            if (c == 'S') y--;

            ii atual = {x, y};

            if (ultima_vez.find(atual) != ultima_vez.end()) {
                int dt = tempo - ultima_vez[atual];
                resp = min(resp, dt);
            }

            ultima_vez[atual] = tempo;
        }
    }

    if (resp == INT_MAX)
        cout<<-1<<endl;
    else
        cout<<resp<<endl;

    return 0;
}
