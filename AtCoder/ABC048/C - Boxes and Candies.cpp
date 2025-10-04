#include<bits/stdc++.h>
#define pb push_back
#define pf push_front
#define ff first
#define ss second
#define sz(x) (int)(x.size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define DEBUG(x...)x
#define WATCH(x) DEBUG(cout<< #x " = " << x << "\n")
#define endl "\n"
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef unsigned long long ull;
const int M = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x; cin>>n>>x;
    vector<int>v(n); for(auto&u:v)cin>>u;

    ll total = 0, aux = 0;

    for(int i = 1; i < n; i++){
        if(v[i-1] + v[i] > x){
            aux = v[i-1] + v[i] - x; // Total de operações para chegar em x
            if(v[i] < aux) // como v[i] nao pode ser negativo verificamos se ele e menor que o total de operacoes
                v[i] = 0; // se for menor recebe zero
            else
                v[i] -= aux; //senao recebe apenas o total de operacoes para a diferenca ser igual a x

            total += aux;
        }
    }

    cout<<total<<endl;

    return 0;
}
