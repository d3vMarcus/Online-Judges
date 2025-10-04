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
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef unsigned long long ull;
const int M = 1e9 + 7;

/*
  os casos triviais podem ser feitos em 1 ou 2 giradas.

  Nos casos maiores basta pegar quantas vezes o número x cabe na maior soma possível do dado.
  que no caso é 11, pois podemos pegar qualquer número ao girar 90 graus, logo podemos iniciar
  com 5, ou 6, e ficar alternando entre 5 e 6 até chegar no maior número menor ou igual a x, se
  esse número for x, então o resultado é simplesmente (x/11) * 2, senão basta somar o resto que
  conseguimos fazer em uma ou duas giradas, duas se x%11 > 6.
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll x; cin>>x;

    if(x < 7) cout<<1<<endl;
    else if(x < 12) cout<<2<<endl;
    else if(x % 11 == 0) cout<<2*(x/11)<<endl;
    else if(x % 11 != 0 && x%11 > 6) cout<<2*(x/11) + 2<<endl;
    else cout<<2*(x/11) + 1<<endl;

    return 0;
}
