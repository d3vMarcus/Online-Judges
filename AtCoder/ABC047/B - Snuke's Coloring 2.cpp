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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int w, h, n;
    cin>>w>>h>>n;

    pair<int, int> a = {0, 0}, b = {w, h}; // Guardamos apenas os pontos da diagonal e atualizamos eles

    while(n--){
        int xn, yn, an;
        cin>>xn>>yn>>an;

        if(an == 1){
            a.ff = max(xn, a.ff); 
        }
        else if(an == 2){
            b.ff = min(xn, b.ff);
        }
        else if(an == 3){
            a.ss = max(yn, a.ss);
        }
        else
            b.ss = min(yn, b.ss);
    }
  
    if(b.ff - a.ff <= 0 || b.ss - a.ss <= 0) cout<<0<<endl;
    else cout<<(b.ff - a.ff)*(b.ss - a.ss)<<endl;
    
    return 0;
}

// porque usar max e min , se não usarmos, e atribuirmos direto isso a variável .ff e .ss 
//poderia acarretar em voltar os pontos em que a  area ja teria sido coberta, logo isso poderia diminuir o valor da area.
