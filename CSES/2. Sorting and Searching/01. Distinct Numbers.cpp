#include<bits/stdc++.h>
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)x.size()
#define DEBUG(x...)x
#define WW(x) DEBUG(cout<< #x " = " << x << "\n")
using namespace std;
typedef vector<int> vi;
typedef vector<vi> matrix;
typedef long long ll;

//Lição desse problema é quando for usar estruturas dinâmicas como vector, set, map, etc, e estiver dando TLE
// Uma solução pode ser reservar o tamanho máximo que for usar para que a estrutura não precise aumentar em tempo de execução
// Pois, caso precise aumentar em vez da complexidade ser O(1) para inserir, passa a ser O(n).

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    vector<int> v(n); for(auto& x : v) cin>>x;
    unordered_set<int> st;
    st.reserve(200000); // Caso não use reserve, o mesmo código iria dar TLE por causa de re-hashing(alocar mais memoria na tabela).

    for(auto x : v) st.insert(x);

    cout<<sz(st)<<endl;

    return 0;
}
