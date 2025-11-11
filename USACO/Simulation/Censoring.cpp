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

Temos que usar uma string auxiliar para receber cada char da string S e colocar um por vez, e verificar se é válido a sequência de caracteres. 
O que é a verificação: Se o tamanho de aux >= T e se os últimos sz(T) caracteres de aux forem iguais a T, tiramos os últimos sz(T) caracteres, 
como fica isso: aux.resize(sz(aux)-sz(T)) -> tiramos os sz(T) últimos caracteres. 

*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    //freopen("censor.in", "r", stdin);
    //freopen("censor.out", "w", stdout);

    string s, t;
    cin>>s>>t;

    string aux;

    for (auto x : s) {
        aux.pb(x);

        if (sz(aux) >= sz(t) && aux.substr(sz(aux)-sz(t)) == t) {
            aux.resize(sz(aux)-sz(t));
        }
    }

    cout<<aux<<endl;

    return 0;
}
