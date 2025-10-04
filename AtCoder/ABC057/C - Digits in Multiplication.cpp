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

ll numero_de_digitos(ll x)
{
    ll cnt = 0;

    while(x > 0){
        x /= 10;
        cnt++;
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin>>n;

    ll ans = INT_MAX, aux;

    for(auto i = 1LL; i*i <= n; i++){ // percorrer no máximo até sqrt(n), pois já passa por todos os divisores ao fazer n/i
      //cuidado, fiz nesse mesmo problema int i = 1 ou nao colocar o LL em 1, deu TLE so por causa disso.
        if(n%i == 0)
            aux = max(numero_de_digitos(i), numero_de_digitos(n/i));
        if(aux < ans)
            ans = aux;
    }

    cout<<ans<<endl;

    return 0;
}
