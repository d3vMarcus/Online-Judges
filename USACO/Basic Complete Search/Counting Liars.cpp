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
    Resumo do problema: Basicamente temos um número e certas buscas, e precisamos
    verificar se alguma dessas buscas se contradizem, e queremos o menor número de
    contradições, logo verificamos todo o intervalo a fim de minimizar as contradições.
    
    Portanto, supomos que todas as buscas inicialmente são contraditórias, ans = n, e 
    a cada iteração verificamos a quantidade de contradições que aquela busca tem no vetor
    e guardamos em uma variável auxiliar, que depois atualizamos em ans = min(ans, aux), com 
    isso sempre atualizando ans para o mínimo de contradições e essa é a resposta.
    
    // Quando se contradiz: Se L -> v[k] > v[L]
    // Se G -> v[k] < v[L]
    
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    vector<pair<int, char>> v(n);
    for(auto&x:v)cin>>x.ss>>x.ff;

    int ans = n;

    for(int i = 0; i < n; i++){
        int aux = 0;
        for(int j = 0; j < n; j++){
            if((v[j].ss == 'L' && v[i].ff > v[j].ff)||(v[j].ss == 'G' && v[i].ff < v[j].ff))
                aux++;
        }
        ans = min(ans, aux);
    }

    cout<<ans<<endl;

    return 0;
}

